#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0041DF00
// Address: 0x41df00 - 0x41e220
void sub_0041DF00_0x41df00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041DF00_0x41df00");
#endif

    switch (ctx->pc) {
        case 0x41df00u: goto label_41df00;
        case 0x41df04u: goto label_41df04;
        case 0x41df08u: goto label_41df08;
        case 0x41df0cu: goto label_41df0c;
        case 0x41df10u: goto label_41df10;
        case 0x41df14u: goto label_41df14;
        case 0x41df18u: goto label_41df18;
        case 0x41df1cu: goto label_41df1c;
        case 0x41df20u: goto label_41df20;
        case 0x41df24u: goto label_41df24;
        case 0x41df28u: goto label_41df28;
        case 0x41df2cu: goto label_41df2c;
        case 0x41df30u: goto label_41df30;
        case 0x41df34u: goto label_41df34;
        case 0x41df38u: goto label_41df38;
        case 0x41df3cu: goto label_41df3c;
        case 0x41df40u: goto label_41df40;
        case 0x41df44u: goto label_41df44;
        case 0x41df48u: goto label_41df48;
        case 0x41df4cu: goto label_41df4c;
        case 0x41df50u: goto label_41df50;
        case 0x41df54u: goto label_41df54;
        case 0x41df58u: goto label_41df58;
        case 0x41df5cu: goto label_41df5c;
        case 0x41df60u: goto label_41df60;
        case 0x41df64u: goto label_41df64;
        case 0x41df68u: goto label_41df68;
        case 0x41df6cu: goto label_41df6c;
        case 0x41df70u: goto label_41df70;
        case 0x41df74u: goto label_41df74;
        case 0x41df78u: goto label_41df78;
        case 0x41df7cu: goto label_41df7c;
        case 0x41df80u: goto label_41df80;
        case 0x41df84u: goto label_41df84;
        case 0x41df88u: goto label_41df88;
        case 0x41df8cu: goto label_41df8c;
        case 0x41df90u: goto label_41df90;
        case 0x41df94u: goto label_41df94;
        case 0x41df98u: goto label_41df98;
        case 0x41df9cu: goto label_41df9c;
        case 0x41dfa0u: goto label_41dfa0;
        case 0x41dfa4u: goto label_41dfa4;
        case 0x41dfa8u: goto label_41dfa8;
        case 0x41dfacu: goto label_41dfac;
        case 0x41dfb0u: goto label_41dfb0;
        case 0x41dfb4u: goto label_41dfb4;
        case 0x41dfb8u: goto label_41dfb8;
        case 0x41dfbcu: goto label_41dfbc;
        case 0x41dfc0u: goto label_41dfc0;
        case 0x41dfc4u: goto label_41dfc4;
        case 0x41dfc8u: goto label_41dfc8;
        case 0x41dfccu: goto label_41dfcc;
        case 0x41dfd0u: goto label_41dfd0;
        case 0x41dfd4u: goto label_41dfd4;
        case 0x41dfd8u: goto label_41dfd8;
        case 0x41dfdcu: goto label_41dfdc;
        case 0x41dfe0u: goto label_41dfe0;
        case 0x41dfe4u: goto label_41dfe4;
        case 0x41dfe8u: goto label_41dfe8;
        case 0x41dfecu: goto label_41dfec;
        case 0x41dff0u: goto label_41dff0;
        case 0x41dff4u: goto label_41dff4;
        case 0x41dff8u: goto label_41dff8;
        case 0x41dffcu: goto label_41dffc;
        case 0x41e000u: goto label_41e000;
        case 0x41e004u: goto label_41e004;
        case 0x41e008u: goto label_41e008;
        case 0x41e00cu: goto label_41e00c;
        case 0x41e010u: goto label_41e010;
        case 0x41e014u: goto label_41e014;
        case 0x41e018u: goto label_41e018;
        case 0x41e01cu: goto label_41e01c;
        case 0x41e020u: goto label_41e020;
        case 0x41e024u: goto label_41e024;
        case 0x41e028u: goto label_41e028;
        case 0x41e02cu: goto label_41e02c;
        case 0x41e030u: goto label_41e030;
        case 0x41e034u: goto label_41e034;
        case 0x41e038u: goto label_41e038;
        case 0x41e03cu: goto label_41e03c;
        case 0x41e040u: goto label_41e040;
        case 0x41e044u: goto label_41e044;
        case 0x41e048u: goto label_41e048;
        case 0x41e04cu: goto label_41e04c;
        case 0x41e050u: goto label_41e050;
        case 0x41e054u: goto label_41e054;
        case 0x41e058u: goto label_41e058;
        case 0x41e05cu: goto label_41e05c;
        case 0x41e060u: goto label_41e060;
        case 0x41e064u: goto label_41e064;
        case 0x41e068u: goto label_41e068;
        case 0x41e06cu: goto label_41e06c;
        case 0x41e070u: goto label_41e070;
        case 0x41e074u: goto label_41e074;
        case 0x41e078u: goto label_41e078;
        case 0x41e07cu: goto label_41e07c;
        case 0x41e080u: goto label_41e080;
        case 0x41e084u: goto label_41e084;
        case 0x41e088u: goto label_41e088;
        case 0x41e08cu: goto label_41e08c;
        case 0x41e090u: goto label_41e090;
        case 0x41e094u: goto label_41e094;
        case 0x41e098u: goto label_41e098;
        case 0x41e09cu: goto label_41e09c;
        case 0x41e0a0u: goto label_41e0a0;
        case 0x41e0a4u: goto label_41e0a4;
        case 0x41e0a8u: goto label_41e0a8;
        case 0x41e0acu: goto label_41e0ac;
        case 0x41e0b0u: goto label_41e0b0;
        case 0x41e0b4u: goto label_41e0b4;
        case 0x41e0b8u: goto label_41e0b8;
        case 0x41e0bcu: goto label_41e0bc;
        case 0x41e0c0u: goto label_41e0c0;
        case 0x41e0c4u: goto label_41e0c4;
        case 0x41e0c8u: goto label_41e0c8;
        case 0x41e0ccu: goto label_41e0cc;
        case 0x41e0d0u: goto label_41e0d0;
        case 0x41e0d4u: goto label_41e0d4;
        case 0x41e0d8u: goto label_41e0d8;
        case 0x41e0dcu: goto label_41e0dc;
        case 0x41e0e0u: goto label_41e0e0;
        case 0x41e0e4u: goto label_41e0e4;
        case 0x41e0e8u: goto label_41e0e8;
        case 0x41e0ecu: goto label_41e0ec;
        case 0x41e0f0u: goto label_41e0f0;
        case 0x41e0f4u: goto label_41e0f4;
        case 0x41e0f8u: goto label_41e0f8;
        case 0x41e0fcu: goto label_41e0fc;
        case 0x41e100u: goto label_41e100;
        case 0x41e104u: goto label_41e104;
        case 0x41e108u: goto label_41e108;
        case 0x41e10cu: goto label_41e10c;
        case 0x41e110u: goto label_41e110;
        case 0x41e114u: goto label_41e114;
        case 0x41e118u: goto label_41e118;
        case 0x41e11cu: goto label_41e11c;
        case 0x41e120u: goto label_41e120;
        case 0x41e124u: goto label_41e124;
        case 0x41e128u: goto label_41e128;
        case 0x41e12cu: goto label_41e12c;
        case 0x41e130u: goto label_41e130;
        case 0x41e134u: goto label_41e134;
        case 0x41e138u: goto label_41e138;
        case 0x41e13cu: goto label_41e13c;
        case 0x41e140u: goto label_41e140;
        case 0x41e144u: goto label_41e144;
        case 0x41e148u: goto label_41e148;
        case 0x41e14cu: goto label_41e14c;
        case 0x41e150u: goto label_41e150;
        case 0x41e154u: goto label_41e154;
        case 0x41e158u: goto label_41e158;
        case 0x41e15cu: goto label_41e15c;
        case 0x41e160u: goto label_41e160;
        case 0x41e164u: goto label_41e164;
        case 0x41e168u: goto label_41e168;
        case 0x41e16cu: goto label_41e16c;
        case 0x41e170u: goto label_41e170;
        case 0x41e174u: goto label_41e174;
        case 0x41e178u: goto label_41e178;
        case 0x41e17cu: goto label_41e17c;
        case 0x41e180u: goto label_41e180;
        case 0x41e184u: goto label_41e184;
        case 0x41e188u: goto label_41e188;
        case 0x41e18cu: goto label_41e18c;
        case 0x41e190u: goto label_41e190;
        case 0x41e194u: goto label_41e194;
        case 0x41e198u: goto label_41e198;
        case 0x41e19cu: goto label_41e19c;
        case 0x41e1a0u: goto label_41e1a0;
        case 0x41e1a4u: goto label_41e1a4;
        case 0x41e1a8u: goto label_41e1a8;
        case 0x41e1acu: goto label_41e1ac;
        case 0x41e1b0u: goto label_41e1b0;
        case 0x41e1b4u: goto label_41e1b4;
        case 0x41e1b8u: goto label_41e1b8;
        case 0x41e1bcu: goto label_41e1bc;
        case 0x41e1c0u: goto label_41e1c0;
        case 0x41e1c4u: goto label_41e1c4;
        case 0x41e1c8u: goto label_41e1c8;
        case 0x41e1ccu: goto label_41e1cc;
        case 0x41e1d0u: goto label_41e1d0;
        case 0x41e1d4u: goto label_41e1d4;
        case 0x41e1d8u: goto label_41e1d8;
        case 0x41e1dcu: goto label_41e1dc;
        case 0x41e1e0u: goto label_41e1e0;
        case 0x41e1e4u: goto label_41e1e4;
        case 0x41e1e8u: goto label_41e1e8;
        case 0x41e1ecu: goto label_41e1ec;
        case 0x41e1f0u: goto label_41e1f0;
        case 0x41e1f4u: goto label_41e1f4;
        case 0x41e1f8u: goto label_41e1f8;
        case 0x41e1fcu: goto label_41e1fc;
        case 0x41e200u: goto label_41e200;
        case 0x41e204u: goto label_41e204;
        case 0x41e208u: goto label_41e208;
        case 0x41e20cu: goto label_41e20c;
        case 0x41e210u: goto label_41e210;
        case 0x41e214u: goto label_41e214;
        case 0x41e218u: goto label_41e218;
        case 0x41e21cu: goto label_41e21c;
        default: break;
    }

    ctx->pc = 0x41df00u;

