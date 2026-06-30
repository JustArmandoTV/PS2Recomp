#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0036DEB0
// Address: 0x36deb0 - 0x36e120
void sub_0036DEB0_0x36deb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036DEB0_0x36deb0");
#endif

    switch (ctx->pc) {
        case 0x36deb0u: goto label_36deb0;
        case 0x36deb4u: goto label_36deb4;
        case 0x36deb8u: goto label_36deb8;
        case 0x36debcu: goto label_36debc;
        case 0x36dec0u: goto label_36dec0;
        case 0x36dec4u: goto label_36dec4;
        case 0x36dec8u: goto label_36dec8;
        case 0x36deccu: goto label_36decc;
        case 0x36ded0u: goto label_36ded0;
        case 0x36ded4u: goto label_36ded4;
        case 0x36ded8u: goto label_36ded8;
        case 0x36dedcu: goto label_36dedc;
        case 0x36dee0u: goto label_36dee0;
        case 0x36dee4u: goto label_36dee4;
        case 0x36dee8u: goto label_36dee8;
        case 0x36deecu: goto label_36deec;
        case 0x36def0u: goto label_36def0;
        case 0x36def4u: goto label_36def4;
        case 0x36def8u: goto label_36def8;
        case 0x36defcu: goto label_36defc;
        case 0x36df00u: goto label_36df00;
        case 0x36df04u: goto label_36df04;
        case 0x36df08u: goto label_36df08;
        case 0x36df0cu: goto label_36df0c;
        case 0x36df10u: goto label_36df10;
        case 0x36df14u: goto label_36df14;
        case 0x36df18u: goto label_36df18;
        case 0x36df1cu: goto label_36df1c;
        case 0x36df20u: goto label_36df20;
        case 0x36df24u: goto label_36df24;
        case 0x36df28u: goto label_36df28;
        case 0x36df2cu: goto label_36df2c;
        case 0x36df30u: goto label_36df30;
        case 0x36df34u: goto label_36df34;
        case 0x36df38u: goto label_36df38;
        case 0x36df3cu: goto label_36df3c;
        case 0x36df40u: goto label_36df40;
        case 0x36df44u: goto label_36df44;
        case 0x36df48u: goto label_36df48;
        case 0x36df4cu: goto label_36df4c;
        case 0x36df50u: goto label_36df50;
        case 0x36df54u: goto label_36df54;
        case 0x36df58u: goto label_36df58;
        case 0x36df5cu: goto label_36df5c;
        case 0x36df60u: goto label_36df60;
        case 0x36df64u: goto label_36df64;
        case 0x36df68u: goto label_36df68;
        case 0x36df6cu: goto label_36df6c;
        case 0x36df70u: goto label_36df70;
        case 0x36df74u: goto label_36df74;
        case 0x36df78u: goto label_36df78;
        case 0x36df7cu: goto label_36df7c;
        case 0x36df80u: goto label_36df80;
        case 0x36df84u: goto label_36df84;
        case 0x36df88u: goto label_36df88;
        case 0x36df8cu: goto label_36df8c;
        case 0x36df90u: goto label_36df90;
        case 0x36df94u: goto label_36df94;
        case 0x36df98u: goto label_36df98;
        case 0x36df9cu: goto label_36df9c;
        case 0x36dfa0u: goto label_36dfa0;
        case 0x36dfa4u: goto label_36dfa4;
        case 0x36dfa8u: goto label_36dfa8;
        case 0x36dfacu: goto label_36dfac;
        case 0x36dfb0u: goto label_36dfb0;
        case 0x36dfb4u: goto label_36dfb4;
        case 0x36dfb8u: goto label_36dfb8;
        case 0x36dfbcu: goto label_36dfbc;
        case 0x36dfc0u: goto label_36dfc0;
        case 0x36dfc4u: goto label_36dfc4;
        case 0x36dfc8u: goto label_36dfc8;
        case 0x36dfccu: goto label_36dfcc;
        case 0x36dfd0u: goto label_36dfd0;
        case 0x36dfd4u: goto label_36dfd4;
        case 0x36dfd8u: goto label_36dfd8;
        case 0x36dfdcu: goto label_36dfdc;
        case 0x36dfe0u: goto label_36dfe0;
        case 0x36dfe4u: goto label_36dfe4;
        case 0x36dfe8u: goto label_36dfe8;
        case 0x36dfecu: goto label_36dfec;
        case 0x36dff0u: goto label_36dff0;
        case 0x36dff4u: goto label_36dff4;
        case 0x36dff8u: goto label_36dff8;
        case 0x36dffcu: goto label_36dffc;
        case 0x36e000u: goto label_36e000;
        case 0x36e004u: goto label_36e004;
        case 0x36e008u: goto label_36e008;
        case 0x36e00cu: goto label_36e00c;
        case 0x36e010u: goto label_36e010;
        case 0x36e014u: goto label_36e014;
        case 0x36e018u: goto label_36e018;
        case 0x36e01cu: goto label_36e01c;
        case 0x36e020u: goto label_36e020;
        case 0x36e024u: goto label_36e024;
        case 0x36e028u: goto label_36e028;
        case 0x36e02cu: goto label_36e02c;
        case 0x36e030u: goto label_36e030;
        case 0x36e034u: goto label_36e034;
        case 0x36e038u: goto label_36e038;
        case 0x36e03cu: goto label_36e03c;
        case 0x36e040u: goto label_36e040;
        case 0x36e044u: goto label_36e044;
        case 0x36e048u: goto label_36e048;
        case 0x36e04cu: goto label_36e04c;
        case 0x36e050u: goto label_36e050;
        case 0x36e054u: goto label_36e054;
        case 0x36e058u: goto label_36e058;
        case 0x36e05cu: goto label_36e05c;
        case 0x36e060u: goto label_36e060;
        case 0x36e064u: goto label_36e064;
        case 0x36e068u: goto label_36e068;
        case 0x36e06cu: goto label_36e06c;
        case 0x36e070u: goto label_36e070;
        case 0x36e074u: goto label_36e074;
        case 0x36e078u: goto label_36e078;
        case 0x36e07cu: goto label_36e07c;
        case 0x36e080u: goto label_36e080;
        case 0x36e084u: goto label_36e084;
        case 0x36e088u: goto label_36e088;
        case 0x36e08cu: goto label_36e08c;
        case 0x36e090u: goto label_36e090;
        case 0x36e094u: goto label_36e094;
        case 0x36e098u: goto label_36e098;
        case 0x36e09cu: goto label_36e09c;
        case 0x36e0a0u: goto label_36e0a0;
        case 0x36e0a4u: goto label_36e0a4;
        case 0x36e0a8u: goto label_36e0a8;
        case 0x36e0acu: goto label_36e0ac;
        case 0x36e0b0u: goto label_36e0b0;
        case 0x36e0b4u: goto label_36e0b4;
        case 0x36e0b8u: goto label_36e0b8;
        case 0x36e0bcu: goto label_36e0bc;
        case 0x36e0c0u: goto label_36e0c0;
        case 0x36e0c4u: goto label_36e0c4;
        case 0x36e0c8u: goto label_36e0c8;
        case 0x36e0ccu: goto label_36e0cc;
        case 0x36e0d0u: goto label_36e0d0;
        case 0x36e0d4u: goto label_36e0d4;
        case 0x36e0d8u: goto label_36e0d8;
        case 0x36e0dcu: goto label_36e0dc;
        case 0x36e0e0u: goto label_36e0e0;
        case 0x36e0e4u: goto label_36e0e4;
        case 0x36e0e8u: goto label_36e0e8;
        case 0x36e0ecu: goto label_36e0ec;
        case 0x36e0f0u: goto label_36e0f0;
        case 0x36e0f4u: goto label_36e0f4;
        case 0x36e0f8u: goto label_36e0f8;
        case 0x36e0fcu: goto label_36e0fc;
        case 0x36e100u: goto label_36e100;
        case 0x36e104u: goto label_36e104;
        case 0x36e108u: goto label_36e108;
        case 0x36e10cu: goto label_36e10c;
        case 0x36e110u: goto label_36e110;
        case 0x36e114u: goto label_36e114;
        case 0x36e118u: goto label_36e118;
        case 0x36e11cu: goto label_36e11c;
        default: break;
    }

    ctx->pc = 0x36deb0u;

