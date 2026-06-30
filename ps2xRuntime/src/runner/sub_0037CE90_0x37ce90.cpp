#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0037CE90
// Address: 0x37ce90 - 0x37d0e0
void sub_0037CE90_0x37ce90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037CE90_0x37ce90");
#endif

    switch (ctx->pc) {
        case 0x37ce90u: goto label_37ce90;
        case 0x37ce94u: goto label_37ce94;
        case 0x37ce98u: goto label_37ce98;
        case 0x37ce9cu: goto label_37ce9c;
        case 0x37cea0u: goto label_37cea0;
        case 0x37cea4u: goto label_37cea4;
        case 0x37cea8u: goto label_37cea8;
        case 0x37ceacu: goto label_37ceac;
        case 0x37ceb0u: goto label_37ceb0;
        case 0x37ceb4u: goto label_37ceb4;
        case 0x37ceb8u: goto label_37ceb8;
        case 0x37cebcu: goto label_37cebc;
        case 0x37cec0u: goto label_37cec0;
        case 0x37cec4u: goto label_37cec4;
        case 0x37cec8u: goto label_37cec8;
        case 0x37ceccu: goto label_37cecc;
        case 0x37ced0u: goto label_37ced0;
        case 0x37ced4u: goto label_37ced4;
        case 0x37ced8u: goto label_37ced8;
        case 0x37cedcu: goto label_37cedc;
        case 0x37cee0u: goto label_37cee0;
        case 0x37cee4u: goto label_37cee4;
        case 0x37cee8u: goto label_37cee8;
        case 0x37ceecu: goto label_37ceec;
        case 0x37cef0u: goto label_37cef0;
        case 0x37cef4u: goto label_37cef4;
        case 0x37cef8u: goto label_37cef8;
        case 0x37cefcu: goto label_37cefc;
        case 0x37cf00u: goto label_37cf00;
        case 0x37cf04u: goto label_37cf04;
        case 0x37cf08u: goto label_37cf08;
        case 0x37cf0cu: goto label_37cf0c;
        case 0x37cf10u: goto label_37cf10;
        case 0x37cf14u: goto label_37cf14;
        case 0x37cf18u: goto label_37cf18;
        case 0x37cf1cu: goto label_37cf1c;
        case 0x37cf20u: goto label_37cf20;
        case 0x37cf24u: goto label_37cf24;
        case 0x37cf28u: goto label_37cf28;
        case 0x37cf2cu: goto label_37cf2c;
        case 0x37cf30u: goto label_37cf30;
        case 0x37cf34u: goto label_37cf34;
        case 0x37cf38u: goto label_37cf38;
        case 0x37cf3cu: goto label_37cf3c;
        case 0x37cf40u: goto label_37cf40;
        case 0x37cf44u: goto label_37cf44;
        case 0x37cf48u: goto label_37cf48;
        case 0x37cf4cu: goto label_37cf4c;
        case 0x37cf50u: goto label_37cf50;
        case 0x37cf54u: goto label_37cf54;
        case 0x37cf58u: goto label_37cf58;
        case 0x37cf5cu: goto label_37cf5c;
        case 0x37cf60u: goto label_37cf60;
        case 0x37cf64u: goto label_37cf64;
        case 0x37cf68u: goto label_37cf68;
        case 0x37cf6cu: goto label_37cf6c;
        case 0x37cf70u: goto label_37cf70;
        case 0x37cf74u: goto label_37cf74;
        case 0x37cf78u: goto label_37cf78;
        case 0x37cf7cu: goto label_37cf7c;
        case 0x37cf80u: goto label_37cf80;
        case 0x37cf84u: goto label_37cf84;
        case 0x37cf88u: goto label_37cf88;
        case 0x37cf8cu: goto label_37cf8c;
        case 0x37cf90u: goto label_37cf90;
        case 0x37cf94u: goto label_37cf94;
        case 0x37cf98u: goto label_37cf98;
        case 0x37cf9cu: goto label_37cf9c;
        case 0x37cfa0u: goto label_37cfa0;
        case 0x37cfa4u: goto label_37cfa4;
        case 0x37cfa8u: goto label_37cfa8;
        case 0x37cfacu: goto label_37cfac;
        case 0x37cfb0u: goto label_37cfb0;
        case 0x37cfb4u: goto label_37cfb4;
        case 0x37cfb8u: goto label_37cfb8;
        case 0x37cfbcu: goto label_37cfbc;
        case 0x37cfc0u: goto label_37cfc0;
        case 0x37cfc4u: goto label_37cfc4;
        case 0x37cfc8u: goto label_37cfc8;
        case 0x37cfccu: goto label_37cfcc;
        case 0x37cfd0u: goto label_37cfd0;
        case 0x37cfd4u: goto label_37cfd4;
        case 0x37cfd8u: goto label_37cfd8;
        case 0x37cfdcu: goto label_37cfdc;
        case 0x37cfe0u: goto label_37cfe0;
        case 0x37cfe4u: goto label_37cfe4;
        case 0x37cfe8u: goto label_37cfe8;
        case 0x37cfecu: goto label_37cfec;
        case 0x37cff0u: goto label_37cff0;
        case 0x37cff4u: goto label_37cff4;
        case 0x37cff8u: goto label_37cff8;
        case 0x37cffcu: goto label_37cffc;
        case 0x37d000u: goto label_37d000;
        case 0x37d004u: goto label_37d004;
        case 0x37d008u: goto label_37d008;
        case 0x37d00cu: goto label_37d00c;
        case 0x37d010u: goto label_37d010;
        case 0x37d014u: goto label_37d014;
        case 0x37d018u: goto label_37d018;
        case 0x37d01cu: goto label_37d01c;
        case 0x37d020u: goto label_37d020;
        case 0x37d024u: goto label_37d024;
        case 0x37d028u: goto label_37d028;
        case 0x37d02cu: goto label_37d02c;
        case 0x37d030u: goto label_37d030;
        case 0x37d034u: goto label_37d034;
        case 0x37d038u: goto label_37d038;
        case 0x37d03cu: goto label_37d03c;
        case 0x37d040u: goto label_37d040;
        case 0x37d044u: goto label_37d044;
        case 0x37d048u: goto label_37d048;
        case 0x37d04cu: goto label_37d04c;
        case 0x37d050u: goto label_37d050;
        case 0x37d054u: goto label_37d054;
        case 0x37d058u: goto label_37d058;
        case 0x37d05cu: goto label_37d05c;
        case 0x37d060u: goto label_37d060;
        case 0x37d064u: goto label_37d064;
        case 0x37d068u: goto label_37d068;
        case 0x37d06cu: goto label_37d06c;
        case 0x37d070u: goto label_37d070;
        case 0x37d074u: goto label_37d074;
        case 0x37d078u: goto label_37d078;
        case 0x37d07cu: goto label_37d07c;
        case 0x37d080u: goto label_37d080;
        case 0x37d084u: goto label_37d084;
        case 0x37d088u: goto label_37d088;
        case 0x37d08cu: goto label_37d08c;
        case 0x37d090u: goto label_37d090;
        case 0x37d094u: goto label_37d094;
        case 0x37d098u: goto label_37d098;
        case 0x37d09cu: goto label_37d09c;
        case 0x37d0a0u: goto label_37d0a0;
        case 0x37d0a4u: goto label_37d0a4;
        case 0x37d0a8u: goto label_37d0a8;
        case 0x37d0acu: goto label_37d0ac;
        case 0x37d0b0u: goto label_37d0b0;
        case 0x37d0b4u: goto label_37d0b4;
        case 0x37d0b8u: goto label_37d0b8;
        case 0x37d0bcu: goto label_37d0bc;
        case 0x37d0c0u: goto label_37d0c0;
        case 0x37d0c4u: goto label_37d0c4;
        case 0x37d0c8u: goto label_37d0c8;
        case 0x37d0ccu: goto label_37d0cc;
        case 0x37d0d0u: goto label_37d0d0;
        case 0x37d0d4u: goto label_37d0d4;
        case 0x37d0d8u: goto label_37d0d8;
        case 0x37d0dcu: goto label_37d0dc;
        default: break;
    }

    ctx->pc = 0x37ce90u;