label_41df00:
    // 0x41df00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x41df00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_41df04:
    // 0x41df04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x41df04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41df08:
    // 0x41df08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41df08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41df0c:
    // 0x41df0c: 0x8c860074  lw          $a2, 0x74($a0)
    ctx->pc = 0x41df0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_41df10:
    // 0x41df10: 0x8c870070  lw          $a3, 0x70($a0)
    ctx->pc = 0x41df10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_41df14:
    // 0x41df14: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x41df14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_41df18:
    // 0x41df18: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x41df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41df1c:
    // 0x41df1c: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x41df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_41df20:
    // 0x41df20: 0x8c630224  lw          $v1, 0x224($v1)
    ctx->pc = 0x41df20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 548)));
label_41df24:
    // 0x41df24: 0x54640007  bnel        $v1, $a0, . + 4 + (0x7 << 2)
label_41df28:
    if (ctx->pc == 0x41DF28u) {
        ctx->pc = 0x41DF28u;
            // 0x41df28: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x41DF2Cu;
        goto label_41df2c;
    }
    ctx->pc = 0x41DF24u;
    {
        const bool branch_taken_0x41df24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x41df24) {
            ctx->pc = 0x41DF28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DF24u;
            // 0x41df28: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DF44u;
            goto label_41df44;
        }
    }
    ctx->pc = 0x41DF2Cu;
