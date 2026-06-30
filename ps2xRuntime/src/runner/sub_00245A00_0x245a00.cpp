#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245A00
// Address: 0x245a00 - 0x245c80
void sub_00245A00_0x245a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245A00_0x245a00");
#endif

    switch (ctx->pc) {
        case 0x245a00u: goto label_245a00;
        case 0x245a04u: goto label_245a04;
        case 0x245a08u: goto label_245a08;
        case 0x245a0cu: goto label_245a0c;
        case 0x245a10u: goto label_245a10;
        case 0x245a14u: goto label_245a14;
        case 0x245a18u: goto label_245a18;
        case 0x245a1cu: goto label_245a1c;
        case 0x245a20u: goto label_245a20;
        case 0x245a24u: goto label_245a24;
        case 0x245a28u: goto label_245a28;
        case 0x245a2cu: goto label_245a2c;
        case 0x245a30u: goto label_245a30;
        case 0x245a34u: goto label_245a34;
        case 0x245a38u: goto label_245a38;
        case 0x245a3cu: goto label_245a3c;
        case 0x245a40u: goto label_245a40;
        case 0x245a44u: goto label_245a44;
        case 0x245a48u: goto label_245a48;
        case 0x245a4cu: goto label_245a4c;
        case 0x245a50u: goto label_245a50;
        case 0x245a54u: goto label_245a54;
        case 0x245a58u: goto label_245a58;
        case 0x245a5cu: goto label_245a5c;
        case 0x245a60u: goto label_245a60;
        case 0x245a64u: goto label_245a64;
        case 0x245a68u: goto label_245a68;
        case 0x245a6cu: goto label_245a6c;
        case 0x245a70u: goto label_245a70;
        case 0x245a74u: goto label_245a74;
        case 0x245a78u: goto label_245a78;
        case 0x245a7cu: goto label_245a7c;
        case 0x245a80u: goto label_245a80;
        case 0x245a84u: goto label_245a84;
        case 0x245a88u: goto label_245a88;
        case 0x245a8cu: goto label_245a8c;
        case 0x245a90u: goto label_245a90;
        case 0x245a94u: goto label_245a94;
        case 0x245a98u: goto label_245a98;
        case 0x245a9cu: goto label_245a9c;
        case 0x245aa0u: goto label_245aa0;
        case 0x245aa4u: goto label_245aa4;
        case 0x245aa8u: goto label_245aa8;
        case 0x245aacu: goto label_245aac;
        case 0x245ab0u: goto label_245ab0;
        case 0x245ab4u: goto label_245ab4;
        case 0x245ab8u: goto label_245ab8;
        case 0x245abcu: goto label_245abc;
        case 0x245ac0u: goto label_245ac0;
        case 0x245ac4u: goto label_245ac4;
        case 0x245ac8u: goto label_245ac8;
        case 0x245accu: goto label_245acc;
        case 0x245ad0u: goto label_245ad0;
        case 0x245ad4u: goto label_245ad4;
        case 0x245ad8u: goto label_245ad8;
        case 0x245adcu: goto label_245adc;
        case 0x245ae0u: goto label_245ae0;
        case 0x245ae4u: goto label_245ae4;
        case 0x245ae8u: goto label_245ae8;
        case 0x245aecu: goto label_245aec;
        case 0x245af0u: goto label_245af0;
        case 0x245af4u: goto label_245af4;
        case 0x245af8u: goto label_245af8;
        case 0x245afcu: goto label_245afc;
        case 0x245b00u: goto label_245b00;
        case 0x245b04u: goto label_245b04;
        case 0x245b08u: goto label_245b08;
        case 0x245b0cu: goto label_245b0c;
        case 0x245b10u: goto label_245b10;
        case 0x245b14u: goto label_245b14;
        case 0x245b18u: goto label_245b18;
        case 0x245b1cu: goto label_245b1c;
        case 0x245b20u: goto label_245b20;
        case 0x245b24u: goto label_245b24;
        case 0x245b28u: goto label_245b28;
        case 0x245b2cu: goto label_245b2c;
        case 0x245b30u: goto label_245b30;
        case 0x245b34u: goto label_245b34;
        case 0x245b38u: goto label_245b38;
        case 0x245b3cu: goto label_245b3c;
        case 0x245b40u: goto label_245b40;
        case 0x245b44u: goto label_245b44;
        case 0x245b48u: goto label_245b48;
        case 0x245b4cu: goto label_245b4c;
        case 0x245b50u: goto label_245b50;
        case 0x245b54u: goto label_245b54;
        case 0x245b58u: goto label_245b58;
        case 0x245b5cu: goto label_245b5c;
        case 0x245b60u: goto label_245b60;
        case 0x245b64u: goto label_245b64;
        case 0x245b68u: goto label_245b68;
        case 0x245b6cu: goto label_245b6c;
        case 0x245b70u: goto label_245b70;
        case 0x245b74u: goto label_245b74;
        case 0x245b78u: goto label_245b78;
        case 0x245b7cu: goto label_245b7c;
        case 0x245b80u: goto label_245b80;
        case 0x245b84u: goto label_245b84;
        case 0x245b88u: goto label_245b88;
        case 0x245b8cu: goto label_245b8c;
        case 0x245b90u: goto label_245b90;
        case 0x245b94u: goto label_245b94;
        case 0x245b98u: goto label_245b98;
        case 0x245b9cu: goto label_245b9c;
        case 0x245ba0u: goto label_245ba0;
        case 0x245ba4u: goto label_245ba4;
        case 0x245ba8u: goto label_245ba8;
        case 0x245bacu: goto label_245bac;
        case 0x245bb0u: goto label_245bb0;
        case 0x245bb4u: goto label_245bb4;
        case 0x245bb8u: goto label_245bb8;
        case 0x245bbcu: goto label_245bbc;
        case 0x245bc0u: goto label_245bc0;
        case 0x245bc4u: goto label_245bc4;
        case 0x245bc8u: goto label_245bc8;
        case 0x245bccu: goto label_245bcc;
        case 0x245bd0u: goto label_245bd0;
        case 0x245bd4u: goto label_245bd4;
        case 0x245bd8u: goto label_245bd8;
        case 0x245bdcu: goto label_245bdc;
        case 0x245be0u: goto label_245be0;
        case 0x245be4u: goto label_245be4;
        case 0x245be8u: goto label_245be8;
        case 0x245becu: goto label_245bec;
        case 0x245bf0u: goto label_245bf0;
        case 0x245bf4u: goto label_245bf4;
        case 0x245bf8u: goto label_245bf8;
        case 0x245bfcu: goto label_245bfc;
        case 0x245c00u: goto label_245c00;
        case 0x245c04u: goto label_245c04;
        case 0x245c08u: goto label_245c08;
        case 0x245c0cu: goto label_245c0c;
        case 0x245c10u: goto label_245c10;
        case 0x245c14u: goto label_245c14;
        case 0x245c18u: goto label_245c18;
        case 0x245c1cu: goto label_245c1c;
        case 0x245c20u: goto label_245c20;
        case 0x245c24u: goto label_245c24;
        case 0x245c28u: goto label_245c28;
        case 0x245c2cu: goto label_245c2c;
        case 0x245c30u: goto label_245c30;
        case 0x245c34u: goto label_245c34;
        case 0x245c38u: goto label_245c38;
        case 0x245c3cu: goto label_245c3c;
        case 0x245c40u: goto label_245c40;
        case 0x245c44u: goto label_245c44;
        case 0x245c48u: goto label_245c48;
        case 0x245c4cu: goto label_245c4c;
        case 0x245c50u: goto label_245c50;
        case 0x245c54u: goto label_245c54;
        case 0x245c58u: goto label_245c58;
        case 0x245c5cu: goto label_245c5c;
        case 0x245c60u: goto label_245c60;
        case 0x245c64u: goto label_245c64;
        case 0x245c68u: goto label_245c68;
        case 0x245c6cu: goto label_245c6c;
        case 0x245c70u: goto label_245c70;
        case 0x245c74u: goto label_245c74;
        case 0x245c78u: goto label_245c78;
        case 0x245c7cu: goto label_245c7c;
        default: break;
    }

    ctx->pc = 0x245a00u;

