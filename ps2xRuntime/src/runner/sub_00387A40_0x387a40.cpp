#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00387A40
// Address: 0x387a40 - 0x387c80
void sub_00387A40_0x387a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00387A40_0x387a40");
#endif

    switch (ctx->pc) {
        case 0x387a40u: goto label_387a40;
        case 0x387a44u: goto label_387a44;
        case 0x387a48u: goto label_387a48;
        case 0x387a4cu: goto label_387a4c;
        case 0x387a50u: goto label_387a50;
        case 0x387a54u: goto label_387a54;
        case 0x387a58u: goto label_387a58;
        case 0x387a5cu: goto label_387a5c;
        case 0x387a60u: goto label_387a60;
        case 0x387a64u: goto label_387a64;
        case 0x387a68u: goto label_387a68;
        case 0x387a6cu: goto label_387a6c;
        case 0x387a70u: goto label_387a70;
        case 0x387a74u: goto label_387a74;
        case 0x387a78u: goto label_387a78;
        case 0x387a7cu: goto label_387a7c;
        case 0x387a80u: goto label_387a80;
        case 0x387a84u: goto label_387a84;
        case 0x387a88u: goto label_387a88;
        case 0x387a8cu: goto label_387a8c;
        case 0x387a90u: goto label_387a90;
        case 0x387a94u: goto label_387a94;
        case 0x387a98u: goto label_387a98;
        case 0x387a9cu: goto label_387a9c;
        case 0x387aa0u: goto label_387aa0;
        case 0x387aa4u: goto label_387aa4;
        case 0x387aa8u: goto label_387aa8;
        case 0x387aacu: goto label_387aac;
        case 0x387ab0u: goto label_387ab0;
        case 0x387ab4u: goto label_387ab4;
        case 0x387ab8u: goto label_387ab8;
        case 0x387abcu: goto label_387abc;
        case 0x387ac0u: goto label_387ac0;
        case 0x387ac4u: goto label_387ac4;
        case 0x387ac8u: goto label_387ac8;
        case 0x387accu: goto label_387acc;
        case 0x387ad0u: goto label_387ad0;
        case 0x387ad4u: goto label_387ad4;
        case 0x387ad8u: goto label_387ad8;
        case 0x387adcu: goto label_387adc;
        case 0x387ae0u: goto label_387ae0;
        case 0x387ae4u: goto label_387ae4;
        case 0x387ae8u: goto label_387ae8;
        case 0x387aecu: goto label_387aec;
        case 0x387af0u: goto label_387af0;
        case 0x387af4u: goto label_387af4;
        case 0x387af8u: goto label_387af8;
        case 0x387afcu: goto label_387afc;
        case 0x387b00u: goto label_387b00;
        case 0x387b04u: goto label_387b04;
        case 0x387b08u: goto label_387b08;
        case 0x387b0cu: goto label_387b0c;
        case 0x387b10u: goto label_387b10;
        case 0x387b14u: goto label_387b14;
        case 0x387b18u: goto label_387b18;
        case 0x387b1cu: goto label_387b1c;
        case 0x387b20u: goto label_387b20;
        case 0x387b24u: goto label_387b24;
        case 0x387b28u: goto label_387b28;
        case 0x387b2cu: goto label_387b2c;
        case 0x387b30u: goto label_387b30;
        case 0x387b34u: goto label_387b34;
        case 0x387b38u: goto label_387b38;
        case 0x387b3cu: goto label_387b3c;
        case 0x387b40u: goto label_387b40;
        case 0x387b44u: goto label_387b44;
        case 0x387b48u: goto label_387b48;
        case 0x387b4cu: goto label_387b4c;
        case 0x387b50u: goto label_387b50;
        case 0x387b54u: goto label_387b54;
        case 0x387b58u: goto label_387b58;
        case 0x387b5cu: goto label_387b5c;
        case 0x387b60u: goto label_387b60;
        case 0x387b64u: goto label_387b64;
        case 0x387b68u: goto label_387b68;
        case 0x387b6cu: goto label_387b6c;
        case 0x387b70u: goto label_387b70;
        case 0x387b74u: goto label_387b74;
        case 0x387b78u: goto label_387b78;
        case 0x387b7cu: goto label_387b7c;
        case 0x387b80u: goto label_387b80;
        case 0x387b84u: goto label_387b84;
        case 0x387b88u: goto label_387b88;
        case 0x387b8cu: goto label_387b8c;
        case 0x387b90u: goto label_387b90;
        case 0x387b94u: goto label_387b94;
        case 0x387b98u: goto label_387b98;
        case 0x387b9cu: goto label_387b9c;
        case 0x387ba0u: goto label_387ba0;
        case 0x387ba4u: goto label_387ba4;
        case 0x387ba8u: goto label_387ba8;
        case 0x387bacu: goto label_387bac;
        case 0x387bb0u: goto label_387bb0;
        case 0x387bb4u: goto label_387bb4;
        case 0x387bb8u: goto label_387bb8;
        case 0x387bbcu: goto label_387bbc;
        case 0x387bc0u: goto label_387bc0;
        case 0x387bc4u: goto label_387bc4;
        case 0x387bc8u: goto label_387bc8;
        case 0x387bccu: goto label_387bcc;
        case 0x387bd0u: goto label_387bd0;
        case 0x387bd4u: goto label_387bd4;
        case 0x387bd8u: goto label_387bd8;
        case 0x387bdcu: goto label_387bdc;
        case 0x387be0u: goto label_387be0;
        case 0x387be4u: goto label_387be4;
        case 0x387be8u: goto label_387be8;
        case 0x387becu: goto label_387bec;
        case 0x387bf0u: goto label_387bf0;
        case 0x387bf4u: goto label_387bf4;
        case 0x387bf8u: goto label_387bf8;
        case 0x387bfcu: goto label_387bfc;
        case 0x387c00u: goto label_387c00;
        case 0x387c04u: goto label_387c04;
        case 0x387c08u: goto label_387c08;
        case 0x387c0cu: goto label_387c0c;
        case 0x387c10u: goto label_387c10;
        case 0x387c14u: goto label_387c14;
        case 0x387c18u: goto label_387c18;
        case 0x387c1cu: goto label_387c1c;
        case 0x387c20u: goto label_387c20;
        case 0x387c24u: goto label_387c24;
        case 0x387c28u: goto label_387c28;
        case 0x387c2cu: goto label_387c2c;
        case 0x387c30u: goto label_387c30;
        case 0x387c34u: goto label_387c34;
        case 0x387c38u: goto label_387c38;
        case 0x387c3cu: goto label_387c3c;
        case 0x387c40u: goto label_387c40;
        case 0x387c44u: goto label_387c44;
        case 0x387c48u: goto label_387c48;
        case 0x387c4cu: goto label_387c4c;
        case 0x387c50u: goto label_387c50;
        case 0x387c54u: goto label_387c54;
        case 0x387c58u: goto label_387c58;
        case 0x387c5cu: goto label_387c5c;
        case 0x387c60u: goto label_387c60;
        case 0x387c64u: goto label_387c64;
        case 0x387c68u: goto label_387c68;
        case 0x387c6cu: goto label_387c6c;
        case 0x387c70u: goto label_387c70;
        case 0x387c74u: goto label_387c74;
        case 0x387c78u: goto label_387c78;
        case 0x387c7cu: goto label_387c7c;
        default: break;
    }

    ctx->pc = 0x387a40u;