label_37ce90:
    // 0x37ce90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37ce90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37ce94:
    // 0x37ce94: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x37ce94u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_37ce98:
    // 0x37ce98: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x37ce98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_37ce9c:
    // 0x37ce9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37cea0:
    // 0x37cea0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x37cea0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_37cea4:
    // 0x37cea4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x37cea4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_37cea8:
    // 0x37cea8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37cea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37ceac:
    // 0x37ceac: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x37ceacu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_37ceb0:
    // 0x37ceb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37ceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37ceb4:
    // 0x37ceb4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x37ceb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_37ceb8:
    // 0x37ceb8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x37ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_37cebc:
    // 0x37cebc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x37cebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_37cec0:
    // 0x37cec0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x37cec0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_37cec4:
    // 0x37cec4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x37cec4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_37cec8:
    // 0x37cec8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x37cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_37cecc:
    // 0x37cecc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37ced0:
    // 0x37ced0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x37ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_37ced4:
    // 0x37ced4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x37ced4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_37ced8:
    // 0x37ced8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x37ced8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_37cedc:
    // 0x37cedc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x37cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_37cee0:
    // 0x37cee0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x37cee0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_37cee4:
    // 0x37cee4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x37cee4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_37cee8:
    // 0x37cee8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x37cee8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_37ceec:
    // 0x37ceec: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x37ceecu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_37cef0:
    // 0x37cef0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x37cef0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_37cef4:
    // 0x37cef4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x37cef4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_37cef8:
    // 0x37cef8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x37cef8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_37cefc:
    // 0x37cefc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x37cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_37cf00:
    // 0x37cf00: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x37cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_37cf04:
    // 0x37cf04: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x37cf04u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_37cf08:
    // 0x37cf08: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x37cf08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_37cf0c:
    // 0x37cf0c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x37cf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_37cf10:
    // 0x37cf10: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x37cf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_37cf14:
    // 0x37cf14: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x37cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_37cf18:
    // 0x37cf18: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x37cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_37cf1c:
    // 0x37cf1c: 0x3e00008  jr          $ra