label_36deb0:
    // 0x36deb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36deb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36deb4:
    // 0x36deb4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x36deb4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_36deb8:
    // 0x36deb8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x36deb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_36debc:
    // 0x36debc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36debcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36dec0:
    // 0x36dec0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x36dec0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_36dec4:
    // 0x36dec4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x36dec4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_36dec8:
    // 0x36dec8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36dec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36decc:
    // 0x36decc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x36deccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_36ded0:
    // 0x36ded0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36ded0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36ded4:
    // 0x36ded4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x36ded4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_36ded8:
    // 0x36ded8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x36ded8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_36dedc:
    // 0x36dedc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x36dedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_36dee0:
    // 0x36dee0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x36dee0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_36dee4:
    // 0x36dee4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x36dee4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_36dee8:
    // 0x36dee8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x36dee8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_36deec:
    // 0x36deec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36deecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36def0:
    // 0x36def0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x36def0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_36def4:
    // 0x36def4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x36def4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_36def8:
    // 0x36def8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x36def8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_36defc:
    // 0x36defc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x36defcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_36df00:
    // 0x36df00: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x36df00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_36df04:
    // 0x36df04: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x36df04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_36df08:
    // 0x36df08: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x36df08u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_36df0c:
    // 0x36df0c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x36df0cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_36df10:
    // 0x36df10: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x36df10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_36df14:
    // 0x36df14: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x36df14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_36df18:
    // 0x36df18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36df18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_36df1c:
    // 0x36df1c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x36df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_36df20:
    // 0x36df20: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x36df20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_36df24:
    // 0x36df24: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x36df24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_36df28:
    // 0x36df28: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x36df28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_36df2c:
    // 0x36df2c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x36df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_36df30:
    // 0x36df30: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x36df30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_36df34:
    // 0x36df34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x36df34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_36df38:
    // 0x36df38: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x36df38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_36df3c:
    // 0x36df3c: 0x3e00008  jr          $ra