label_41df2c:
    // 0x41df2c: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x41df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_41df30:
    // 0x41df30: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x41df30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_41df34:
    // 0x41df34: 0xc107ca4  jal         func_41F290
label_41df38:
    if (ctx->pc == 0x41DF38u) {
        ctx->pc = 0x41DF38u;
            // 0x41df38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x41DF3Cu;
        goto label_41df3c;
    }
    ctx->pc = 0x41DF34u;
    SET_GPR_U32(ctx, 31, 0x41DF3Cu);
    ctx->pc = 0x41DF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41DF34u;
            // 0x41df38: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41F290u;
    if (runtime->hasFunction(0x41F290u)) {
        auto targetFn = runtime->lookupFunction(0x41F290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DF3Cu; }
        if (ctx->pc != 0x41DF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041F290_0x41f290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41DF3Cu; }
        if (ctx->pc != 0x41DF3Cu) { return; }
    }
    ctx->pc = 0x41DF3Cu;
label_41df3c:
    // 0x41df3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_41df40:
    if (ctx->pc == 0x41DF40u) {
        ctx->pc = 0x41DF44u;
        goto label_41df44;
    }
    ctx->pc = 0x41DF3Cu;
    {
        const bool branch_taken_0x41df3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41df3c) {
            ctx->pc = 0x41DF50u;
            goto label_41df50;
        }
    }
    ctx->pc = 0x41DF44u;
label_41df44:
    // 0x41df44: 0x127182b  sltu        $v1, $t1, $a3
    ctx->pc = 0x41df44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_41df48:
    // 0x41df48: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_41df4c:
    if (ctx->pc == 0x41DF4Cu) {
        ctx->pc = 0x41DF4Cu;
            // 0x41df4c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->pc = 0x41DF50u;
        goto label_41df50;
    }
    ctx->pc = 0x41DF48u;
    {
        const bool branch_taken_0x41df48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41DF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DF48u;
            // 0x41df4c: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41df48) {
            ctx->pc = 0x41DF1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41df1c;
        }
    }
    ctx->pc = 0x41DF50u;
label_41df50:
    // 0x41df50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41df50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41df54:
    // 0x41df54: 0x3e00008  jr          $ra
label_41df58:
    if (ctx->pc == 0x41DF58u) {
        ctx->pc = 0x41DF58u;
            // 0x41df58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x41DF5Cu;
        goto label_41df5c;
    }
    ctx->pc = 0x41DF54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41DF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DF54u;
            // 0x41df58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41DF5Cu;
label_41df5c:
    // 0x41df5c: 0x0  nop
    ctx->pc = 0x41df5cu;
    // NOP
label_41df60:
    // 0x41df60: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x41df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_41df64:
    // 0x41df64: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x41df64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_41df68:
    // 0x41df68: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x41df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_41df6c:
    // 0x41df6c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x41df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_41df70:
    // 0x41df70: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x41df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_41df74:
    // 0x41df74: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x41df74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_41df78:
    // 0x41df78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x41df78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_41df7c:
    // 0x41df7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x41df7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_41df80:
    // 0x41df80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x41df80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_41df84:
    // 0x41df84: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x41df84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_41df88:
    // 0x41df88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41df88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41df8c:
    // 0x41df8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x41df8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_41df90:
    // 0x41df90: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x41df90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_41df94:
    // 0x41df94: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x41df94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_41df98:
    // 0x41df98: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x41df98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_41df9c:
    // 0x41df9c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x41df9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41dfa0:
    // 0x41dfa0: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_41dfa4:
    if (ctx->pc == 0x41DFA4u) {
        ctx->pc = 0x41DFA4u;
            // 0x41dfa4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41DFA8u;
        goto label_41dfa8;
    }
    ctx->pc = 0x41DFA0u;
    {
        const bool branch_taken_0x41dfa0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x41DFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DFA0u;
            // 0x41dfa4: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dfa0) {
            ctx->pc = 0x41DFE4u;
            goto label_41dfe4;
        }
    }
    ctx->pc = 0x41DFA8u;
