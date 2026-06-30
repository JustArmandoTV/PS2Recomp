#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042CA80
// Address: 0x42ca80 - 0x42cc60
void sub_0042CA80_0x42ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042CA80_0x42ca80");
#endif

    switch (ctx->pc) {
        case 0x42caa8u: goto label_42caa8;
        case 0x42cac8u: goto label_42cac8;
        case 0x42cb1cu: goto label_42cb1c;
        case 0x42cb30u: goto label_42cb30;
        case 0x42cb4cu: goto label_42cb4c;
        case 0x42cb90u: goto label_42cb90;
        case 0x42cbf0u: goto label_42cbf0;
        case 0x42cbfcu: goto label_42cbfc;
        case 0x42cc08u: goto label_42cc08;
        case 0x42cc14u: goto label_42cc14;
        case 0x42cc20u: goto label_42cc20;
        case 0x42cc2cu: goto label_42cc2c;
        case 0x42cc44u: goto label_42cc44;
        default: break;
    }

    ctx->pc = 0x42ca80u;

    // 0x42ca80: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x42ca80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x42ca84: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x42ca84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x42ca88: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x42ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x42ca8c: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x42ca8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
    // 0x42ca90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42ca90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x42ca94: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42ca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x42ca98: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x42ca98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42ca9c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42caa0: 0xc10b350  jal         func_42CD40
    ctx->pc = 0x42CAA0u;
    SET_GPR_U32(ctx, 31, 0x42CAA8u);
    ctx->pc = 0x42CAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CAA0u;
            // 0x42caa4: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42CD40u;
    if (runtime->hasFunction(0x42CD40u)) {
        auto targetFn = runtime->lookupFunction(0x42CD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CAA8u; }
        if (ctx->pc != 0x42CAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042CD40_0x42cd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CAA8u; }
        if (ctx->pc != 0x42CAA8u) { return; }
    }
    ctx->pc = 0x42CAA8u;
label_42caa8:
    // 0x42caa8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x42caac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42caacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42cab0: 0x2463c480  addiu       $v1, $v1, -0x3B80
    ctx->pc = 0x42cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952064));
    // 0x42cab4: 0x2442c4b8  addiu       $v0, $v0, -0x3B48
    ctx->pc = 0x42cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952120));
    // 0x42cab8: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x42cab8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x42cabc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x42cabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cac0: 0xc10b34c  jal         func_42CD30
    ctx->pc = 0x42CAC0u;
    SET_GPR_U32(ctx, 31, 0x42CAC8u);
    ctx->pc = 0x42CAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CAC0u;
            // 0x42cac4: 0xae620064  sw          $v0, 0x64($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42CD30u;
    if (runtime->hasFunction(0x42CD30u)) {
        auto targetFn = runtime->lookupFunction(0x42CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CAC8u; }
        if (ctx->pc != 0x42CAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042CD30_0x42cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CAC8u; }
        if (ctx->pc != 0x42CAC8u) { return; }
    }
    ctx->pc = 0x42CAC8u;
label_42cac8:
    // 0x42cac8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x42cac8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x42cacc: 0x3c034060  lui         $v1, 0x4060
    ctx->pc = 0x42caccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16480 << 16));
    // 0x42cad0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42cad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42cad4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x42cad4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cad8: 0x2442c3d0  addiu       $v0, $v0, -0x3C30
    ctx->pc = 0x42cad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951888));
    // 0x42cadc: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x42cadcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x42cae0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x42cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x42cae4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x42cae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cae8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42caec: 0x2442c408  addiu       $v0, $v0, -0x3BF8
    ctx->pc = 0x42caecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951944));
    // 0x42caf0: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x42caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
    // 0x42caf4: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x42caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x42caf8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x42caf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x42cafc: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x42cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x42cb00: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x42cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x42cb04: 0xafa30050  sw          $v1, 0x50($sp)
    ctx->pc = 0x42cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
    // 0x42cb08: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x42cb08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x42cb0c: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x42cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x42cb10: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x42cb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x42cb14: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x42cb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x42cb18: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x42cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_42cb1c:
    // 0x42cb1c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42cb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x42cb20: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x42cb20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x42cb24: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x42cb24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
    // 0x42cb28: 0xc0a7a88  jal         func_29EA20
    ctx->pc = 0x42CB28u;
    SET_GPR_U32(ctx, 31, 0x42CB30u);
    ctx->pc = 0x42CB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CB28u;
            // 0x42cb2c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CB30u; }
        if (ctx->pc != 0x42CB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CB30u; }
        if (ctx->pc != 0x42CB30u) { return; }
    }
    ctx->pc = 0x42CB30u;