label_245a00:
    // 0x245a00: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x245a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_245a04:
    // 0x245a04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x245a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_245a08:
    // 0x245a08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x245a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_245a0c:
    // 0x245a0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x245a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_245a10:
    // 0x245a10: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x245a10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_245a14:
    // 0x245a14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x245a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_245a18:
    // 0x245a18: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x245a18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_245a1c:
    // 0x245a1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x245a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_245a20:
    // 0x245a20: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x245a20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_245a24:
    // 0x245a24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x245a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_245a28:
    // 0x245a28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x245a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_245a2c:
    // 0x245a2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x245a2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_245a30:
    // 0x245a30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x245a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_245a34:
    // 0x245a34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x245a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245a38:
    // 0x245a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x245a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_245a3c:
    // 0x245a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x245a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_245a40:
    // 0x245a40: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x245a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245a44:
    // 0x245a44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245a48:
    // 0x245a48: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x245a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_245a4c:
    // 0x245a4c: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x245a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_245a50:
    // 0x245a50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245a54:
    // 0x245a54: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x245a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_245a58:
    // 0x245a58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245a5c:
    // 0x245a5c: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x245a5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_245a60:
    // 0x245a60: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x245a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_245a64:
    // 0x245a64: 0x24750010  addiu       $s5, $v1, 0x10
    ctx->pc = 0x245a64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_245a68:
    // 0x245a68: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x245a68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_245a6c:
    // 0x245a6c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x245a6cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_245a70:
    // 0x245a70: 0x1020002f  beqz        $at, . + 4 + (0x2F << 2)