label_387a40:
    // 0x387a40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x387a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_387a44:
    // 0x387a44: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x387a44u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_387a48:
    // 0x387a48: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x387a48u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_387a4c:
    // 0x387a4c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x387a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_387a50:
    // 0x387a50: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x387a50u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_387a54:
    // 0x387a54: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x387a54u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_387a58:
    // 0x387a58: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x387a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_387a5c:
    // 0x387a5c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x387a5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_387a60:
    // 0x387a60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x387a60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_387a64:
    // 0x387a64: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x387a64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_387a68:
    // 0x387a68: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x387a68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_387a6c:
    // 0x387a6c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x387a6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
label_387a70:
    // 0x387a70: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x387a70u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_387a74:
    // 0x387a74: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x387a74u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_387a78:
    // 0x387a78: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x387a78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
label_387a7c:
    // 0x387a7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x387a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_387a80:
    // 0x387a80: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x387a80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
label_387a84:
    // 0x387a84: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x387a84u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_387a88:
    // 0x387a88: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x387a88u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
label_387a8c:
    // 0x387a8c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x387a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_387a90:
    // 0x387a90: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x387a90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
label_387a94:
    // 0x387a94: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x387a94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_387a98:
    // 0x387a98: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x387a98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_387a9c:
    // 0x387a9c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x387a9cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