label_37cf20:
    if (ctx->pc == 0x37CF20u) {
        ctx->pc = 0x37CF20u;
            // 0x37cf20: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x37CF24u;
        goto label_37cf24;
    }
    ctx->pc = 0x37CF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CF1Cu;
            // 0x37cf20: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37CF24u;
label_37cf24:
    // 0x37cf24: 0x0  nop
    ctx->pc = 0x37cf24u;
    // NOP
label_37cf28:
    // 0x37cf28: 0x0  nop
    ctx->pc = 0x37cf28u;
    // NOP
label_37cf2c:
    // 0x37cf2c: 0x0  nop
    ctx->pc = 0x37cf2cu;
    // NOP
label_37cf30:
    // 0x37cf30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x37cf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_37cf34:
    // 0x37cf34: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x37cf34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37cf38:
    // 0x37cf38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x37cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37cf3c:
    // 0x37cf3c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37cf3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37cf40:
    // 0x37cf40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37cf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_37cf44:
    // 0x37cf44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x37cf44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37cf48:
    // 0x37cf48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37cf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37cf4c:
    // 0x37cf4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37cf4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37cf50:
    // 0x37cf50: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x37cf50u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_37cf54:
    // 0x37cf54: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_37cf58:
    if (ctx->pc == 0x37CF58u) {
        ctx->pc = 0x37CF58u;
            // 0x37cf58: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37CF5Cu;
        goto label_37cf5c;
    }
    ctx->pc = 0x37CF54u;
    {
        const bool branch_taken_0x37cf54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x37CF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CF54u;
            // 0x37cf58: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cf54) {
            ctx->pc = 0x37CF88u;
            goto label_37cf88;
        }
    }
    ctx->pc = 0x37CF5Cu;
label_37cf5c:
    // 0x37cf5c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37cf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_37cf60:
    // 0x37cf60: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_37cf64:
    if (ctx->pc == 0x37CF64u) {
        ctx->pc = 0x37CF64u;
            // 0x37cf64: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x37CF68u;
        goto label_37cf68;
    }
    ctx->pc = 0x37CF60u;
    {
        const bool branch_taken_0x37cf60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37cf60) {
            ctx->pc = 0x37CF64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CF60u;
            // 0x37cf64: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CF7Cu;
            goto label_37cf7c;
        }
    }
    ctx->pc = 0x37CF68u;
label_37cf68:
    // 0x37cf68: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37cf6c:
    // 0x37cf6c: 0x10a30054  beq         $a1, $v1, . + 4 + (0x54 << 2)
