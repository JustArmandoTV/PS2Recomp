#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F5A50
// Address: 0x1f5a50 - 0x1f5c60
void sub_001F5A50_0x1f5a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F5A50_0x1f5a50");
#endif

    switch (ctx->pc) {
        case 0x1f5a50u: goto label_1f5a50;
        case 0x1f5a54u: goto label_1f5a54;
        case 0x1f5a58u: goto label_1f5a58;
        case 0x1f5a5cu: goto label_1f5a5c;
        case 0x1f5a60u: goto label_1f5a60;
        case 0x1f5a64u: goto label_1f5a64;
        case 0x1f5a68u: goto label_1f5a68;
        case 0x1f5a6cu: goto label_1f5a6c;
        case 0x1f5a70u: goto label_1f5a70;
        case 0x1f5a74u: goto label_1f5a74;
        case 0x1f5a78u: goto label_1f5a78;
        case 0x1f5a7cu: goto label_1f5a7c;
        case 0x1f5a80u: goto label_1f5a80;
        case 0x1f5a84u: goto label_1f5a84;
        case 0x1f5a88u: goto label_1f5a88;
        case 0x1f5a8cu: goto label_1f5a8c;
        case 0x1f5a90u: goto label_1f5a90;
        case 0x1f5a94u: goto label_1f5a94;
        case 0x1f5a98u: goto label_1f5a98;
        case 0x1f5a9cu: goto label_1f5a9c;
        case 0x1f5aa0u: goto label_1f5aa0;
        case 0x1f5aa4u: goto label_1f5aa4;
        case 0x1f5aa8u: goto label_1f5aa8;
        case 0x1f5aacu: goto label_1f5aac;
        case 0x1f5ab0u: goto label_1f5ab0;
        case 0x1f5ab4u: goto label_1f5ab4;
        case 0x1f5ab8u: goto label_1f5ab8;
        case 0x1f5abcu: goto label_1f5abc;
        case 0x1f5ac0u: goto label_1f5ac0;
        case 0x1f5ac4u: goto label_1f5ac4;
        case 0x1f5ac8u: goto label_1f5ac8;
        case 0x1f5accu: goto label_1f5acc;
        case 0x1f5ad0u: goto label_1f5ad0;
        case 0x1f5ad4u: goto label_1f5ad4;
        case 0x1f5ad8u: goto label_1f5ad8;
        case 0x1f5adcu: goto label_1f5adc;
        case 0x1f5ae0u: goto label_1f5ae0;
        case 0x1f5ae4u: goto label_1f5ae4;
        case 0x1f5ae8u: goto label_1f5ae8;
        case 0x1f5aecu: goto label_1f5aec;
        case 0x1f5af0u: goto label_1f5af0;
        case 0x1f5af4u: goto label_1f5af4;
        case 0x1f5af8u: goto label_1f5af8;
        case 0x1f5afcu: goto label_1f5afc;
        case 0x1f5b00u: goto label_1f5b00;
        case 0x1f5b04u: goto label_1f5b04;
        case 0x1f5b08u: goto label_1f5b08;
        case 0x1f5b0cu: goto label_1f5b0c;
        case 0x1f5b10u: goto label_1f5b10;
        case 0x1f5b14u: goto label_1f5b14;
        case 0x1f5b18u: goto label_1f5b18;
        case 0x1f5b1cu: goto label_1f5b1c;
        case 0x1f5b20u: goto label_1f5b20;
        case 0x1f5b24u: goto label_1f5b24;
        case 0x1f5b28u: goto label_1f5b28;
        case 0x1f5b2cu: goto label_1f5b2c;
        case 0x1f5b30u: goto label_1f5b30;
        case 0x1f5b34u: goto label_1f5b34;
        case 0x1f5b38u: goto label_1f5b38;
        case 0x1f5b3cu: goto label_1f5b3c;
        case 0x1f5b40u: goto label_1f5b40;
        case 0x1f5b44u: goto label_1f5b44;
        case 0x1f5b48u: goto label_1f5b48;
        case 0x1f5b4cu: goto label_1f5b4c;
        case 0x1f5b50u: goto label_1f5b50;
        case 0x1f5b54u: goto label_1f5b54;
        case 0x1f5b58u: goto label_1f5b58;
        case 0x1f5b5cu: goto label_1f5b5c;
        case 0x1f5b60u: goto label_1f5b60;
        case 0x1f5b64u: goto label_1f5b64;
        case 0x1f5b68u: goto label_1f5b68;
        case 0x1f5b6cu: goto label_1f5b6c;
        case 0x1f5b70u: goto label_1f5b70;
        case 0x1f5b74u: goto label_1f5b74;
        case 0x1f5b78u: goto label_1f5b78;
        case 0x1f5b7cu: goto label_1f5b7c;
        case 0x1f5b80u: goto label_1f5b80;
        case 0x1f5b84u: goto label_1f5b84;
        case 0x1f5b88u: goto label_1f5b88;
        case 0x1f5b8cu: goto label_1f5b8c;
        case 0x1f5b90u: goto label_1f5b90;
        case 0x1f5b94u: goto label_1f5b94;
        case 0x1f5b98u: goto label_1f5b98;
        case 0x1f5b9cu: goto label_1f5b9c;
        case 0x1f5ba0u: goto label_1f5ba0;
        case 0x1f5ba4u: goto label_1f5ba4;
        case 0x1f5ba8u: goto label_1f5ba8;
        case 0x1f5bacu: goto label_1f5bac;
        case 0x1f5bb0u: goto label_1f5bb0;
        case 0x1f5bb4u: goto label_1f5bb4;
        case 0x1f5bb8u: goto label_1f5bb8;
        case 0x1f5bbcu: goto label_1f5bbc;
        case 0x1f5bc0u: goto label_1f5bc0;
        case 0x1f5bc4u: goto label_1f5bc4;
        case 0x1f5bc8u: goto label_1f5bc8;
        case 0x1f5bccu: goto label_1f5bcc;
        case 0x1f5bd0u: goto label_1f5bd0;
        case 0x1f5bd4u: goto label_1f5bd4;
        case 0x1f5bd8u: goto label_1f5bd8;
        case 0x1f5bdcu: goto label_1f5bdc;
        case 0x1f5be0u: goto label_1f5be0;
        case 0x1f5be4u: goto label_1f5be4;
        case 0x1f5be8u: goto label_1f5be8;
        case 0x1f5becu: goto label_1f5bec;
        case 0x1f5bf0u: goto label_1f5bf0;
        case 0x1f5bf4u: goto label_1f5bf4;
        case 0x1f5bf8u: goto label_1f5bf8;
        case 0x1f5bfcu: goto label_1f5bfc;
        case 0x1f5c00u: goto label_1f5c00;
        case 0x1f5c04u: goto label_1f5c04;
        case 0x1f5c08u: goto label_1f5c08;
        case 0x1f5c0cu: goto label_1f5c0c;
        case 0x1f5c10u: goto label_1f5c10;
        case 0x1f5c14u: goto label_1f5c14;
        case 0x1f5c18u: goto label_1f5c18;
        case 0x1f5c1cu: goto label_1f5c1c;
        case 0x1f5c20u: goto label_1f5c20;
        case 0x1f5c24u: goto label_1f5c24;
        case 0x1f5c28u: goto label_1f5c28;
        case 0x1f5c2cu: goto label_1f5c2c;
        case 0x1f5c30u: goto label_1f5c30;
        case 0x1f5c34u: goto label_1f5c34;
        case 0x1f5c38u: goto label_1f5c38;
        case 0x1f5c3cu: goto label_1f5c3c;
        case 0x1f5c40u: goto label_1f5c40;
        case 0x1f5c44u: goto label_1f5c44;
        case 0x1f5c48u: goto label_1f5c48;
        case 0x1f5c4cu: goto label_1f5c4c;
        case 0x1f5c50u: goto label_1f5c50;
        case 0x1f5c54u: goto label_1f5c54;
        case 0x1f5c58u: goto label_1f5c58;
        case 0x1f5c5cu: goto label_1f5c5c;
        default: break;
    }

    ctx->pc = 0x1f5a50u;