label_41dfa8:
    // 0x41dfa8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x41dfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_41dfac:
    // 0x41dfac: 0x50a3008f  beql        $a1, $v1, . + 4 + (0x8F << 2)
label_41dfb0:
    if (ctx->pc == 0x41DFB0u) {
        ctx->pc = 0x41DFB0u;
            // 0x41dfb0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x41DFB4u;
        goto label_41dfb4;
    }
    ctx->pc = 0x41DFACu;
    {
        const bool branch_taken_0x41dfac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41dfac) {
            ctx->pc = 0x41DFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DFACu;
            // 0x41dfb0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41E1ECu;
            goto label_41e1ec;
        }
    }
    ctx->pc = 0x41DFB4u;
label_41dfb4:
    // 0x41dfb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x41dfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_41dfb8:
    // 0x41dfb8: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_41dfbc:
    if (ctx->pc == 0x41DFBCu) {
        ctx->pc = 0x41DFBCu;
            // 0x41dfbc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x41DFC0u;
        goto label_41dfc0;
    }
    ctx->pc = 0x41DFB8u;
    {
        const bool branch_taken_0x41dfb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x41dfb8) {
            ctx->pc = 0x41DFBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41DFB8u;
            // 0x41dfbc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41DFC8u;
            goto label_41dfc8;
        }
    }
    ctx->pc = 0x41DFC0u;
label_41dfc0:
    // 0x41dfc0: 0x10000089  b           . + 4 + (0x89 << 2)
label_41dfc4:
    if (ctx->pc == 0x41DFC4u) {
        ctx->pc = 0x41DFC8u;
        goto label_41dfc8;
    }
    ctx->pc = 0x41DFC0u;
    {
        const bool branch_taken_0x41dfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dfc0) {
            ctx->pc = 0x41E1E8u;
            goto label_41e1e8;
        }
    }
    ctx->pc = 0x41DFC8u;
label_41dfc8:
    // 0x41dfc8: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x41dfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_41dfcc:
    // 0x41dfcc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x41dfccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_41dfd0:
    // 0x41dfd0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x41dfd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_41dfd4:
    // 0x41dfd4: 0x320f809  jalr        $t9
label_41dfd8:
    if (ctx->pc == 0x41DFD8u) {
        ctx->pc = 0x41DFD8u;
            // 0x41dfd8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x41DFDCu;
        goto label_41dfdc;
    }
    ctx->pc = 0x41DFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41DFDCu);
        ctx->pc = 0x41DFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DFD4u;
            // 0x41dfd8: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41DFDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41DFDCu; }
            if (ctx->pc != 0x41DFDCu) { return; }
        }
        }
    }
    ctx->pc = 0x41DFDCu;
label_41dfdc:
    // 0x41dfdc: 0x10000082  b           . + 4 + (0x82 << 2)
label_41dfe0:
    if (ctx->pc == 0x41DFE0u) {
        ctx->pc = 0x41DFE4u;
        goto label_41dfe4;
    }
    ctx->pc = 0x41DFDCu;
    {
        const bool branch_taken_0x41dfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41dfdc) {
            ctx->pc = 0x41E1E8u;
            goto label_41e1e8;
        }
    }
    ctx->pc = 0x41DFE4u;
label_41dfe4:
    // 0x41dfe4: 0x8ec30070  lw          $v1, 0x70($s6)
    ctx->pc = 0x41dfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 112)));
label_41dfe8:
    // 0x41dfe8: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_41dfec:
    if (ctx->pc == 0x41DFECu) {
        ctx->pc = 0x41DFECu;
            // 0x41dfec: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x41DFF0u;
        goto label_41dff0;
    }
    ctx->pc = 0x41DFE8u;
    {
        const bool branch_taken_0x41dfe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41DFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41DFE8u;
            // 0x41dfec: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41dfe8) {
            ctx->pc = 0x41E1E8u;
            goto label_41e1e8;
        }
    }
    ctx->pc = 0x41DFF0u;
label_41dff0:
    // 0x41dff0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41dff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41dff4:
    // 0x41dff4: 0x26d00084  addiu       $s0, $s6, 0x84
    ctx->pc = 0x41dff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 132));
label_41dff8:
    // 0x41dff8: 0x8c55e378  lw          $s5, -0x1C88($v0)
    ctx->pc = 0x41dff8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959992)));
label_41dffc:
    // 0x41dffc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x41dffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_41e000:
    // 0x41e000: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x41e000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_41e004:
    // 0x41e004: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x41e004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_41e008:
    // 0x41e008: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x41e008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_41e00c:
    // 0x41e00c: 0x8c43d120  lw          $v1, -0x2EE0($v0)
    ctx->pc = 0x41e00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_41e010:
    // 0x41e010: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x41e010u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_41e014:
    // 0x41e014: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41e014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41e018:
    // 0x41e018: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x41e018u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_41e01c:
    // 0x41e01c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x41e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_41e020:
    // 0x41e020: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x41e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_41e024:
    // 0x41e024: 0x92c300a8  lbu         $v1, 0xA8($s6)
    ctx->pc = 0x41e024u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 168)));