label_36df40:
    if (ctx->pc == 0x36DF40u) {
        ctx->pc = 0x36DF40u;
            // 0x36df40: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x36DF44u;
        goto label_36df44;
    }
    ctx->pc = 0x36DF3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DF3Cu;
            // 0x36df40: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36DF44u;
label_36df44:
    // 0x36df44: 0x0  nop
    ctx->pc = 0x36df44u;
    // NOP
label_36df48:
    // 0x36df48: 0x0  nop
    ctx->pc = 0x36df48u;
    // NOP
label_36df4c:
    // 0x36df4c: 0x0  nop
    ctx->pc = 0x36df4cu;
    // NOP
label_36df50:
    // 0x36df50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36df50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_36df54:
    // 0x36df54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36df54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36df58:
    // 0x36df58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36df58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_36df5c:
    // 0x36df5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36df5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36df60:
    // 0x36df60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36df60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36df64:
    // 0x36df64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36df64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36df68:
    // 0x36df68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36df6c:
    // 0x36df6c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x36df6cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_36df70:
    // 0x36df70: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_36df74:
    if (ctx->pc == 0x36DF74u) {
        ctx->pc = 0x36DF74u;
            // 0x36df74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36DF78u;
        goto label_36df78;
    }
    ctx->pc = 0x36DF70u;
    {
        const bool branch_taken_0x36df70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x36DF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DF70u;
            // 0x36df74: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36df70) {
            ctx->pc = 0x36DFA4u;
            goto label_36dfa4;
        }
    }
    ctx->pc = 0x36DF78u;
label_36df78:
    // 0x36df78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x36df78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_36df7c:
    // 0x36df7c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_36df80:
    if (ctx->pc == 0x36DF80u) {
        ctx->pc = 0x36DF80u;
            // 0x36df80: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x36DF84u;
        goto label_36df84;
    }
    ctx->pc = 0x36DF7Cu;
    {
        const bool branch_taken_0x36df7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36df7c) {
            ctx->pc = 0x36DF80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x36DF7Cu;
            // 0x36df80: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x36DF98u;
            goto label_36df98;
        }
    }
    ctx->pc = 0x36DF84u;
label_36df84:
    // 0x36df84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36df88:
    // 0x36df88: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_36df8c:
    if (ctx->pc == 0x36DF8Cu) {
        ctx->pc = 0x36DF90u;
        goto label_36df90;
    }
    ctx->pc = 0x36DF88u;
    {
        const bool branch_taken_0x36df88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x36df88) {
            ctx->pc = 0x36DFD8u;
            goto label_36dfd8;
        }
    }
    ctx->pc = 0x36DF90u;
