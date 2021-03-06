/**
 *  @file
 *  @copyright defined in mechart_ios/LICENSE
 */

#ifndef __CGRIDCELLEXTENDSME_H__
#define __CGRIDCELLEXTENDSME_H__
#pragma once
#include "stdafx.h"
#include "CGridCell.h"
#include "CGridColumn.h"
#include "CGridRow.h"
#include "CGrid.h"

namespace MeLib
{
	class CGridCellMe;
	class CGridColumnMe;
	class CGridRowMe;
	class CGridMe;
	class CButtonMe;
	class CCheckBoxMe;
	class CComboBoxMe;
	class DatePickerA;
	class CLabelMe;
	class CSpinMe;
	class CRadioButtonMe;
	class CTextBoxMe;
    
	class CGridBoolCellMe : public CGridCellMe
	{
	protected:
		bool m_value;
	public:
		CGridBoolCellMe();
		CGridBoolCellMe(bool value);
		virtual ~CGridBoolCellMe();
	public:
		virtual int CompareTo(CGridCellMe *cell);
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual String GetString();
	    virtual void SetBool(bool value);
        virtual void SetDouble(double value);
        virtual void SetFloat(float value);
        virtual void SetInt(int value);
        virtual void SetLong(_int64 value);
        virtual void SetString(const String& value);
	};
    
	class CGridButtonCellMe: public CGridControlCellMe
	{
	public:
		CGridButtonCellMe();
		virtual ~CGridButtonCellMe();
		CButtonMe* GetButton();
	};
    
	class CGridCheckBoxCellMe : public CGridControlCellMe
	{
	protected:
	public:
		CGridCheckBoxCellMe();
		virtual ~CGridCheckBoxCellMe();
		CCheckBoxMe* GetCheckBox();
	public:
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual String GetString();
		virtual void SetBool(bool value);
		virtual void SetDouble(double value);
        virtual void SetFloat(float value);
        virtual void SetInt(int value);
        virtual void SetLong(_int64 value);
        virtual void SetString(const String& value);
	};
    
    class CGridComboBoxCellMe : public CGridControlCellMe
	{
	public:
		CGridComboBoxCellMe();
		virtual ~CGridComboBoxCellMe();
		CComboBoxMe* GetComboBox();
	public:
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual String GetString();
        virtual void OnAdd();
        virtual void OnRemove();
		virtual void SetBool(bool value);
		virtual void SetDouble(double value);
        virtual void SetFloat(float value);
        virtual void SetInt(int value);
        virtual void SetLong(_int64 value);
        virtual void SetString(const String& value);
	};
    
	class CGridDivCellMe : public CGridControlCellMe
	{
	public:
		CGridDivCellMe();
		virtual ~CGridDivCellMe();
		DivMe* GetDiv();
	};
    
	class CGridDoubleCellMe : public CGridCellMe
	{
	protected:
		double m_value;
	public:
		CGridDoubleCellMe();
		CGridDoubleCellMe(double value);
		virtual ~CGridDoubleCellMe();
	public:
		virtual int CompareTo(CGridCellMe *cell);
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual String GetString();
		virtual void SetBool(bool value);
        virtual void SetDouble(double value);
        virtual void SetFloat(float value);
        virtual void SetInt(int value);
        virtual void SetLong(_int64 value);
        virtual void SetString(const String& value);
	};
    
	class CGridFloatCellMe : public CGridCellMe
	{
	protected:
		float m_value;
	public:
		CGridFloatCellMe();
		CGridFloatCellMe(float value);
		virtual ~CGridFloatCellMe();
	public:
		virtual int CompareTo(CGridCellMe *cell);
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual String GetString();
		virtual void SetBool(bool value);
        virtual void SetDouble(double value);
        virtual void SetFloat(float value);
        virtual void SetInt(int value);
        virtual void SetLong(_int64 value);
        virtual void SetString(const String& value);
	};
    
	class CGridIntCellMe : public CGridCellMe
	{
	protected:
		int m_value;
	public:
		CGridIntCellMe();
		CGridIntCellMe(int value);
		virtual ~CGridIntCellMe();
	public:
		virtual int CompareTo(CGridCellMe *cell);
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual String GetString();
		virtual void SetBool(bool value);
        virtual void SetDouble(double value);
        virtual void SetFloat(float value);
        virtual void SetInt(int value);
        virtual void SetLong(_int64 value);
        virtual void SetString(const String& value);
	};
    
	class CGridLabelCellMe : public CGridControlCellMe
	{
	public:
		CGridLabelCellMe();
		virtual ~CGridLabelCellMe();
		CLabelMe* GetLabel();
	};
    
	class CGridLongCellMe : public CGridCellMe
	{
	protected:
		_int64 m_value;
	public:
		CGridLongCellMe();
		CGridLongCellMe(_int64 value);
		virtual ~CGridLongCellMe();
	public:
		virtual int CompareTo(CGridCellMe *cell);
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual String GetString();
		virtual void SetBool(bool value);
        virtual void SetDouble(double value);
        virtual void SetFloat(float value);
        virtual void SetInt(int value);
        virtual void SetLong(_int64 value);
        virtual void SetString(const String& value);
	};
    
	class CGridRadioButtonCellMe : public CGridControlCellMe
	{
	public:
		CGridRadioButtonCellMe();
		virtual ~CGridRadioButtonCellMe();
		CRadioButtonMe* GetRadioButton();
	public:
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual String GetString();
		virtual void SetBool(bool value);
		virtual void SetDouble(double value);
        virtual void SetFloat(float value);
        virtual void SetInt(int value);
        virtual void SetLong(_int64 value);
        virtual void SetString(const String& value);
	};
    
    class CGridSpinCellMe : public CGridControlCellMe
	{
	public:
		CGridSpinCellMe();
		virtual ~CGridSpinCellMe();
		CSpinMe* GetSpin();
	public:
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual void SetBool(bool value);
		virtual void SetDouble(double value);
        virtual void SetFloat(float value);
        virtual void SetInt(int value);
        virtual void SetLong(_int64 value);
	};
    
	class CGridStringCellMe : public CGridCellMe
	{
	protected:
		String m_value;
	public:
		CGridStringCellMe();
		CGridStringCellMe(const String& value);
		virtual ~CGridStringCellMe();
	public:
		virtual int CompareTo(CGridCellMe *cell);
		virtual bool GetBool();
		virtual double GetDouble();
		virtual float GetFloat();
		virtual int GetInt();
		virtual _int64 GetLong();
		virtual String GetString();
		virtual void SetString(const String& value);
	};
    
	class CGridPasswordCellMe : public CGridStringCellMe
	{
	public:
		CGridPasswordCellMe();
		virtual ~CGridPasswordCellMe();
	public:
		virtual String GetPaintText();
	};

	class CGridTextBoxCellMe: public CGridControlCellMe
	{
	public:
		CGridTextBoxCellMe();
		virtual ~CGridTextBoxCellMe();
		CTextBoxMe* GetTextBox();
	};
}
#endif