label_387aa0:
    // 0x387aa0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x387aa0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
label_387aa4:
    // 0x387aa4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x387aa4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_387aa8:
    // 0x387aa8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x387aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_387aac:
    // 0x387aac: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x387aacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
label_387ab0:
    // 0x387ab0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x387ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
label_387ab4:
    // 0x387ab4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x387ab4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_387ab8:
    // 0x387ab8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x387ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_387abc:
    // 0x387abc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x387abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_387ac0:
    // 0x387ac0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x387ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
label_387ac4:
    // 0x387ac4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x387ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_387ac8:
    // 0x387ac8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x387ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_387acc:
    // 0x387acc: 0x3e00008  jr          $ra
label_387ad0:
    if (ctx->pc == 0x387AD0u) {
        ctx->pc = 0x387AD0u;
            // 0x387ad0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->pc = 0x387AD4u;
        goto label_387ad4;
    }
    ctx->pc = 0x387ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387ACCu;
            // 0x387ad0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387AD4u;
label_387ad4:
    // 0x387ad4: 0x0  nop
    ctx->pc = 0x387ad4u;
    // NOP
label_387ad8:
    // 0x387ad8: 0x0  nop
    ctx->pc = 0x387ad8u;
    // NOP
label_387adc:
    // 0x387adc: 0x0  nop
    ctx->pc = 0x387adcu;
    // NOP
label_387ae0:
    // 0x387ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x387ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_387ae4:
    // 0x387ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x387ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_387ae8:
    // 0x387ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x387ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_387aec:
    // 0x387aec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x387aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_387af0:
    // 0x387af0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x387af0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387af4:
    // 0x387af4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x387af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_387af8:
    // 0x387af8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x387af8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387afc:
    // 0x387afc: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x387afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_387b00:
    // 0x387b00: 0x8e190060  lw          $t9, 0x60($s0)
    ctx->pc = 0x387b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_387b04:
    // 0x387b04: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x387b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_387b08:
    // 0x387b08: 0x320f809  jalr        $t9
label_387b0c:
    if (ctx->pc == 0x387B0Cu) {
        ctx->pc = 0x387B0Cu;
            // 0x387b0c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x387B10u;
        goto label_387b10;
    }
    ctx->pc = 0x387B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x387B10u);
        ctx->pc = 0x387B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387B08u;
            // 0x387b0c: 0x26040060  addiu       $a0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x387B10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x387B10u; }
            if (ctx->pc != 0x387B10u) { return; }
        }
        }
    }
    ctx->pc = 0x387B10u;
label_387b10:
    // 0x387b10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x387b10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_387b14:
    // 0x387b14: 0x2e230002  sltiu       $v1, $s1, 0x2
    ctx->pc = 0x387b14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_387b18:
    // 0x387b18: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_387b1c:
    if (ctx->pc == 0x387B1Cu) {
        ctx->pc = 0x387B1Cu;
            // 0x387b1c: 0x26100140  addiu       $s0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->pc = 0x387B20u;
        goto label_387b20;
    }
    ctx->pc = 0x387B18u;
    {
        const bool branch_taken_0x387b18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x387B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387B18u;
            // 0x387b1c: 0x26100140  addiu       $s0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387b18) {
            ctx->pc = 0x387B00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_387b00;
        }
    }
    ctx->pc = 0x387B20u;
