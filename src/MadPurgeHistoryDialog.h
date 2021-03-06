///////////////////////////////////////////////////////////////////////////////
// Name:		MadPurgeHistoryDialog.h
// Description:
// Author:		minggang.li@gmail.com
// Licence: 	GPL
///////////////////////////////////////////////////////////////////////////////

#ifndef __MADPURGEHISTORYDIALOG_H__
#define __MADPURGEHISTORYDIALOG_H__

#ifdef _MSC_VER
# pragma warning( push )
# pragma warning( disable : 4996 )
#endif
// disable 4996 {
//(*Headers(MadPurgeHistoriesDialog)
#include <wx/sizer.h>
#include <wx/checkbox.h>
#include <wx/button.h>
#include <wx/dialog.h>
//*)
// disable 4996 }
#ifdef _MSC_VER
# pragma warning( pop )
#endif

class MadPurgeHistoryDialog : public wxDialog
{
	public:

		MadPurgeHistoryDialog(wxWindow* parent,wxWindowID id=wxID_ANY,const wxPoint& pos=wxDefaultPosition,const wxSize& size=wxDefaultSize);
		virtual ~MadPurgeHistoryDialog();

		//(*Declarations(MadPurgeHistoryDialog)
		wxCheckBox* wxCheckBoxRecentEncodings;
		wxCheckBox* wxCheckBoxResetToolBarsInfoWin;
		wxCheckBox* wxCheckBoxCaretPos;
		wxCheckBox* wxCheckBoxRecentSearchedExcludeFilters;
		wxCheckBox* wxCheckBoxAllAbove;
		wxCheckBox* wxCheckBoxRecentFonts;
		wxCheckBox* wxCheckBoxRecentSearchedDirectories;
		wxButton* WxButtonCancel;
		wxCheckBox* wxCheckBoxRecentSearchedTexts;
		wxButton* WxButtonOK;
		wxCheckBox* wxRecentSearchedFileFilters;
		wxCheckBox* wxCheckBoxRecentFiles;
		wxCheckBox* wxCheckBoxRecentReplacedTexts;
		//*)

	protected:

		//(*Identifiers(MadPurgeHistoryDialog)
		//*)

	private:

		//(*Handlers(MadPurgeHistoryDialog)
		void MadPurgeHistoryDialogClose(wxCloseEvent& event);
		void WxButtonPurgeClick(wxCommandEvent& event);
		void WxButtonOKClick(wxCommandEvent& event);
		void WxButtonCancelClick(wxCommandEvent& event);
		void wxCheckBoxAllAboveClick(wxCommandEvent& event);
		void MadPurgeHistoryDialogKeyDown(wxKeyEvent& event);
		//*)
};

#endif