label_37cf70:
    if (ctx->pc == 0x37CF70u) {
        ctx->pc = 0x37CF74u;
        goto label_37cf74;
    }
    ctx->pc = 0x37CF6Cu;
    {
        const bool branch_taken_0x37cf6c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x37cf6c) {
            ctx->pc = 0x37D0C0u;
            goto label_37d0c0;
        }
    }
    ctx->pc = 0x37CF74u;
label_37cf74:
    // 0x37cf74: 0x10000052  b           . + 4 + (0x52 << 2)
label_37cf78:
    if (ctx->pc == 0x37CF78u) {
        ctx->pc = 0x37CF7Cu;
        goto label_37cf7c;
    }
    ctx->pc = 0x37CF74u;
    {
        const bool branch_taken_0x37cf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cf74) {
            ctx->pc = 0x37D0C0u;
            goto label_37d0c0;
        }
    }
    ctx->pc = 0x37CF7Cu;
label_37cf7c:
    // 0x37cf7c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x37cf7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_37cf80:
    // 0x37cf80: 0x320f809  jalr        $t9
label_37cf84:
    if (ctx->pc == 0x37CF84u) {
        ctx->pc = 0x37CF88u;
        goto label_37cf88;
    }
    ctx->pc = 0x37CF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x37CF88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x37CF88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x37CF88u; }
            if (ctx->pc != 0x37CF88u) { return; }
        }
        }
    }
    ctx->pc = 0x37CF88u;
label_37cf88:
    // 0x37cf88: 0x8e900070  lw          $s0, 0x70($s4)
    ctx->pc = 0x37cf88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_37cf8c:
    // 0x37cf8c: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_37cf90:
    if (ctx->pc == 0x37CF90u) {
        ctx->pc = 0x37CF94u;
        goto label_37cf94;
    }
    ctx->pc = 0x37CF8Cu;
    {
        const bool branch_taken_0x37cf8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cf8c) {
            ctx->pc = 0x37D0C0u;
            goto label_37d0c0;
        }
    }
    ctx->pc = 0x37CF94u;
label_37cf94:
    // 0x37cf94: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37cf94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37cf98:
    // 0x37cf98: 0x26850090  addiu       $a1, $s4, 0x90
    ctx->pc = 0x37cf98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
label_37cf9c:
    // 0x37cf9c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x37cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_37cfa0:
    // 0x37cfa0: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x37cfa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cfa4:
    // 0x37cfa4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x37cfa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37cfa8:
    // 0x37cfa8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x37cfa8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_37cfac:
    // 0x37cfac: 0xe6800090  swc1        $f0, 0x90($s4)
    ctx->pc = 0x37cfacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 144), bits); }
label_37cfb0:
    // 0x37cfb0: 0x8e82008c  lw          $v0, 0x8C($s4)
    ctx->pc = 0x37cfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 140)));
label_37cfb4:
    // 0x37cfb4: 0xc6800090  lwc1        $f0, 0x90($s4)
    ctx->pc = 0x37cfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cfb8:
    // 0x37cfb8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x37cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37cfbc:
    // 0x37cfbc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37cfbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37cfc0:
    // 0x37cfc0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_37cfc4:
    if (ctx->pc == 0x37CFC4u) {
        ctx->pc = 0x37CFC4u;
            // 0x37cfc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x37CFC8u;
        goto label_37cfc8;
    }
    ctx->pc = 0x37CFC0u;
    {
        const bool branch_taken_0x37cfc0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x37CFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CFC0u;
            // 0x37cfc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cfc0) {
            ctx->pc = 0x37CFCCu;
            goto label_37cfcc;
        }
    }
    ctx->pc = 0x37CFC8u;
label_37cfc8:
    // 0x37cfc8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37cfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37cfcc:
    // 0x37cfcc: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_37cfd0:
    if (ctx->pc == 0x37CFD0u) {
        ctx->pc = 0x37CFD0u;
            // 0x37cfd0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x37CFD4u;
        goto label_37cfd4;
    }
    ctx->pc = 0x37CFCCu;
    {
        const bool branch_taken_0x37cfcc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x37cfcc) {
            ctx->pc = 0x37CFD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37CFCCu;
            // 0x37cfd0: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37CFE0u;
            goto label_37cfe0;
        }
    }
    ctx->pc = 0x37CFD4u;
label_37cfd4:
    // 0x37cfd4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x37cfd4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cfd8:
    // 0x37cfd8: 0x10000007  b           . + 4 + (0x7 << 2)