label_1f5a50:
    // 0x1f5a50: 0x27bdfd50  addiu       $sp, $sp, -0x2B0
    ctx->pc = 0x1f5a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966608));
label_1f5a54:
    // 0x1f5a54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f5a58:
    // 0x1f5a58: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1f5a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1f5a5c:
    // 0x1f5a5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1f5a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1f5a60:
    // 0x1f5a60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f5a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1f5a64:
    // 0x1f5a64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1f5a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1f5a68:
    // 0x1f5a68: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1f5a68u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a6c:
    // 0x1f5a6c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f5a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1f5a70:
    // 0x1f5a70: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f5a70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a74:
    // 0x1f5a74: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f5a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1f5a78:
    // 0x1f5a78: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1f5a78u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a7c:
    // 0x1f5a7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f5a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1f5a80:
    // 0x1f5a80: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f5a80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f5a84:
    // 0x1f5a84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f5a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f5a88:
    // 0x1f5a88: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f5a88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a8c:
    // 0x1f5a8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f5a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1f5a90:
    // 0x1f5a90: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f5a90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f5a94:
    // 0x1f5a94: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1f5a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1f5a98:
    // 0x1f5a98: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1f5a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1f5a9c:
    // 0x1f5a9c: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1f5a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1f5aa0:
    // 0x1f5aa0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1f5aa0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f5aa4:
    // 0x1f5aa4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1f5aa8:
    if (ctx->pc == 0x1F5AA8u) {
        ctx->pc = 0x1F5AA8u;
            // 0x1f5aa8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1F5AACu;
        goto label_1f5aac;
    }
    ctx->pc = 0x1F5AA4u;
    {
        const bool branch_taken_0x1f5aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5AA4u;
            // 0x1f5aa8: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5aa4) {
            ctx->pc = 0x1F5AD4u;
            goto label_1f5ad4;
        }
    }
    ctx->pc = 0x1F5AACu;