label_42cb30:
    // 0x42cb30: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x42cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x42cb34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42cb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cb38: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42CB38u;
    {
        const bool branch_taken_0x42cb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CB38u;
            // 0x42cb3c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cb38) {
            ctx->pc = 0x42CB50u;
            goto label_42cb50;
        }
    }
    ctx->pc = 0x42CB40u;
    // 0x42cb40: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42cb40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x42cb44: 0xc0804bc  jal         func_2012F0
    ctx->pc = 0x42CB44u;
    SET_GPR_U32(ctx, 31, 0x42CB4Cu);
    ctx->pc = 0x42CB48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CB44u;
            // 0x42cb48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CB4Cu; }
        if (ctx->pc != 0x42CB4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CB4Cu; }
        if (ctx->pc != 0x42CB4Cu) { return; }
    }
    ctx->pc = 0x42CB4Cu;
label_42cb4c:
    // 0x42cb4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x42cb4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42cb50:
    // 0x42cb50: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x42cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x42cb54: 0xac4400a8  sw          $a0, 0xA8($v0)
    ctx->pc = 0x42cb54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 168), GPR_U32(ctx, 4));
    // 0x42cb58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x42cb58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x42cb5c: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x42cb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x42cb60: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x42cb60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x42cb64: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x42CB64u;
    {
        const bool branch_taken_0x42cb64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42CB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CB64u;
            // 0x42cb68: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cb64) {
            ctx->pc = 0x42CB1Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_42cb1c;
        }
    }
    ctx->pc = 0x42CB6Cu;
    // 0x42cb6c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x42cb6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cb70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x42cb70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x42cb74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42cb74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42cb78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42cb78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42cb7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42cb7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42cb80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42cb80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42cb84: 0x3e00008  jr          $ra
    ctx->pc = 0x42CB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CB84u;
            // 0x42cb88: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42CB8Cu;
    // 0x42cb8c: 0x0  nop
    ctx->pc = 0x42cb8cu;
    // NOP
label_42cb90:
    // 0x42cb90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42cb94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42cb98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42cb98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x42cb9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42cb9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x42cba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x42cba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cba4: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x42CBA4u;
    {
        const bool branch_taken_0x42cba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CBA4u;
            // 0x42cba8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cba4) {
            ctx->pc = 0x42CC44u;
            goto label_42cc44;
        }
    }
    ctx->pc = 0x42CBACu;
    // 0x42cbac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42cbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x42cbb0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42cbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42cbb4: 0x2463c480  addiu       $v1, $v1, -0x3B80
    ctx->pc = 0x42cbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952064));
    // 0x42cbb8: 0x2442c4b8  addiu       $v0, $v0, -0x3B48
    ctx->pc = 0x42cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952120));
    // 0x42cbbc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x42cbc0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x42CBC0u;
    {
        const bool branch_taken_0x42cbc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x42CBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CBC0u;
            // 0x42cbc4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42cbc0) {
            ctx->pc = 0x42CC2Cu;
            goto label_42cc2c;
        }
    }
    ctx->pc = 0x42CBC8u;
    // 0x42cbc8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x42cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x42cbcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x42cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x42cbd0: 0x2463c430  addiu       $v1, $v1, -0x3BD0
    ctx->pc = 0x42cbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951984));
    // 0x42cbd4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x42cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x42cbd8: 0x2442c468  addiu       $v0, $v0, -0x3B98
    ctx->pc = 0x42cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952040));
    // 0x42cbdc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x42cbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x42cbe0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x42cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
    // 0x42cbe4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x42cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x42cbe8: 0xc0407c0  jal         func_101F00
    ctx->pc = 0x42CBE8u;
    SET_GPR_U32(ctx, 31, 0x42CBF0u);
    ctx->pc = 0x42CBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CBE8u;
            // 0x42cbec: 0x24a5c680  addiu       $a1, $a1, -0x3980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CBF0u; }
        if (ctx->pc != 0x42CBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CBF0u; }
        if (ctx->pc != 0x42CBF0u) { return; }
    }
    ctx->pc = 0x42CBF0u;