label_37cfdc:
    if (ctx->pc == 0x37CFDCu) {
        ctx->pc = 0x37CFDCu;
            // 0x37cfdc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37CFE0u;
        goto label_37cfe0;
    }
    ctx->pc = 0x37CFD8u;
    {
        const bool branch_taken_0x37cfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37CFD8u;
            // 0x37cfdc: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cfd8) {
            ctx->pc = 0x37CFF8u;
            goto label_37cff8;
        }
    }
    ctx->pc = 0x37CFE0u;
label_37cfe0:
    // 0x37cfe0: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x37cfe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_37cfe4:
    // 0x37cfe4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x37cfe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37cfe8:
    // 0x37cfe8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37cfe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37cfec:
    // 0x37cfec: 0x0  nop
    ctx->pc = 0x37cfecu;
    // NOP
label_37cff0:
    // 0x37cff0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x37cff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_37cff4:
    // 0x37cff4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x37cff4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_37cff8:
    // 0x37cff8: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x37cff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37cffc:
    // 0x37cffc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37cffcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d000:
    // 0x37d000: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37d000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37d004:
    // 0x37d004: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37d004u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_37d008:
    // 0x37d008: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x37d008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_37d00c:
    // 0x37d00c: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x37d00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_37d010:
    // 0x37d010: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37d010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_37d014:
    // 0x37d014: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x37d014u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_37d018:
    // 0x37d018: 0xc0df570  jal         func_37D5C0
label_37d01c:
    if (ctx->pc == 0x37D01Cu) {
        ctx->pc = 0x37D01Cu;
            // 0x37d01c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37D020u;
        goto label_37d020;
    }
    ctx->pc = 0x37D018u;
    SET_GPR_U32(ctx, 31, 0x37D020u);
    ctx->pc = 0x37D01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D018u;
            // 0x37d01c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D5C0u;
    if (runtime->hasFunction(0x37D5C0u)) {
        auto targetFn = runtime->lookupFunction(0x37D5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D020u; }
        if (ctx->pc != 0x37D020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D5C0_0x37d5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D020u; }
        if (ctx->pc != 0x37D020u) { return; }
    }
    ctx->pc = 0x37D020u;
label_37d020:
    // 0x37d020: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x37d020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_37d024:
    // 0x37d024: 0x10430014  beq         $v0, $v1, . + 4 + (0x14 << 2)
label_37d028:
    if (ctx->pc == 0x37D028u) {
        ctx->pc = 0x37D02Cu;
        goto label_37d02c;
    }
    ctx->pc = 0x37D024u;
    {
        const bool branch_taken_0x37d024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x37d024) {
            ctx->pc = 0x37D078u;
            goto label_37d078;
        }
    }
    ctx->pc = 0x37D02Cu;
label_37d02c:
    // 0x37d02c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x37d02cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37d030:
    // 0x37d030: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
label_37d034:
    if (ctx->pc == 0x37D034u) {
        ctx->pc = 0x37D038u;
        goto label_37d038;
    }
    ctx->pc = 0x37D030u;
    {
        const bool branch_taken_0x37d030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x37d030) {
            ctx->pc = 0x37D058u;
            goto label_37d058;
        }
    }
    ctx->pc = 0x37D038u;
label_37d038:
    // 0x37d038: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_37d03c:
    if (ctx->pc == 0x37D03Cu) {
        ctx->pc = 0x37D040u;
        goto label_37d040;
    }
    ctx->pc = 0x37D038u;
    {
        const bool branch_taken_0x37d038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d038) {
            ctx->pc = 0x37D048u;
            goto label_37d048;
        }
    }
    ctx->pc = 0x37D040u;
label_37d040:
    // 0x37d040: 0x10000019  b           . + 4 + (0x19 << 2)
label_37d044:
    if (ctx->pc == 0x37D044u) {
        ctx->pc = 0x37D048u;
        goto label_37d048;
    }
    ctx->pc = 0x37D040u;
    {
        const bool branch_taken_0x37d040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d040) {
            ctx->pc = 0x37D0A8u;
            goto label_37d0a8;
        }
    }
    ctx->pc = 0x37D048u;
label_37d048:
    // 0x37d048: 0xc0df540  jal         func_37D500