label_1f5aac:
    // 0x1f5aac: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1f5aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1f5ab0:
    // 0x1f5ab0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1f5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1f5ab4:
    // 0x1f5ab4: 0x2442af70  addiu       $v0, $v0, -0x5090
    ctx->pc = 0x1f5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946672));
label_1f5ab8:
    // 0x1f5ab8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f5ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1f5abc:
    // 0x1f5abc: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1f5ac0:
    // 0x1f5ac0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1f5ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1f5ac4:
    // 0x1f5ac4: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1f5ac8:
    // 0x1f5ac8: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1f5ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1f5acc:
    // 0x1f5acc: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1f5accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1f5ad0:
    // 0x1f5ad0: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1f5ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1f5ad4:
    // 0x1f5ad4: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x1f5ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f5ad8:
    // 0x1f5ad8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1f5ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f5adc:
    // 0x1f5adc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1f5adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1f5ae0:
    // 0x1f5ae0: 0x320f809  jalr        $t9
label_1f5ae4:
    if (ctx->pc == 0x1F5AE4u) {
        ctx->pc = 0x1F5AE8u;
        goto label_1f5ae8;
    }
    ctx->pc = 0x1F5AE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5AE8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5AE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5AE8u; }
            if (ctx->pc != 0x1F5AE8u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5AE8u;
label_1f5ae8:
    // 0x1f5ae8: 0xafb4029c  sw          $s4, 0x29C($sp)
    ctx->pc = 0x1f5ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 20));
label_1f5aec:
    // 0x1f5aec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f5aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5af0:
    // 0x1f5af0: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1f5af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1f5af4:
    // 0x1f5af4: 0xafa30298  sw          $v1, 0x298($sp)
    ctx->pc = 0x1f5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 3));
label_1f5af8:
    // 0x1f5af8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1f5af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1f5afc:
    // 0x1f5afc: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1f5afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5b00:
    // 0x1f5b00: 0x8c77000c  lw          $s7, 0xC($v1)
    ctx->pc = 0x1f5b00u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1f5b04:
    // 0x1f5b04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1f5b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1f5b08:
    // 0x1f5b08: 0x320f809  jalr        $t9
label_1f5b0c:
    if (ctx->pc == 0x1F5B0Cu) {
        ctx->pc = 0x1F5B0Cu;
            // 0x1f5b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B10u;
        goto label_1f5b10;
    }
    ctx->pc = 0x1F5B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5B10u);
        ctx->pc = 0x1F5B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B08u;
            // 0x1f5b0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5B10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B10u; }
            if (ctx->pc != 0x1F5B10u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5B10u;
label_1f5b10:
    // 0x1f5b10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b14:
    // 0x1f5b14: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f5b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5b18:
    // 0x1f5b18: 0x12030033  beq         $s0, $v1, . + 4 + (0x33 << 2)
label_1f5b1c:
    if (ctx->pc == 0x1F5B1Cu) {
        ctx->pc = 0x1F5B20u;
        goto label_1f5b20;
    }
    ctx->pc = 0x1F5B18u;
    {
        const bool branch_taken_0x1f5b18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f5b18) {
            ctx->pc = 0x1F5BE8u;
            goto label_1f5be8;
        }
    }
    ctx->pc = 0x1F5B20u;
label_1f5b20:
    // 0x1f5b20: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1f5b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f5b24:
    // 0x1f5b24: 0x27a402ac  addiu       $a0, $sp, 0x2AC
    ctx->pc = 0x1f5b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_1f5b28:
    // 0x1f5b28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f5b28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b2c:
    // 0x1f5b2c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1f5b2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b30:
    // 0x1f5b30: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1f5b30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b34:
    // 0x1f5b34: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1f5b34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b38:
    // 0x1f5b38: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x1f5b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1f5b3c:
    // 0x1f5b3c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1f5b3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1f5b40:
    // 0x1f5b40: 0x320f809  jalr        $t9