label_36df90:
    // 0x36df90: 0x10000011  b           . + 4 + (0x11 << 2)
label_36df94:
    if (ctx->pc == 0x36DF94u) {
        ctx->pc = 0x36DF98u;
        goto label_36df98;
    }
    ctx->pc = 0x36DF90u;
    {
        const bool branch_taken_0x36df90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36df90) {
            ctx->pc = 0x36DFD8u;
            goto label_36dfd8;
        }
    }
    ctx->pc = 0x36DF98u;
label_36df98:
    // 0x36df98: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x36df98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_36df9c:
    // 0x36df9c: 0x320f809  jalr        $t9
label_36dfa0:
    if (ctx->pc == 0x36DFA0u) {
        ctx->pc = 0x36DFA4u;
        goto label_36dfa4;
    }
    ctx->pc = 0x36DF9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36DFA4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x36DFA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36DFA4u; }
            if (ctx->pc != 0x36DFA4u) { return; }
        }
        }
    }
    ctx->pc = 0x36DFA4u;
label_36dfa4:
    // 0x36dfa4: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x36dfa4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_36dfa8:
    // 0x36dfa8: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_36dfac:
    if (ctx->pc == 0x36DFACu) {
        ctx->pc = 0x36DFB0u;
        goto label_36dfb0;
    }
    ctx->pc = 0x36DFA8u;
    {
        const bool branch_taken_0x36dfa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x36dfa8) {
            ctx->pc = 0x36DFD8u;
            goto label_36dfd8;
        }
    }
    ctx->pc = 0x36DFB0u;
label_36dfb0:
    // 0x36dfb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36dfb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36dfb4:
    // 0x36dfb4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36dfb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36dfb8:
    // 0x36dfb8: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x36dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_36dfbc:
    // 0x36dfbc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_36dfc0:
    // 0x36dfc0: 0xc0e3658  jal         func_38D960
label_36dfc4:
    if (ctx->pc == 0x36DFC4u) {
        ctx->pc = 0x36DFC4u;
            // 0x36dfc4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x36DFC8u;
        goto label_36dfc8;
    }
    ctx->pc = 0x36DFC0u;
    SET_GPR_U32(ctx, 31, 0x36DFC8u);
    ctx->pc = 0x36DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36DFC0u;
            // 0x36dfc4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DFC8u; }
        if (ctx->pc != 0x36DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36DFC8u; }
        if (ctx->pc != 0x36DFC8u) { return; }
    }
    ctx->pc = 0x36DFC8u;
label_36dfc8:
    // 0x36dfc8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36dfc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36dfcc:
    // 0x36dfcc: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x36dfccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_36dfd0:
    // 0x36dfd0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_36dfd4:
    if (ctx->pc == 0x36DFD4u) {
        ctx->pc = 0x36DFD4u;
            // 0x36dfd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x36DFD8u;
        goto label_36dfd8;
    }
    ctx->pc = 0x36DFD0u;
    {
        const bool branch_taken_0x36dfd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36DFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DFD0u;
            // 0x36dfd4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36dfd0) {
            ctx->pc = 0x36DFB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36dfb8;
        }
    }
    ctx->pc = 0x36DFD8u;
label_36dfd8:
    // 0x36dfd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36dfd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36dfdc:
    // 0x36dfdc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36dfdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36dfe0:
    // 0x36dfe0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36dfe0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36dfe4:
    // 0x36dfe4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36dfe4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36dfe8:
    // 0x36dfe8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36dfe8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36dfec:
    // 0x36dfec: 0x3e00008  jr          $ra
label_36dff0:
    if (ctx->pc == 0x36DFF0u) {
        ctx->pc = 0x36DFF0u;
            // 0x36dff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x36DFF4u;
        goto label_36dff4;
    }
    ctx->pc = 0x36DFECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36DFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36DFECu;
            // 0x36dff0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36DFF4u;
label_36dff4:
    // 0x36dff4: 0x0  nop
    ctx->pc = 0x36dff4u;
    // NOP
label_36dff8:
    // 0x36dff8: 0x0  nop
    ctx->pc = 0x36dff8u;
    // NOP
label_36dffc:
    // 0x36dffc: 0x0  nop
    ctx->pc = 0x36dffcu;
    // NOP