label_245a74:
    if (ctx->pc == 0x245A74u) {
        ctx->pc = 0x245A74u;
            // 0x245a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245A78u;
        goto label_245a78;
    }
    ctx->pc = 0x245A70u;
    {
        const bool branch_taken_0x245a70 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x245A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245A70u;
            // 0x245a74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245a70) {
            ctx->pc = 0x245B30u;
            goto label_245b30;
        }
    }
    ctx->pc = 0x245A78u;
label_245a78:
    // 0x245a78: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x245a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_245a7c:
    // 0x245a7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x245a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_245a80:
    // 0x245a80: 0x24a5f7a0  addiu       $a1, $a1, -0x860
    ctx->pc = 0x245a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965152));
label_245a84:
    // 0x245a84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x245a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_245a88:
    // 0x245a88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x245a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245a8c:
    // 0x245a8c: 0x600008  jr          $v1
label_245a90:
    if (ctx->pc == 0x245A90u) {
        ctx->pc = 0x245A94u;
        goto label_245a94;
    }
    ctx->pc = 0x245A8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245A98u: goto label_245a98;
            case 0x245AE0u: goto label_245ae0;
            case 0x245B28u: goto label_245b28;
            case 0x245BA8u: goto label_245ba8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245A94u;
label_245a94:
    // 0x245a94: 0x0  nop
    ctx->pc = 0x245a94u;
    // NOP
label_245a98:
    // 0x245a98: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x245a98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_245a9c:
    // 0x245a9c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x245a9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_245aa0:
    // 0x245aa0: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x245aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_245aa4:
    // 0x245aa4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x245aa4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_245aa8:
    // 0x245aa8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x245aa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_245aac:
    // 0x245aac: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x245aacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_245ab0:
    // 0x245ab0: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x245ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_245ab4:
    // 0x245ab4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245ab8:
    // 0x245ab8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_245abc:
    // 0x245abc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245ac0:
    // 0x245ac0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_245ac4:
    // 0x245ac4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x245ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_245ac8:
    // 0x245ac8: 0x8c4216b4  lw          $v0, 0x16B4($v0)
    ctx->pc = 0x245ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
label_245acc:
    // 0x245acc: 0x40f809  jalr        $v0
label_245ad0:
    if (ctx->pc == 0x245AD0u) {
        ctx->pc = 0x245AD0u;
            // 0x245ad0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245AD4u;
        goto label_245ad4;
    }
    ctx->pc = 0x245ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245AD4u);
        ctx->pc = 0x245AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245ACCu;
            // 0x245ad0: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245AD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245AD4u; }
            if (ctx->pc != 0x245AD4u) { return; }
        }
        }
    }
    ctx->pc = 0x245AD4u;