label_37d04c:
    if (ctx->pc == 0x37D04Cu) {
        ctx->pc = 0x37D04Cu;
            // 0x37d04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37D050u;
        goto label_37d050;
    }
    ctx->pc = 0x37D048u;
    SET_GPR_U32(ctx, 31, 0x37D050u);
    ctx->pc = 0x37D04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D048u;
            // 0x37d04c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D500u;
    if (runtime->hasFunction(0x37D500u)) {
        auto targetFn = runtime->lookupFunction(0x37D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D050u; }
        if (ctx->pc != 0x37D050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D500_0x37d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D050u; }
        if (ctx->pc != 0x37D050u) { return; }
    }
    ctx->pc = 0x37D050u;
label_37d050:
    // 0x37d050: 0x10000015  b           . + 4 + (0x15 << 2)
label_37d054:
    if (ctx->pc == 0x37D054u) {
        ctx->pc = 0x37D058u;
        goto label_37d058;
    }
    ctx->pc = 0x37D050u;
    {
        const bool branch_taken_0x37d050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d050) {
            ctx->pc = 0x37D0A8u;
            goto label_37d0a8;
        }
    }
    ctx->pc = 0x37D058u;
label_37d058:
    // 0x37d058: 0x92430083  lbu         $v1, 0x83($s2)
    ctx->pc = 0x37d058u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 131)));
label_37d05c:
    // 0x37d05c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_37d060:
    if (ctx->pc == 0x37D060u) {
        ctx->pc = 0x37D064u;
        goto label_37d064;
    }
    ctx->pc = 0x37D05Cu;
    {
        const bool branch_taken_0x37d05c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d05c) {
            ctx->pc = 0x37D0B0u;
            goto label_37d0b0;
        }
    }
    ctx->pc = 0x37D064u;
label_37d064:
    // 0x37d064: 0xc0df520  jal         func_37D480
label_37d068:
    if (ctx->pc == 0x37D068u) {
        ctx->pc = 0x37D068u;
            // 0x37d068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37D06Cu;
        goto label_37d06c;
    }
    ctx->pc = 0x37D064u;
    SET_GPR_U32(ctx, 31, 0x37D06Cu);
    ctx->pc = 0x37D068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D064u;
            // 0x37d068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D480u;
    if (runtime->hasFunction(0x37D480u)) {
        auto targetFn = runtime->lookupFunction(0x37D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D06Cu; }
        if (ctx->pc != 0x37D06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D480_0x37d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D06Cu; }
        if (ctx->pc != 0x37D06Cu) { return; }
    }
    ctx->pc = 0x37D06Cu;
label_37d06c:
    // 0x37d06c: 0x1000000e  b           . + 4 + (0xE << 2)
label_37d070:
    if (ctx->pc == 0x37D070u) {
        ctx->pc = 0x37D074u;
        goto label_37d074;
    }
    ctx->pc = 0x37D06Cu;
    {
        const bool branch_taken_0x37d06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d06c) {
            ctx->pc = 0x37D0A8u;
            goto label_37d0a8;
        }
    }
    ctx->pc = 0x37D074u;
label_37d074:
    // 0x37d074: 0x0  nop
    ctx->pc = 0x37d074u;
    // NOP
label_37d078:
    // 0x37d078: 0x92430083  lbu         $v1, 0x83($s2)
    ctx->pc = 0x37d078u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 131)));
label_37d07c:
    // 0x37d07c: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_37d080:
    if (ctx->pc == 0x37D080u) {
        ctx->pc = 0x37D084u;
        goto label_37d084;
    }
    ctx->pc = 0x37D07Cu;
    {
        const bool branch_taken_0x37d07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d07c) {
            ctx->pc = 0x37D0B0u;
            goto label_37d0b0;
        }
    }
    ctx->pc = 0x37D084u;
label_37d084:
    // 0x37d084: 0xc0df4f8  jal         func_37D3E0
label_37d088:
    if (ctx->pc == 0x37D088u) {
        ctx->pc = 0x37D088u;
            // 0x37d088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37D08Cu;
        goto label_37d08c;
    }
    ctx->pc = 0x37D084u;
    SET_GPR_U32(ctx, 31, 0x37D08Cu);
    ctx->pc = 0x37D088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D084u;
            // 0x37d088: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D3E0u;
    if (runtime->hasFunction(0x37D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x37D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D08Cu; }
        if (ctx->pc != 0x37D08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D3E0_0x37d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D08Cu; }
        if (ctx->pc != 0x37D08Cu) { return; }
    }
    ctx->pc = 0x37D08Cu;