label_41e028:
    // 0x41e028: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x41e028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41e02c:
    // 0x41e02c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x41e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_41e030:
    // 0x41e030: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_41e034:
    if (ctx->pc == 0x41E034u) {
        ctx->pc = 0x41E034u;
            // 0x41e034: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x41E038u;
        goto label_41e038;
    }
    ctx->pc = 0x41E030u;
    {
        const bool branch_taken_0x41e030 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E030u;
            // 0x41e034: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e030) {
            ctx->pc = 0x41E050u;
            goto label_41e050;
        }
    }
    ctx->pc = 0x41E038u;
label_41e038:
    // 0x41e038: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41e038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41e03c:
    // 0x41e03c: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x41e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_41e040:
    // 0x41e040: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41e040u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41e044:
    // 0x41e044: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x41e044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_41e048:
    // 0x41e048: 0x320f809  jalr        $t9
label_41e04c:
    if (ctx->pc == 0x41E04Cu) {
        ctx->pc = 0x41E050u;
        goto label_41e050;
    }
    ctx->pc = 0x41E048u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41E050u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41E050u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41E050u; }
            if (ctx->pc != 0x41E050u) { return; }
        }
        }
    }
    ctx->pc = 0x41E050u;
label_41e050:
    // 0x41e050: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41e050u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41e054:
    // 0x41e054: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41e054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41e058:
    // 0x41e058: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x41e058u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_41e05c:
    // 0x41e05c: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x41e05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_41e060:
    // 0x41e060: 0xc04e738  jal         func_139CE0
label_41e064:
    if (ctx->pc == 0x41E064u) {
        ctx->pc = 0x41E064u;
            // 0x41e064: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x41E068u;
        goto label_41e068;
    }
    ctx->pc = 0x41E060u;
    SET_GPR_U32(ctx, 31, 0x41E068u);
    ctx->pc = 0x41E064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E060u;
            // 0x41e064: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E068u; }
        if (ctx->pc != 0x41E068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E068u; }
        if (ctx->pc != 0x41E068u) { return; }
    }
    ctx->pc = 0x41E068u;
label_41e068:
    // 0x41e068: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x41e068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_41e06c:
    // 0x41e06c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x41e06cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e070:
    // 0x41e070: 0xc454c710  lwc1        $f20, -0x38F0($v0)
    ctx->pc = 0x41e070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41e074:
    // 0x41e074: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x41e074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e078:
    // 0x41e078: 0x8ec20074  lw          $v0, 0x74($s6)
    ctx->pc = 0x41e078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_41e07c:
    // 0x41e07c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x41e07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_41e080:
    // 0x41e080: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x41e080u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_41e084:
    // 0x41e084: 0xc107888  jal         func_41E220
label_41e088:
    if (ctx->pc == 0x41E088u) {
        ctx->pc = 0x41E088u;
            // 0x41e088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E08Cu;
        goto label_41e08c;
    }
    ctx->pc = 0x41E084u;
    SET_GPR_U32(ctx, 31, 0x41E08Cu);
    ctx->pc = 0x41E088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E084u;
            // 0x41e088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x41E220u;
    if (runtime->hasFunction(0x41E220u)) {
        auto targetFn = runtime->lookupFunction(0x41E220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E08Cu; }
        if (ctx->pc != 0x41E08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0041E220_0x41e220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E08Cu; }
        if (ctx->pc != 0x41E08Cu) { return; }
    }
    ctx->pc = 0x41E08Cu;
label_41e08c:
    // 0x41e08c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x41e08cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_41e090:
    // 0x41e090: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
label_41e094:
    if (ctx->pc == 0x41E094u) {
        ctx->pc = 0x41E098u;
        goto label_41e098;
    }
    ctx->pc = 0x41E090u;
    {
        const bool branch_taken_0x41e090 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x41e090) {
            ctx->pc = 0x41E1B0u;
            goto label_41e1b0;
        }
    }
    ctx->pc = 0x41E098u;
label_41e098:
    // 0x41e098: 0xc0d639c  jal         func_358E70
label_41e09c:
    if (ctx->pc == 0x41E09Cu) {
        ctx->pc = 0x41E09Cu;
            // 0x41e09c: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->pc = 0x41E0A0u;
        goto label_41e0a0;
    }
    ctx->pc = 0x41E098u;
    SET_GPR_U32(ctx, 31, 0x41E0A0u);
    ctx->pc = 0x41E09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E098u;
            // 0x41e09c: 0x2644006c  addiu       $a0, $s2, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358E70u;
    if (runtime->hasFunction(0x358E70u)) {
        auto targetFn = runtime->lookupFunction(0x358E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0A0u; }
        if (ctx->pc != 0x41E0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358E70_0x358e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0A0u; }
        if (ctx->pc != 0x41E0A0u) { return; }
    }
    ctx->pc = 0x41E0A0u;
label_41e0a0:
    // 0x41e0a0: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
label_41e0a4:
    if (ctx->pc == 0x41E0A4u) {
        ctx->pc = 0x41E0A8u;
        goto label_41e0a8;
    }
    ctx->pc = 0x41E0A0u;
    {
        const bool branch_taken_0x41e0a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e0a0) {
            ctx->pc = 0x41E1B0u;
            goto label_41e1b0;
        }
    }
    ctx->pc = 0x41E0A8u;
label_41e0a8:
    // 0x41e0a8: 0xc0d1c14  jal         func_347050