label_245ad4:
    // 0x245ad4: 0x10000016  b           . + 4 + (0x16 << 2)
label_245ad8:
    if (ctx->pc == 0x245AD8u) {
        ctx->pc = 0x245ADCu;
        goto label_245adc;
    }
    ctx->pc = 0x245AD4u;
    {
        const bool branch_taken_0x245ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245ad4) {
            ctx->pc = 0x245B30u;
            goto label_245b30;
        }
    }
    ctx->pc = 0x245ADCu;
label_245adc:
    // 0x245adc: 0x0  nop
    ctx->pc = 0x245adcu;
    // NOP
label_245ae0:
    // 0x245ae0: 0x90820003  lbu         $v0, 0x3($a0)
    ctx->pc = 0x245ae0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_245ae4:
    // 0x245ae4: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x245ae4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_245ae8:
    // 0x245ae8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x245ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_245aec:
    // 0x245aec: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x245aecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_245af0:
    // 0x245af0: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x245af0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_245af4:
    // 0x245af4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x245af4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_245af8:
    // 0x245af8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x245af8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_245afc:
    // 0x245afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245b00:
    // 0x245b00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_245b04:
    // 0x245b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_245b08:
    // 0x245b08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245b08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_245b0c:
    // 0x245b0c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x245b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_245b10:
    // 0x245b10: 0x8c4216b4  lw          $v0, 0x16B4($v0)
    ctx->pc = 0x245b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
label_245b14:
    // 0x245b14: 0x40f809  jalr        $v0
label_245b18:
    if (ctx->pc == 0x245B18u) {
        ctx->pc = 0x245B18u;
            // 0x245b18: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245B1Cu;
        goto label_245b1c;
    }
    ctx->pc = 0x245B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x245B1Cu);
        ctx->pc = 0x245B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245B14u;
            // 0x245b18: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x245B1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x245B1Cu; }
            if (ctx->pc != 0x245B1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x245B1Cu;
label_245b1c:
    // 0x245b1c: 0x10000004  b           . + 4 + (0x4 << 2)
label_245b20:
    if (ctx->pc == 0x245B20u) {
        ctx->pc = 0x245B24u;
        goto label_245b24;
    }
    ctx->pc = 0x245B1Cu;
    {
        const bool branch_taken_0x245b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x245b1c) {
            ctx->pc = 0x245B30u;
            goto label_245b30;
        }
    }
    ctx->pc = 0x245B24u;
label_245b24:
    // 0x245b24: 0x0  nop
    ctx->pc = 0x245b24u;
    // NOP
label_245b28:
    // 0x245b28: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x245b28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_245b2c:
    // 0x245b2c: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x245b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_245b30:
    // 0x245b30: 0x215182b  sltu        $v1, $s0, $s5
    ctx->pc = 0x245b30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_245b34:
    // 0x245b34: 0x1460ffcc  bnez        $v1, . + 4 + (-0x34 << 2)
label_245b38:
    if (ctx->pc == 0x245B38u) {
        ctx->pc = 0x245B38u;
            // 0x245b38: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x245B3Cu;
        goto label_245b3c;
    }
    ctx->pc = 0x245B34u;
    {
        const bool branch_taken_0x245b34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245B34u;
            // 0x245b38: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b34) {
            ctx->pc = 0x245A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245a68;
        }
    }
    ctx->pc = 0x245B3Cu;
label_245b3c:
    // 0x245b3c: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x245b3cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_245b40:
    // 0x245b40: 0x8c30ea40  lw          $s0, -0x15C0($at)
    ctx->pc = 0x245b40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_245b44:
    // 0x245b44: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x245b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_245b48:
    // 0x245b48: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x245b48u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_245b4c:
    // 0x245b4c: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x245b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_245b50:
    // 0x245b50: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x245b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_245b54:
    // 0x245b54: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x245b54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_245b58:
    // 0x245b58: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_245b5c:
    if (ctx->pc == 0x245B5Cu) {
        ctx->pc = 0x245B5Cu;
            // 0x245b5c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x245B60u;
        goto label_245b60;
    }
    ctx->pc = 0x245B58u;
    {
        const bool branch_taken_0x245b58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x245B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245B58u;
            // 0x245b5c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245b58) {
            ctx->pc = 0x245B70u;
            goto label_245b70;
        }
    }
    ctx->pc = 0x245B60u;