label_387b20:
    // 0x387b20: 0x8e4402e8  lw          $a0, 0x2E8($s2)
    ctx->pc = 0x387b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 744)));
label_387b24:
    // 0x387b24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_387b28:
    if (ctx->pc == 0x387B28u) {
        ctx->pc = 0x387B28u;
            // 0x387b28: 0xae4002e8  sw          $zero, 0x2E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 744), GPR_U32(ctx, 0));
        ctx->pc = 0x387B2Cu;
        goto label_387b2c;
    }
    ctx->pc = 0x387B24u;
    {
        const bool branch_taken_0x387b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x387b24) {
            ctx->pc = 0x387B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387B24u;
            // 0x387b28: 0xae4002e8  sw          $zero, 0x2E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x387B40u;
            goto label_387b40;
        }
    }
    ctx->pc = 0x387B2Cu;
label_387b2c:
    // 0x387b2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x387b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_387b30:
    // 0x387b30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x387b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_387b34:
    // 0x387b34: 0x320f809  jalr        $t9
label_387b38:
    if (ctx->pc == 0x387B38u) {
        ctx->pc = 0x387B38u;
            // 0x387b38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x387B3Cu;
        goto label_387b3c;
    }
    ctx->pc = 0x387B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x387B3Cu);
        ctx->pc = 0x387B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387B34u;
            // 0x387b38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x387B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x387B3Cu; }
            if (ctx->pc != 0x387B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x387B3Cu;
label_387b3c:
    // 0x387b3c: 0xae4002e8  sw          $zero, 0x2E8($s2)
    ctx->pc = 0x387b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 744), GPR_U32(ctx, 0));
label_387b40:
    // 0x387b40: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x387b40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_387b44:
    // 0x387b44: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x387b44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_387b48:
    // 0x387b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387b4c:
    // 0x387b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x387b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_387b50:
    // 0x387b50: 0x3e00008  jr          $ra
label_387b54:
    if (ctx->pc == 0x387B54u) {
        ctx->pc = 0x387B54u;
            // 0x387b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x387B58u;
        goto label_387b58;
    }
    ctx->pc = 0x387B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387B50u;
            // 0x387b54: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387B58u;
label_387b58:
    // 0x387b58: 0x0  nop
    ctx->pc = 0x387b58u;
    // NOP
label_387b5c:
    // 0x387b5c: 0x0  nop
    ctx->pc = 0x387b5cu;
    // NOP
label_387b60:
    // 0x387b60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x387b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_387b64:
    // 0x387b64: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x387b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_387b68:
    // 0x387b68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x387b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_387b6c:
    // 0x387b6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x387b6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_387b70:
    // 0x387b70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x387b70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_387b74:
    // 0x387b74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x387b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_387b78:
    // 0x387b78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x387b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_387b7c:
    // 0x387b7c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x387b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_387b80:
    // 0x387b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x387b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_387b84:
    // 0x387b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x387b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_387b88:
    // 0x387b88: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x387b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_387b8c:
    // 0x387b8c: 0x8c426118  lw          $v0, 0x6118($v0)
    ctx->pc = 0x387b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24856)));
label_387b90:
    // 0x387b90: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x387b90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_387b94:
    // 0x387b94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x387b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387b98:
    // 0x387b98: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x387b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_387b9c:
    // 0x387b9c: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x387b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_387ba0:
    // 0x387ba0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x387ba0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_387ba4:
    // 0x387ba4: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x387ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_387ba8:
    // 0x387ba8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x387ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_387bac:
    // 0x387bac: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x387bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_387bb0:
    // 0x387bb0: 0x8c47005c  lw          $a3, 0x5C($v0)
    ctx->pc = 0x387bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_387bb4:
    // 0x387bb4: 0xc0d37ec  jal         func_34DFB0