label_1f5b44:
    if (ctx->pc == 0x1F5B44u) {
        ctx->pc = 0x1F5B44u;
            // 0x1f5b44: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5B48u;
        goto label_1f5b48;
    }
    ctx->pc = 0x1F5B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5B48u);
        ctx->pc = 0x1F5B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B40u;
            // 0x1f5b44: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5B48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B48u; }
            if (ctx->pc != 0x1F5B48u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5B48u;
label_1f5b48:
    // 0x1f5b48: 0x27a202ac  addiu       $v0, $sp, 0x2AC
    ctx->pc = 0x1f5b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 684));
label_1f5b4c:
    // 0x1f5b4c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f5b4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1f5b50:
    // 0x1f5b50: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1f5b54:
    if (ctx->pc == 0x1F5B54u) {
        ctx->pc = 0x1F5B58u;
        goto label_1f5b58;
    }
    ctx->pc = 0x1F5B50u;
    {
        const bool branch_taken_0x1f5b50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5b50) {
            ctx->pc = 0x1F5BC0u;
            goto label_1f5bc0;
        }
    }
    ctx->pc = 0x1F5B58u;
label_1f5b58:
    // 0x1f5b58: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f5b58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f5b5c:
    // 0x1f5b5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f5b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b60:
    // 0x1f5b60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b64:
    // 0x1f5b64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1f5b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1f5b68:
    // 0x1f5b68: 0x320f809  jalr        $t9
label_1f5b6c:
    if (ctx->pc == 0x1F5B6Cu) {
        ctx->pc = 0x1F5B6Cu;
            // 0x1f5b6c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1F5B70u;
        goto label_1f5b70;
    }
    ctx->pc = 0x1F5B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5B70u);
        ctx->pc = 0x1F5B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5B68u;
            // 0x1f5b6c: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5B70u; }
            if (ctx->pc != 0x1F5B70u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5B70u;
label_1f5b70:
    // 0x1f5b70: 0xafa20290  sw          $v0, 0x290($sp)
    ctx->pc = 0x1f5b70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 656), GPR_U32(ctx, 2));
label_1f5b74:
    // 0x1f5b74: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x1f5b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_1f5b78:
    // 0x1f5b78: 0xafb00294  sw          $s0, 0x294($sp)
    ctx->pc = 0x1f5b78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 16));
label_1f5b7c:
    // 0x1f5b7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1f5b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b80:
    // 0x1f5b80: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1f5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1f5b84:
    // 0x1f5b84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f5b84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b88:
    // 0x1f5b88: 0x8e490000  lw          $t1, 0x0($s2)
    ctx->pc = 0x1f5b88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f5b8c:
    // 0x1f5b8c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f5b8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f5b90:
    // 0x1f5b90: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1f5b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1f5b94:
    // 0x1f5b94: 0x2e91821  addu        $v1, $s7, $t1
    ctx->pc = 0x1f5b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 9)));
label_1f5b98:
    // 0x1f5b98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f5b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1f5b9c:
    // 0x1f5b9c: 0x904301a0  lbu         $v1, 0x1A0($v0)
    ctx->pc = 0x1f5b9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 416)));
label_1f5ba0:
    // 0x1f5ba0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f5ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f5ba4:
    // 0x1f5ba4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f5ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f5ba8:
    // 0x1f5ba8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1f5bac:
    // 0x1f5bac: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x1f5bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_1f5bb0:
    // 0x1f5bb0: 0x8c4209ac  lw          $v0, 0x9AC($v0)
    ctx->pc = 0x1f5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2476)));
label_1f5bb4:
    // 0x1f5bb4: 0x40f809  jalr        $v0
label_1f5bb8:
    if (ctx->pc == 0x1F5BB8u) {
        ctx->pc = 0x1F5BB8u;
            // 0x1f5bb8: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5BBCu;
        goto label_1f5bbc;
    }
    ctx->pc = 0x1F5BB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F5BBCu);
        ctx->pc = 0x1F5BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5BB4u;
            // 0x1f5bb8: 0x2c0402d  daddu       $t0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5BBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BBCu; }
            if (ctx->pc != 0x1F5BBCu) { return; }
        }
        }
    }
    ctx->pc = 0x1F5BBCu;
label_1f5bbc:
    // 0x1f5bbc: 0x0  nop
    ctx->pc = 0x1f5bbcu;
    // NOP