label_36e000:
    // 0x36e000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x36e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_36e004:
    // 0x36e004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x36e004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_36e008:
    // 0x36e008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x36e008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36e00c:
    // 0x36e00c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36e00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_36e010:
    // 0x36e010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x36e010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_36e014:
    // 0x36e014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36e018:
    // 0x36e018: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x36e018u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_36e01c:
    // 0x36e01c: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_36e020:
    if (ctx->pc == 0x36E020u) {
        ctx->pc = 0x36E020u;
            // 0x36e020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E024u;
        goto label_36e024;
    }
    ctx->pc = 0x36E01Cu;
    {
        const bool branch_taken_0x36e01c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x36E020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E01Cu;
            // 0x36e020: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e01c) {
            ctx->pc = 0x36E058u;
            goto label_36e058;
        }
    }
    ctx->pc = 0x36E024u;
label_36e024:
    // 0x36e024: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x36e024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36e028:
    // 0x36e028: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x36e028u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_36e02c:
    // 0x36e02c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x36e02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_36e030:
    // 0x36e030: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x36e030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_36e034:
    // 0x36e034: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x36e034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36e038:
    // 0x36e038: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x36e038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_36e03c:
    // 0x36e03c: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x36e03cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_36e040:
    // 0x36e040: 0x320f809  jalr        $t9
label_36e044:
    if (ctx->pc == 0x36E044u) {
        ctx->pc = 0x36E048u;
        goto label_36e048;
    }
    ctx->pc = 0x36E040u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x36E048u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x36E048u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x36E048u; }
            if (ctx->pc != 0x36E048u) { return; }
        }
        }
    }
    ctx->pc = 0x36E048u;
label_36e048:
    // 0x36e048: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x36e048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_36e04c:
    // 0x36e04c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x36e04cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_36e050:
    // 0x36e050: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_36e054:
    if (ctx->pc == 0x36E054u) {
        ctx->pc = 0x36E054u;
            // 0x36e054: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x36E058u;
        goto label_36e058;
    }
    ctx->pc = 0x36E050u;
    {
        const bool branch_taken_0x36e050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x36E054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E050u;
            // 0x36e054: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36e050) {
            ctx->pc = 0x36E02Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_36e02c;
        }
    }
    ctx->pc = 0x36E058u;
label_36e058:
    // 0x36e058: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x36e058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_36e05c:
    // 0x36e05c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x36e05cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_36e060:
    // 0x36e060: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x36e060u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_36e064:
    // 0x36e064: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x36e064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_36e068:
    // 0x36e068: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e06c:
    // 0x36e06c: 0x3e00008  jr          $ra
label_36e070:
    if (ctx->pc == 0x36E070u) {
        ctx->pc = 0x36E070u;
            // 0x36e070: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x36E074u;
        goto label_36e074;
    }
    ctx->pc = 0x36E06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E06Cu;
            // 0x36e070: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E074u;
label_36e074:
    // 0x36e074: 0x0  nop
    ctx->pc = 0x36e074u;
    // NOP
label_36e078:
    // 0x36e078: 0x0  nop
    ctx->pc = 0x36e078u;
    // NOP
label_36e07c:
    // 0x36e07c: 0x0  nop
    ctx->pc = 0x36e07cu;
    // NOP
label_36e080:
    // 0x36e080: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36e080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36e084:
    // 0x36e084: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x36e084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_36e088:
    // 0x36e088: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x36e088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_36e08c:
    // 0x36e08c: 0x34430140  ori         $v1, $v0, 0x140
    ctx->pc = 0x36e08cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_36e090:
    // 0x36e090: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x36e090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_36e094:
    // 0x36e094: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x36e094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_36e098:
    // 0x36e098: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x36e098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_36e09c:
    // 0x36e09c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x36e09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_36e0a0:
    // 0x36e0a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36e0a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36e0a4:
    // 0x36e0a4: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x36e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_36e0a8:
    // 0x36e0a8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x36e0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_36e0ac:
    // 0x36e0ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x36e0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_36e0b0:
    // 0x36e0b0: 0xc08bff0  jal         func_22FFC0