label_41e0ac:
    if (ctx->pc == 0x41E0ACu) {
        ctx->pc = 0x41E0ACu;
            // 0x41e0ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E0B0u;
        goto label_41e0b0;
    }
    ctx->pc = 0x41E0A8u;
    SET_GPR_U32(ctx, 31, 0x41E0B0u);
    ctx->pc = 0x41E0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E0A8u;
            // 0x41e0ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0B0u; }
        if (ctx->pc != 0x41E0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0B0u; }
        if (ctx->pc != 0x41E0B0u) { return; }
    }
    ctx->pc = 0x41E0B0u;
label_41e0b0:
    // 0x41e0b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41e0b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41e0b4:
    // 0x41e0b4: 0xc04f278  jal         func_13C9E0
label_41e0b8:
    if (ctx->pc == 0x41E0B8u) {
        ctx->pc = 0x41E0B8u;
            // 0x41e0b8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x41E0BCu;
        goto label_41e0bc;
    }
    ctx->pc = 0x41E0B4u;
    SET_GPR_U32(ctx, 31, 0x41E0BCu);
    ctx->pc = 0x41E0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E0B4u;
            // 0x41e0b8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0BCu; }
        if (ctx->pc != 0x41E0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0BCu; }
        if (ctx->pc != 0x41E0BCu) { return; }
    }
    ctx->pc = 0x41E0BCu;
label_41e0bc:
    // 0x41e0bc: 0xc0d1c10  jal         func_347040
label_41e0c0:
    if (ctx->pc == 0x41E0C0u) {
        ctx->pc = 0x41E0C0u;
            // 0x41e0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E0C4u;
        goto label_41e0c4;
    }
    ctx->pc = 0x41E0BCu;
    SET_GPR_U32(ctx, 31, 0x41E0C4u);
    ctx->pc = 0x41E0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E0BCu;
            // 0x41e0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0C4u; }
        if (ctx->pc != 0x41E0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0C4u; }
        if (ctx->pc != 0x41E0C4u) { return; }
    }
    ctx->pc = 0x41E0C4u;
label_41e0c4:
    // 0x41e0c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x41e0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41e0c8:
    // 0x41e0c8: 0xc04ce80  jal         func_133A00
label_41e0cc:
    if (ctx->pc == 0x41E0CCu) {
        ctx->pc = 0x41E0CCu;
            // 0x41e0cc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x41E0D0u;
        goto label_41e0d0;
    }
    ctx->pc = 0x41E0C8u;
    SET_GPR_U32(ctx, 31, 0x41E0D0u);
    ctx->pc = 0x41E0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E0C8u;
            // 0x41e0cc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0D0u; }
        if (ctx->pc != 0x41E0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0D0u; }
        if (ctx->pc != 0x41E0D0u) { return; }
    }
    ctx->pc = 0x41E0D0u;
label_41e0d0:
    // 0x41e0d0: 0xc64c0230  lwc1        $f12, 0x230($s2)
    ctx->pc = 0x41e0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41e0d4:
    // 0x41e0d4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x41e0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_41e0d8:
    // 0x41e0d8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x41e0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41e0dc:
    // 0x41e0dc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x41e0dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_41e0e0:
    // 0x41e0e0: 0xc04ce50  jal         func_133940
label_41e0e4:
    if (ctx->pc == 0x41E0E4u) {
        ctx->pc = 0x41E0E4u;
            // 0x41e0e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x41E0E8u;
        goto label_41e0e8;
    }
    ctx->pc = 0x41E0E0u;
    SET_GPR_U32(ctx, 31, 0x41E0E8u);
    ctx->pc = 0x41E0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E0E0u;
            // 0x41e0e4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0E8u; }
        if (ctx->pc != 0x41E0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0E8u; }
        if (ctx->pc != 0x41E0E8u) { return; }
    }
    ctx->pc = 0x41E0E8u;
label_41e0e8:
    // 0x41e0e8: 0xc0d4108  jal         func_350420
label_41e0ec:
    if (ctx->pc == 0x41E0ECu) {
        ctx->pc = 0x41E0F0u;
        goto label_41e0f0;
    }
    ctx->pc = 0x41E0E8u;
    SET_GPR_U32(ctx, 31, 0x41E0F0u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0F0u; }
        if (ctx->pc != 0x41E0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0F0u; }
        if (ctx->pc != 0x41E0F0u) { return; }
    }
    ctx->pc = 0x41E0F0u;
label_41e0f0:
    // 0x41e0f0: 0xc0b36b4  jal         func_2CDAD0
label_41e0f4:
    if (ctx->pc == 0x41E0F4u) {
        ctx->pc = 0x41E0F4u;
            // 0x41e0f4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E0F8u;
        goto label_41e0f8;
    }
    ctx->pc = 0x41E0F0u;
    SET_GPR_U32(ctx, 31, 0x41E0F8u);
    ctx->pc = 0x41E0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E0F0u;
            // 0x41e0f4: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0F8u; }
        if (ctx->pc != 0x41E0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E0F8u; }
        if (ctx->pc != 0x41E0F8u) { return; }
    }
    ctx->pc = 0x41E0F8u;
label_41e0f8:
    // 0x41e0f8: 0xc0b9c64  jal         func_2E7190