label_1f5bc0:
    // 0x1f5bc0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1f5bc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f5bc4:
    // 0x1f5bc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f5bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f5bc8:
    // 0x1f5bc8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1f5bc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1f5bcc:
    // 0x1f5bcc: 0x320f809  jalr        $t9
label_1f5bd0:
    if (ctx->pc == 0x1F5BD0u) {
        ctx->pc = 0x1F5BD0u;
            // 0x1f5bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F5BD4u;
        goto label_1f5bd4;
    }
    ctx->pc = 0x1F5BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1F5BD4u);
        ctx->pc = 0x1F5BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5BCCu;
            // 0x1f5bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F5BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F5BD4u; }
            if (ctx->pc != 0x1F5BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x1F5BD4u;
label_1f5bd4:
    // 0x1f5bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f5bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f5bd8:
    // 0x1f5bd8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f5bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f5bdc:
    // 0x1f5bdc: 0x5603ffd1  bnel        $s0, $v1, . + 4 + (-0x2F << 2)
label_1f5be0:
    if (ctx->pc == 0x1F5BE0u) {
        ctx->pc = 0x1F5BE0u;
            // 0x1f5be0: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x1F5BE4u;
        goto label_1f5be4;
    }
    ctx->pc = 0x1F5BDCu;
    {
        const bool branch_taken_0x1f5bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x1f5bdc) {
            ctx->pc = 0x1F5BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5BDCu;
            // 0x1f5be0: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5B24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f5b24;
        }
    }
    ctx->pc = 0x1F5BE4u;
label_1f5be4:
    // 0x1f5be4: 0x0  nop
    ctx->pc = 0x1f5be4u;
    // NOP
label_1f5be8:
    // 0x1f5be8: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1f5be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1f5bec:
    // 0x1f5bec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1f5becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1f5bf0:
    // 0x1f5bf0: 0x8c84ea64  lw          $a0, -0x159C($a0)
    ctx->pc = 0x1f5bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961764)));
label_1f5bf4:
    // 0x1f5bf4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1f5bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1f5bf8:
    // 0x1f5bf8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1f5bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1f5bfc:
    // 0x1f5bfc: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1f5bfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1f5c00:
    // 0x1f5c00: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1f5c04:
    if (ctx->pc == 0x1F5C04u) {
        ctx->pc = 0x1F5C04u;
            // 0x1f5c04: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1F5C08u;
        goto label_1f5c08;
    }
    ctx->pc = 0x1F5C00u;
    {
        const bool branch_taken_0x1f5c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F5C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C00u;
            // 0x1f5c04: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5c00) {
            ctx->pc = 0x1F5C30u;
            goto label_1f5c30;
        }
    }
    ctx->pc = 0x1F5C08u;
label_1f5c08:
    // 0x1f5c08: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1f5c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1f5c0c:
    // 0x1f5c0c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1f5c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1f5c10:
    // 0x1f5c10: 0x2463af88  addiu       $v1, $v1, -0x5078
    ctx->pc = 0x1f5c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946696));
label_1f5c14:
    // 0x1f5c14: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f5c14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1f5c18:
    // 0x1f5c18: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1f5c1c:
    // 0x1f5c1c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1f5c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1f5c20:
    // 0x1f5c20: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1f5c20u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1f5c24:
    // 0x1f5c24: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1f5c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1f5c28:
    // 0x1f5c28: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1f5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1f5c2c:
    // 0x1f5c2c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1f5c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1f5c30:
    // 0x1f5c30: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1f5c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1f5c34:
    // 0x1f5c34: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1f5c34u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1f5c38:
    // 0x1f5c38: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1f5c38u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1f5c3c:
    // 0x1f5c3c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1f5c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1f5c40:
    // 0x1f5c40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f5c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1f5c44:
    // 0x1f5c44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f5c44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1f5c48:
    // 0x1f5c48: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f5c48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f5c4c:
    // 0x1f5c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f5c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f5c50:
    // 0x1f5c50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f5c50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f5c54:
    // 0x1f5c54: 0x3e00008  jr          $ra
label_1f5c58:
    if (ctx->pc == 0x1F5C58u) {
        ctx->pc = 0x1F5C58u;
            // 0x1f5c58: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = 0x1F5C5Cu;
        goto label_1f5c5c;
    }
    ctx->pc = 0x1F5C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F5C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5C54u;
            // 0x1f5c58: 0x27bd02b0  addiu       $sp, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5C5Cu;
label_1f5c5c:
    // 0x1f5c5c: 0x0  nop
    ctx->pc = 0x1f5c5cu;
    // NOP
}