label_42cbf0:
    // 0x42cbf0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x42cbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
    // 0x42cbf4: 0xc0a8c98  jal         func_2A3260
    ctx->pc = 0x42CBF4u;
    SET_GPR_U32(ctx, 31, 0x42CBFCu);
    ctx->pc = 0x42CBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CBF4u;
            // 0x42cbf8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CBFCu; }
        if (ctx->pc != 0x42CBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CBFCu; }
        if (ctx->pc != 0x42CBFCu) { return; }
    }
    ctx->pc = 0x42CBFCu;
label_42cbfc:
    // 0x42cbfc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x42cbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
    // 0x42cc00: 0xc10b330  jal         func_42CCC0
    ctx->pc = 0x42CC00u;
    SET_GPR_U32(ctx, 31, 0x42CC08u);
    ctx->pc = 0x42CC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CC00u;
            // 0x42cc04: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42CCC0u;
    if (runtime->hasFunction(0x42CCC0u)) {
        auto targetFn = runtime->lookupFunction(0x42CCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC08u; }
        if (ctx->pc != 0x42CC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042CCC0_0x42ccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC08u; }
        if (ctx->pc != 0x42CC08u) { return; }
    }
    ctx->pc = 0x42CC08u;
label_42cc08:
    // 0x42cc08: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x42cc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
    // 0x42cc0c: 0xc10b330  jal         func_42CCC0
    ctx->pc = 0x42CC0Cu;
    SET_GPR_U32(ctx, 31, 0x42CC14u);
    ctx->pc = 0x42CC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CC0Cu;
            // 0x42cc10: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42CCC0u;
    if (runtime->hasFunction(0x42CCC0u)) {
        auto targetFn = runtime->lookupFunction(0x42CCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC14u; }
        if (ctx->pc != 0x42CC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042CCC0_0x42ccc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC14u; }
        if (ctx->pc != 0x42CC14u) { return; }
    }
    ctx->pc = 0x42CC14u;
label_42cc14:
    // 0x42cc14: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x42cc14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
    // 0x42cc18: 0xc10b318  jal         func_42CC60
    ctx->pc = 0x42CC18u;
    SET_GPR_U32(ctx, 31, 0x42CC20u);
    ctx->pc = 0x42CC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CC18u;
            // 0x42cc1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x42CC60u;
    if (runtime->hasFunction(0x42CC60u)) {
        auto targetFn = runtime->lookupFunction(0x42CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC20u; }
        if (ctx->pc != 0x42CC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0042CC60_0x42cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC20u; }
        if (ctx->pc != 0x42CC20u) { return; }
    }
    ctx->pc = 0x42CC20u;
label_42cc20:
    // 0x42cc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42cc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42cc24: 0xc0ae1c0  jal         func_2B8700
    ctx->pc = 0x42CC24u;
    SET_GPR_U32(ctx, 31, 0x42CC2Cu);
    ctx->pc = 0x42CC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CC24u;
            // 0x42cc28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC2Cu; }
        if (ctx->pc != 0x42CC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC2Cu; }
        if (ctx->pc != 0x42CC2Cu) { return; }
    }
    ctx->pc = 0x42CC2Cu;
label_42cc2c:
    // 0x42cc2c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x42cc2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x42cc30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x42cc30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x42cc34: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42CC34u;
    {
        const bool branch_taken_0x42cc34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x42cc34) {
            ctx->pc = 0x42CC38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42CC34u;
            // 0x42cc38: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42CC48u;
            goto label_42cc48;
        }
    }
    ctx->pc = 0x42CC3Cu;
    // 0x42cc3c: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x42CC3Cu;
    SET_GPR_U32(ctx, 31, 0x42CC44u);
    ctx->pc = 0x42CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42CC3Cu;
            // 0x42cc40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC44u; }
        if (ctx->pc != 0x42CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42CC44u; }
        if (ctx->pc != 0x42CC44u) { return; }
    }
    ctx->pc = 0x42CC44u;
label_42cc44:
    // 0x42cc44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x42cc44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42cc48:
    // 0x42cc48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42cc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42cc4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42cc4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x42cc50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42cc50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42cc54: 0x3e00008  jr          $ra
    ctx->pc = 0x42CC54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42CC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42CC54u;
            // 0x42cc58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42CC5Cu;
    // 0x42cc5c: 0x0  nop
    ctx->pc = 0x42cc5cu;
    // NOP
}