label_41e0fc:
    if (ctx->pc == 0x41E0FCu) {
        ctx->pc = 0x41E0FCu;
            // 0x41e0fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E100u;
        goto label_41e100;
    }
    ctx->pc = 0x41E0F8u;
    SET_GPR_U32(ctx, 31, 0x41E100u);
    ctx->pc = 0x41E0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E0F8u;
            // 0x41e0fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E100u; }
        if (ctx->pc != 0x41E100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E100u; }
        if (ctx->pc != 0x41E100u) { return; }
    }
    ctx->pc = 0x41E100u;
label_41e100:
    // 0x41e100: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x41e100u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41e104:
    // 0x41e104: 0xc0d4104  jal         func_350410
label_41e108:
    if (ctx->pc == 0x41E108u) {
        ctx->pc = 0x41E108u;
            // 0x41e108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E10Cu;
        goto label_41e10c;
    }
    ctx->pc = 0x41E104u;
    SET_GPR_U32(ctx, 31, 0x41E10Cu);
    ctx->pc = 0x41E108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E104u;
            // 0x41e108: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E10Cu; }
        if (ctx->pc != 0x41E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E10Cu; }
        if (ctx->pc != 0x41E10Cu) { return; }
    }
    ctx->pc = 0x41E10Cu;
label_41e10c:
    // 0x41e10c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x41e10cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e110:
    // 0x41e110: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x41e110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_41e114:
    // 0x41e114: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x41e114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_41e118:
    // 0x41e118: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x41e118u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_41e11c:
    // 0x41e11c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x41e11cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41e120:
    // 0x41e120: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x41e120u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41e124:
    // 0x41e124: 0xc0d40ac  jal         func_3502B0
label_41e128:
    if (ctx->pc == 0x41E128u) {
        ctx->pc = 0x41E128u;
            // 0x41e128: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x41E12Cu;
        goto label_41e12c;
    }
    ctx->pc = 0x41E124u;
    SET_GPR_U32(ctx, 31, 0x41E12Cu);
    ctx->pc = 0x41E128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E124u;
            // 0x41e128: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E12Cu; }
        if (ctx->pc != 0x41E12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E12Cu; }
        if (ctx->pc != 0x41E12Cu) { return; }
    }
    ctx->pc = 0x41E12Cu;
label_41e12c:
    // 0x41e12c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x41e12cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_41e130:
    // 0x41e130: 0x1020001f  beqz        $at, . + 4 + (0x1F << 2)
label_41e134:
    if (ctx->pc == 0x41E134u) {
        ctx->pc = 0x41E134u;
            // 0x41e134: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x41E138u;
        goto label_41e138;
    }
    ctx->pc = 0x41E130u;
    {
        const bool branch_taken_0x41e130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x41E134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E130u;
            // 0x41e134: 0xae420044  sw          $v0, 0x44($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e130) {
            ctx->pc = 0x41E1B0u;
            goto label_41e1b0;
        }
    }
    ctx->pc = 0x41E138u;
label_41e138:
    // 0x41e138: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x41e138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_41e13c:
    // 0x41e13c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x41e13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_41e140:
    // 0x41e140: 0xc04cd60  jal         func_133580
label_41e144:
    if (ctx->pc == 0x41E144u) {
        ctx->pc = 0x41E144u;
            // 0x41e144: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E148u;
        goto label_41e148;
    }
    ctx->pc = 0x41E140u;
    SET_GPR_U32(ctx, 31, 0x41E148u);
    ctx->pc = 0x41E144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E140u;
            // 0x41e144: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E148u; }
        if (ctx->pc != 0x41E148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E148u; }
        if (ctx->pc != 0x41E148u) { return; }
    }
    ctx->pc = 0x41E148u;
label_41e148:
    // 0x41e148: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x41e148u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_41e14c:
    // 0x41e14c: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x41e14cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_41e150:
    // 0x41e150: 0x320f809  jalr        $t9
label_41e154:
    if (ctx->pc == 0x41E154u) {
        ctx->pc = 0x41E154u;
            // 0x41e154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41E158u;
        goto label_41e158;
    }
    ctx->pc = 0x41E150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41E158u);
        ctx->pc = 0x41E154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E150u;
            // 0x41e154: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x41E158u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41E158u; }
            if (ctx->pc != 0x41E158u) { return; }
        }
        }
    }
    ctx->pc = 0x41E158u;
label_41e158:
    // 0x41e158: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x41e158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e15c:
    // 0x41e15c: 0xc64c0228  lwc1        $f12, 0x228($s2)
    ctx->pc = 0x41e15cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_41e160:
    // 0x41e160: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x41e160u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_41e164:
    // 0x41e164: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x41e164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_41e168:
    // 0x41e168: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x41e168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41e16c:
    // 0x41e16c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x41e16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41e170:
    // 0x41e170: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x41e170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41e174:
    // 0x41e174: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x41e174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_41e178:
    // 0x41e178: 0xc04cff4  jal         func_133FD0
label_41e17c:
    if (ctx->pc == 0x41E17Cu) {
        ctx->pc = 0x41E17Cu;
            // 0x41e17c: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x41E180u;
        goto label_41e180;
    }
    ctx->pc = 0x41E178u;
    SET_GPR_U32(ctx, 31, 0x41E180u);
    ctx->pc = 0x41E17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E178u;
            // 0x41e17c: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E180u; }
        if (ctx->pc != 0x41E180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E180u; }
        if (ctx->pc != 0x41E180u) { return; }
    }
    ctx->pc = 0x41E180u;