label_387bb8:
    if (ctx->pc == 0x387BB8u) {
        ctx->pc = 0x387BB8u;
            // 0x387bb8: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->pc = 0x387BBCu;
        goto label_387bbc;
    }
    ctx->pc = 0x387BB4u;
    SET_GPR_U32(ctx, 31, 0x387BBCu);
    ctx->pc = 0x387BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387BB4u;
            // 0x387bb8: 0x26240054  addiu       $a0, $s1, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387BBCu; }
        if (ctx->pc != 0x387BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387BBCu; }
        if (ctx->pc != 0x387BBCu) { return; }
    }
    ctx->pc = 0x387BBCu;
label_387bbc:
    // 0x387bbc: 0xae31005c  sw          $s1, 0x5C($s1)
    ctx->pc = 0x387bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 17));
label_387bc0:
    // 0x387bc0: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x387bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_387bc4:
    // 0x387bc4: 0xae510130  sw          $s1, 0x130($s2)
    ctx->pc = 0x387bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 304), GPR_U32(ctx, 17));
label_387bc8:
    // 0x387bc8: 0x8e590060  lw          $t9, 0x60($s2)
    ctx->pc = 0x387bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_387bcc:
    // 0x387bcc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x387bccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_387bd0:
    // 0x387bd0: 0x320f809  jalr        $t9
label_387bd4:
    if (ctx->pc == 0x387BD4u) {
        ctx->pc = 0x387BD4u;
            // 0x387bd4: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->pc = 0x387BD8u;
        goto label_387bd8;
    }
    ctx->pc = 0x387BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x387BD8u);
        ctx->pc = 0x387BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387BD0u;
            // 0x387bd4: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x387BD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x387BD8u; }
            if (ctx->pc != 0x387BD8u) { return; }
        }
        }
    }
    ctx->pc = 0x387BD8u;
label_387bd8:
    // 0x387bd8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x387bd8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_387bdc:
    // 0x387bdc: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x387bdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_387be0:
    // 0x387be0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_387be4:
    if (ctx->pc == 0x387BE4u) {
        ctx->pc = 0x387BE4u;
            // 0x387be4: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->pc = 0x387BE8u;
        goto label_387be8;
    }
    ctx->pc = 0x387BE0u;
    {
        const bool branch_taken_0x387be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x387BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387BE0u;
            // 0x387be4: 0x26520140  addiu       $s2, $s2, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x387be0) {
            ctx->pc = 0x387BC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_387bc4;
        }
    }
    ctx->pc = 0x387BE8u;
label_387be8:
    // 0x387be8: 0xc040180  jal         func_100600
label_387bec:
    if (ctx->pc == 0x387BECu) {
        ctx->pc = 0x387BECu;
            // 0x387bec: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x387BF0u;
        goto label_387bf0;
    }
    ctx->pc = 0x387BE8u;
    SET_GPR_U32(ctx, 31, 0x387BF0u);
    ctx->pc = 0x387BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387BE8u;
            // 0x387bec: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387BF0u; }
        if (ctx->pc != 0x387BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387BF0u; }
        if (ctx->pc != 0x387BF0u) { return; }
    }
    ctx->pc = 0x387BF0u;
label_387bf0:
    // 0x387bf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x387bf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_387bf4:
    // 0x387bf4: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_387bf8:
    if (ctx->pc == 0x387BF8u) {
        ctx->pc = 0x387BF8u;
            // 0x387bf8: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->pc = 0x387BFCu;
        goto label_387bfc;
    }
    ctx->pc = 0x387BF4u;
    {
        const bool branch_taken_0x387bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x387bf4) {
            ctx->pc = 0x387BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x387BF4u;
            // 0x387bf8: 0x3c023e4c  lui         $v0, 0x3E4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x387C34u;
            goto label_387c34;
        }
    }
    ctx->pc = 0x387BFCu;