label_37d08c:
    // 0x37d08c: 0xc0df4d8  jal         func_37D360
label_37d090:
    if (ctx->pc == 0x37D090u) {
        ctx->pc = 0x37D090u;
            // 0x37d090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37D094u;
        goto label_37d094;
    }
    ctx->pc = 0x37D08Cu;
    SET_GPR_U32(ctx, 31, 0x37D094u);
    ctx->pc = 0x37D090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D08Cu;
            // 0x37d090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D360u;
    if (runtime->hasFunction(0x37D360u)) {
        auto targetFn = runtime->lookupFunction(0x37D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D094u; }
        if (ctx->pc != 0x37D094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D360_0x37d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D094u; }
        if (ctx->pc != 0x37D094u) { return; }
    }
    ctx->pc = 0x37D094u;
label_37d094:
    // 0x37d094: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_37d098:
    if (ctx->pc == 0x37D098u) {
        ctx->pc = 0x37D09Cu;
        goto label_37d09c;
    }
    ctx->pc = 0x37D094u;
    {
        const bool branch_taken_0x37d094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37d094) {
            ctx->pc = 0x37D0A8u;
            goto label_37d0a8;
        }
    }
    ctx->pc = 0x37D09Cu;
label_37d09c:
    // 0x37d09c: 0xc0df438  jal         func_37D0E0
label_37d0a0:
    if (ctx->pc == 0x37D0A0u) {
        ctx->pc = 0x37D0A0u;
            // 0x37d0a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37D0A4u;
        goto label_37d0a4;
    }
    ctx->pc = 0x37D09Cu;
    SET_GPR_U32(ctx, 31, 0x37D0A4u);
    ctx->pc = 0x37D0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37D09Cu;
            // 0x37d0a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x37D0E0u;
    if (runtime->hasFunction(0x37D0E0u)) {
        auto targetFn = runtime->lookupFunction(0x37D0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D0A4u; }
        if (ctx->pc != 0x37D0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0037D0E0_0x37d0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37D0A4u; }
        if (ctx->pc != 0x37D0A4u) { return; }
    }
    ctx->pc = 0x37D0A4u;
label_37d0a4:
    // 0x37d0a4: 0x0  nop
    ctx->pc = 0x37d0a4u;
    // NOP
label_37d0a8:
    // 0x37d0a8: 0xa2400083  sb          $zero, 0x83($s2)
    ctx->pc = 0x37d0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 131), (uint8_t)GPR_U32(ctx, 0));
label_37d0ac:
    // 0x37d0ac: 0x0  nop
    ctx->pc = 0x37d0acu;
    // NOP
label_37d0b0:
    // 0x37d0b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x37d0b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_37d0b4:
    // 0x37d0b4: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x37d0b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_37d0b8:
    // 0x37d0b8: 0x1460ffd4  bnez        $v1, . + 4 + (-0x2C << 2)
label_37d0bc:
    if (ctx->pc == 0x37D0BCu) {
        ctx->pc = 0x37D0BCu;
            // 0x37d0bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x37D0C0u;
        goto label_37d0c0;
    }
    ctx->pc = 0x37D0B8u;
    {
        const bool branch_taken_0x37d0b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x37D0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D0B8u;
            // 0x37d0bc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37d0b8) {
            ctx->pc = 0x37D00Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37d00c;
        }
    }
    ctx->pc = 0x37D0C0u;
label_37d0c0:
    // 0x37d0c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37d0c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_37d0c4:
    // 0x37d0c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x37d0c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_37d0c8:
    // 0x37d0c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x37d0c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_37d0cc:
    // 0x37d0cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x37d0ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37d0d0:
    // 0x37d0d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37d0d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_37d0d4:
    // 0x37d0d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37d0d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_37d0d8:
    // 0x37d0d8: 0x3e00008  jr          $ra
label_37d0dc:
    if (ctx->pc == 0x37D0DCu) {
        ctx->pc = 0x37D0DCu;
            // 0x37d0dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37D0E0u;
        goto label_fallthrough_0x37d0d8;
    }
    ctx->pc = 0x37D0D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37D0DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37D0D8u;
            // 0x37d0dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x37d0d8:
    ctx->pc = 0x37D0E0u;
}