label_245b60:
    // 0x245b60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x245b60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_245b64:
    // 0x245b64: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x245b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_245b68:
    // 0x245b68: 0xc0a79ec  jal         func_29E7B0
label_245b6c:
    if (ctx->pc == 0x245B6Cu) {
        ctx->pc = 0x245B6Cu;
            // 0x245b6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245B70u;
        goto label_245b70;
    }
    ctx->pc = 0x245B68u;
    SET_GPR_U32(ctx, 31, 0x245B70u);
    ctx->pc = 0x245B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245B68u;
            // 0x245b6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B70u; }
        if (ctx->pc != 0x245B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245B70u; }
        if (ctx->pc != 0x245B70u) { return; }
    }
    ctx->pc = 0x245B70u;
label_245b70:
    // 0x245b70: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x245b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_245b74:
    // 0x245b74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x245b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_245b78:
    // 0x245b78: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x245b78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_245b7c:
    // 0x245b7c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x245b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_245b80:
    // 0x245b80: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x245b80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_245b84:
    // 0x245b84: 0xae150084  sw          $s5, 0x84($s0)
    ctx->pc = 0x245b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 21));
label_245b88:
    // 0x245b88: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x245b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_245b8c:
    // 0x245b8c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x245b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_245b90:
    // 0x245b90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x245b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245b94:
    // 0x245b94: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x245b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_245b98:
    // 0x245b98: 0x24900010  addiu       $s0, $a0, 0x10
    ctx->pc = 0x245b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_245b9c:
    // 0x245b9c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x245b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_245ba0:
    // 0x245ba0: 0x1000ffb1  b           . + 4 + (-0x4F << 2)
label_245ba4:
    if (ctx->pc == 0x245BA4u) {
        ctx->pc = 0x245BA4u;
            // 0x245ba4: 0x24750010  addiu       $s5, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x245BA8u;
        goto label_245ba8;
    }
    ctx->pc = 0x245BA0u;
    {
        const bool branch_taken_0x245ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x245BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245BA0u;
            // 0x245ba4: 0x24750010  addiu       $s5, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245ba0) {
            ctx->pc = 0x245A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_245a68;
        }
    }
    ctx->pc = 0x245BA8u;
label_245ba8:
    // 0x245ba8: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x245ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_245bac:
    // 0x245bac: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x245bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_245bb0:
    // 0x245bb0: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x245bb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_245bb4:
    // 0x245bb4: 0x8c30ea40  lw          $s0, -0x15C0($at)
    ctx->pc = 0x245bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_245bb8:
    // 0x245bb8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x245bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_245bbc:
    // 0x245bbc: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x245bbcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_245bc0:
    // 0x245bc0: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x245bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_245bc4:
    // 0x245bc4: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x245bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_245bc8:
    // 0x245bc8: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x245bc8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_245bcc:
    // 0x245bcc: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_245bd0:
    if (ctx->pc == 0x245BD0u) {
        ctx->pc = 0x245BD0u;
            // 0x245bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245BD4u;
        goto label_245bd4;
    }
    ctx->pc = 0x245BCCu;
    {
        const bool branch_taken_0x245bcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x245BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245BCCu;
            // 0x245bd0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245bcc) {
            ctx->pc = 0x245BE0u;
            goto label_245be0;
        }
    }
    ctx->pc = 0x245BD4u;
label_245bd4:
    // 0x245bd4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x245bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_245bd8:
    // 0x245bd8: 0xc0a79ec  jal         func_29E7B0