label_387bfc:
    // 0x387bfc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x387bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_387c00:
    // 0x387c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x387c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_387c04:
    // 0x387c04: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x387c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_387c08:
    // 0x387c08: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x387c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_387c0c:
    // 0x387c0c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x387c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_387c10:
    // 0x387c10: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x387c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_387c14:
    // 0x387c14: 0xc040138  jal         func_1004E0
label_387c18:
    if (ctx->pc == 0x387C18u) {
        ctx->pc = 0x387C18u;
            // 0x387c18: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x387C1Cu;
        goto label_387c1c;
    }
    ctx->pc = 0x387C14u;
    SET_GPR_U32(ctx, 31, 0x387C1Cu);
    ctx->pc = 0x387C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387C14u;
            // 0x387c18: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387C1Cu; }
        if (ctx->pc != 0x387C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387C1Cu; }
        if (ctx->pc != 0x387C1Cu) { return; }
    }
    ctx->pc = 0x387C1Cu;
label_387c1c:
    // 0x387c1c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x387c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_387c20:
    // 0x387c20: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x387c20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_387c24:
    // 0x387c24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x387c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387c28:
    // 0x387c28: 0xc04a576  jal         func_1295D8
label_387c2c:
    if (ctx->pc == 0x387C2Cu) {
        ctx->pc = 0x387C2Cu;
            // 0x387c2c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x387C30u;
        goto label_387c30;
    }
    ctx->pc = 0x387C28u;
    SET_GPR_U32(ctx, 31, 0x387C30u);
    ctx->pc = 0x387C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387C28u;
            // 0x387c2c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387C30u; }
        if (ctx->pc != 0x387C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387C30u; }
        if (ctx->pc != 0x387C30u) { return; }
    }
    ctx->pc = 0x387C30u;
label_387c30:
    // 0x387c30: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x387c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_387c34:
    // 0x387c34: 0x3c03451c  lui         $v1, 0x451C
    ctx->pc = 0x387c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17692 << 16));
label_387c38:
    // 0x387c38: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x387c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_387c3c:
    // 0x387c3c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x387c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_387c40:
    // 0x387c40: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x387c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_387c44:
    // 0x387c44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x387c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_387c48:
    // 0x387c48: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x387c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_387c4c:
    // 0x387c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x387c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387c50:
    // 0x387c50: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x387c50u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_387c54:
    // 0x387c54: 0x34460cae  ori         $a2, $v0, 0xCAE
    ctx->pc = 0x387c54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3246);
label_387c58:
    // 0x387c58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x387c58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_387c5c:
    // 0x387c5c: 0xc122cd8  jal         func_48B360
label_387c60:
    if (ctx->pc == 0x387C60u) {
        ctx->pc = 0x387C60u;
            // 0x387c60: 0xae3002e8  sw          $s0, 0x2E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 16));
        ctx->pc = 0x387C64u;
        goto label_387c64;
    }
    ctx->pc = 0x387C5Cu;
    SET_GPR_U32(ctx, 31, 0x387C64u);
    ctx->pc = 0x387C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x387C5Cu;
            // 0x387c60: 0xae3002e8  sw          $s0, 0x2E8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 744), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387C64u; }
        if (ctx->pc != 0x387C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x387C64u; }
        if (ctx->pc != 0x387C64u) { return; }
    }
    ctx->pc = 0x387C64u;
label_387c64:
    // 0x387c64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x387c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_387c68:
    // 0x387c68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x387c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_387c6c:
    // 0x387c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x387c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_387c70:
    // 0x387c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x387c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_387c74:
    // 0x387c74: 0x3e00008  jr          $ra
label_387c78:
    if (ctx->pc == 0x387C78u) {
        ctx->pc = 0x387C78u;
            // 0x387c78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x387C7Cu;
        goto label_387c7c;
    }
    ctx->pc = 0x387C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x387C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x387C74u;
            // 0x387c78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x387C7Cu;
label_387c7c:
    // 0x387c7c: 0x0  nop
    ctx->pc = 0x387c7cu;
    // NOP
}