label_41e180:
    // 0x41e180: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x41e180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41e184:
    // 0x41e184: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x41e184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41e188:
    // 0x41e188: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x41e188u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_41e18c:
    // 0x41e18c: 0xc054bbc  jal         func_152EF0
label_41e190:
    if (ctx->pc == 0x41E190u) {
        ctx->pc = 0x41E190u;
            // 0x41e190: 0xc64c022c  lwc1        $f12, 0x22C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x41E194u;
        goto label_41e194;
    }
    ctx->pc = 0x41E18Cu;
    SET_GPR_U32(ctx, 31, 0x41E194u);
    ctx->pc = 0x41E190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E18Cu;
            // 0x41e190: 0xc64c022c  lwc1        $f12, 0x22C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E194u; }
        if (ctx->pc != 0x41E194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E194u; }
        if (ctx->pc != 0x41E194u) { return; }
    }
    ctx->pc = 0x41E194u;
label_41e194:
    // 0x41e194: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x41e194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41e198:
    // 0x41e198: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x41e198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_41e19c:
    // 0x41e19c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x41e19cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_41e1a0:
    // 0x41e1a0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x41e1a0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_41e1a4:
    // 0x41e1a4: 0xc054c2c  jal         func_1530B0
label_41e1a8:
    if (ctx->pc == 0x41E1A8u) {
        ctx->pc = 0x41E1A8u;
            // 0x41e1a8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x41E1ACu;
        goto label_41e1ac;
    }
    ctx->pc = 0x41E1A4u;
    SET_GPR_U32(ctx, 31, 0x41E1ACu);
    ctx->pc = 0x41E1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41E1A4u;
            // 0x41e1a8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E1ACu; }
        if (ctx->pc != 0x41E1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41E1ACu; }
        if (ctx->pc != 0x41E1ACu) { return; }
    }
    ctx->pc = 0x41E1ACu;
label_41e1ac:
    // 0x41e1ac: 0x0  nop
    ctx->pc = 0x41e1acu;
    // NOP
label_41e1b0:
    // 0x41e1b0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x41e1b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_41e1b4:
    // 0x41e1b4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x41e1b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_41e1b8:
    // 0x41e1b8: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x41e1b8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_41e1bc:
    // 0x41e1bc: 0x1460ffae  bnez        $v1, . + 4 + (-0x52 << 2)
label_41e1c0:
    if (ctx->pc == 0x41E1C0u) {
        ctx->pc = 0x41E1C0u;
            // 0x41e1c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x41E1C4u;
        goto label_41e1c4;
    }
    ctx->pc = 0x41E1BCu;
    {
        const bool branch_taken_0x41e1bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x41E1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E1BCu;
            // 0x41e1c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41e1bc) {
            ctx->pc = 0x41E078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41e078;
        }
    }
    ctx->pc = 0x41E1C4u;
label_41e1c4:
    // 0x41e1c4: 0x92c300a8  lbu         $v1, 0xA8($s6)
    ctx->pc = 0x41e1c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 168)));
label_41e1c8:
    // 0x41e1c8: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_41e1cc:
    if (ctx->pc == 0x41E1CCu) {
        ctx->pc = 0x41E1D0u;
        goto label_41e1d0;
    }
    ctx->pc = 0x41E1C8u;
    {
        const bool branch_taken_0x41e1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x41e1c8) {
            ctx->pc = 0x41E1E8u;
            goto label_41e1e8;
        }
    }
    ctx->pc = 0x41E1D0u;
label_41e1d0:
    // 0x41e1d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41e1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41e1d4:
    // 0x41e1d4: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x41e1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_41e1d8:
    // 0x41e1d8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41e1d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41e1dc:
    // 0x41e1dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x41e1dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_41e1e0:
    // 0x41e1e0: 0x320f809  jalr        $t9
label_41e1e4:
    if (ctx->pc == 0x41E1E4u) {
        ctx->pc = 0x41E1E8u;
        goto label_41e1e8;
    }
    ctx->pc = 0x41E1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41E1E8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41E1E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41E1E8u; }
            if (ctx->pc != 0x41E1E8u) { return; }
        }
        }
    }
    ctx->pc = 0x41E1E8u;
label_41e1e8:
    // 0x41e1e8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x41e1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_41e1ec:
    // 0x41e1ec: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x41e1ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_41e1f0:
    // 0x41e1f0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x41e1f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_41e1f4:
    // 0x41e1f4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x41e1f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_41e1f8:
    // 0x41e1f8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x41e1f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41e1fc:
    // 0x41e1fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x41e1fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_41e200:
    // 0x41e200: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x41e200u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_41e204:
    // 0x41e204: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x41e204u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_41e208:
    // 0x41e208: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x41e208u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41e20c:
    // 0x41e20c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41e20cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41e210:
    // 0x41e210: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x41e210u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_41e214:
    // 0x41e214: 0x3e00008  jr          $ra
label_41e218:
    if (ctx->pc == 0x41E218u) {
        ctx->pc = 0x41E218u;
            // 0x41e218: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x41E21Cu;
        goto label_41e21c;
    }
    ctx->pc = 0x41E214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41E218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41E214u;
            // 0x41e218: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41E21Cu;
label_41e21c:
    // 0x41e21c: 0x0  nop
    ctx->pc = 0x41e21cu;
    // NOP
}