label_245bdc:
    if (ctx->pc == 0x245BDCu) {
        ctx->pc = 0x245BDCu;
            // 0x245bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x245BE0u;
        goto label_245be0;
    }
    ctx->pc = 0x245BD8u;
    SET_GPR_U32(ctx, 31, 0x245BE0u);
    ctx->pc = 0x245BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245BD8u;
            // 0x245bdc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245BE0u; }
        if (ctx->pc != 0x245BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245BE0u; }
        if (ctx->pc != 0x245BE0u) { return; }
    }
    ctx->pc = 0x245BE0u;
label_245be0:
    // 0x245be0: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x245be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_245be4:
    // 0x245be4: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x245be4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_245be8:
    // 0x245be8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x245be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_245bec:
    // 0x245bec: 0xae040088  sw          $a0, 0x88($s0)
    ctx->pc = 0x245becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 4));
label_245bf0:
    // 0x245bf0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x245bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_245bf4:
    // 0x245bf4: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x245bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_245bf8:
    // 0x245bf8: 0xae110084  sw          $s1, 0x84($s0)
    ctx->pc = 0x245bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 17));
label_245bfc:
    // 0x245bfc: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x245bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_245c00:
    // 0x245c00: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x245c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_245c04:
    // 0x245c04: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_245c08:
    if (ctx->pc == 0x245C08u) {
        ctx->pc = 0x245C0Cu;
        goto label_245c0c;
    }
    ctx->pc = 0x245C04u;
    {
        const bool branch_taken_0x245c04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x245c04) {
            ctx->pc = 0x245C30u;
            goto label_245c30;
        }
    }
    ctx->pc = 0x245C0Cu;
label_245c0c:
    // 0x245c0c: 0x8fc20008  lw          $v0, 0x8($fp)
    ctx->pc = 0x245c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_245c10:
    // 0x245c10: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x245c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_245c14:
    // 0x245c14: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x245c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_245c18:
    // 0x245c18: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x245c18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_245c1c:
    // 0x245c1c: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x245c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_245c20:
    // 0x245c20: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x245c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_245c24:
    // 0x245c24: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x245c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_245c28:
    // 0x245c28: 0xc0a7ab4  jal         func_29EAD0
label_245c2c:
    if (ctx->pc == 0x245C2Cu) {
        ctx->pc = 0x245C2Cu;
            // 0x245c2c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x245C30u;
        goto label_245c30;
    }
    ctx->pc = 0x245C28u;
    SET_GPR_U32(ctx, 31, 0x245C30u);
    ctx->pc = 0x245C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x245C28u;
            // 0x245c2c: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C30u; }
        if (ctx->pc != 0x245C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x245C30u; }
        if (ctx->pc != 0x245C30u) { return; }
    }
    ctx->pc = 0x245C30u;
label_245c30:
    // 0x245c30: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x245c30u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_245c34:
    // 0x245c34: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x245c34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_245c38:
    // 0x245c38: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x245c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_245c3c:
    // 0x245c3c: 0x8fc50008  lw          $a1, 0x8($fp)
    ctx->pc = 0x245c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_245c40:
    // 0x245c40: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x245c40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_245c44:
    // 0x245c44: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x245c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_245c48:
    // 0x245c48: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x245c48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_245c4c:
    // 0x245c4c: 0xafc30008  sw          $v1, 0x8($fp)
    ctx->pc = 0x245c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 3));
label_245c50:
    // 0x245c50: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x245c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_245c54:
    // 0x245c54: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x245c54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_245c58:
    // 0x245c58: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x245c58u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_245c5c:
    // 0x245c5c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x245c5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_245c60:
    // 0x245c60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x245c60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_245c64:
    // 0x245c64: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x245c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_245c68:
    // 0x245c68: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x245c68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_245c6c:
    // 0x245c6c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x245c6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_245c70:
    // 0x245c70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x245c70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_245c74:
    // 0x245c74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x245c74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_245c78:
    // 0x245c78: 0x3e00008  jr          $ra
label_245c7c:
    if (ctx->pc == 0x245C7Cu) {
        ctx->pc = 0x245C7Cu;
            // 0x245c7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x245C80u;
        goto label_fallthrough_0x245c78;
    }
    ctx->pc = 0x245C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245C78u;
            // 0x245c7c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x245c78:
    ctx->pc = 0x245C80u;
}