label_36e0b4:
    if (ctx->pc == 0x36E0B4u) {
        ctx->pc = 0x36E0B4u;
            // 0x36e0b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E0B8u;
        goto label_36e0b8;
    }
    ctx->pc = 0x36E0B0u;
    SET_GPR_U32(ctx, 31, 0x36E0B8u);
    ctx->pc = 0x36E0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E0B0u;
            // 0x36e0b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E0B8u; }
        if (ctx->pc != 0x36E0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E0B8u; }
        if (ctx->pc != 0x36E0B8u) { return; }
    }
    ctx->pc = 0x36E0B8u;
label_36e0b8:
    // 0x36e0b8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x36e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_36e0bc:
    // 0x36e0bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x36e0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_36e0c0:
    // 0x36e0c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x36e0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36e0c4:
    // 0x36e0c4: 0xc08914c  jal         func_224530
label_36e0c8:
    if (ctx->pc == 0x36E0C8u) {
        ctx->pc = 0x36E0C8u;
            // 0x36e0c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E0CCu;
        goto label_36e0cc;
    }
    ctx->pc = 0x36E0C4u;
    SET_GPR_U32(ctx, 31, 0x36E0CCu);
    ctx->pc = 0x36E0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E0C4u;
            // 0x36e0c8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E0CCu; }
        if (ctx->pc != 0x36E0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E0CCu; }
        if (ctx->pc != 0x36E0CCu) { return; }
    }
    ctx->pc = 0x36E0CCu;
label_36e0cc:
    // 0x36e0cc: 0xc0e393c  jal         func_38E4F0
label_36e0d0:
    if (ctx->pc == 0x36E0D0u) {
        ctx->pc = 0x36E0D0u;
            // 0x36e0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x36E0D4u;
        goto label_36e0d4;
    }
    ctx->pc = 0x36E0CCu;
    SET_GPR_U32(ctx, 31, 0x36E0D4u);
    ctx->pc = 0x36E0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x36E0CCu;
            // 0x36e0d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E0D4u; }
        if (ctx->pc != 0x36E0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x36E0D4u; }
        if (ctx->pc != 0x36E0D4u) { return; }
    }
    ctx->pc = 0x36E0D4u;
label_36e0d4:
    // 0x36e0d4: 0x8e070050  lw          $a3, 0x50($s0)
    ctx->pc = 0x36e0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_36e0d8:
    // 0x36e0d8: 0x3c0842c8  lui         $t0, 0x42C8
    ctx->pc = 0x36e0d8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17096 << 16));
label_36e0dc:
    // 0x36e0dc: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x36e0dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_36e0e0:
    // 0x36e0e0: 0x3c0542f0  lui         $a1, 0x42F0
    ctx->pc = 0x36e0e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17136 << 16));
label_36e0e4:
    // 0x36e0e4: 0x3c044334  lui         $a0, 0x4334
    ctx->pc = 0x36e0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17204 << 16));
label_36e0e8:
    // 0x36e0e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x36e0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_36e0ec:
    // 0x36e0ec: 0xace80154  sw          $t0, 0x154($a3)
    ctx->pc = 0x36e0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 340), GPR_U32(ctx, 8));
label_36e0f0:
    // 0x36e0f0: 0xae06008c  sw          $a2, 0x8C($s0)
    ctx->pc = 0x36e0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 6));
label_36e0f4:
    // 0x36e0f4: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x36e0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
label_36e0f8:
    // 0x36e0f8: 0xae050078  sw          $a1, 0x78($s0)
    ctx->pc = 0x36e0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 5));
label_36e0fc:
    // 0x36e0fc: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x36e0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_36e100:
    // 0x36e100: 0xa20300d4  sb          $v1, 0xD4($s0)
    ctx->pc = 0x36e100u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 3));
label_36e104:
    // 0x36e104: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x36e104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_36e108:
    // 0x36e108: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x36e108u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36e10c:
    // 0x36e10c: 0x3e00008  jr          $ra
label_36e110:
    if (ctx->pc == 0x36E110u) {
        ctx->pc = 0x36E110u;
            // 0x36e110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x36E114u;
        goto label_36e114;
    }
    ctx->pc = 0x36E10Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36E110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36E10Cu;
            // 0x36e110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x36E114u;
label_36e114:
    // 0x36e114: 0x0  nop
    ctx->pc = 0x36e114u;
    // NOP
label_36e118:
    // 0x36e118: 0x0  nop
    ctx->pc = 0x36e118u;
    // NOP
label_36e11c:
    // 0x36e11c: 0x0  nop
    ctx->pc = 0x36e11cu;
    // NOP
}
