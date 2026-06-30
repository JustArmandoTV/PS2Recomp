#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00305060
// Address: 0x305060 - 0x305130
void sub_00305060_0x305060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00305060_0x305060");
#endif

    switch (ctx->pc) {
        case 0x3050f0u: goto label_3050f0;
        case 0x305118u: goto label_305118;
        default: break;
    }

    ctx->pc = 0x305060u;

    // 0x305060: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x305060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x305064: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x305064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x305068: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x305068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30506c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30506cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x305070: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x305070u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x305074: 0x8c840d60  lw          $a0, 0xD60($a0)
    ctx->pc = 0x305074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
    // 0x305078: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x305078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30507c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x30507cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x305080: 0x50600026  beql        $v1, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x305080u;
    {
        const bool branch_taken_0x305080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x305080) {
            ctx->pc = 0x305084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x305080u;
            // 0x305084: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x30511Cu;
            goto label_30511c;
        }
    }
    ctx->pc = 0x305088u;
    // 0x305088: 0xc6010a94  lwc1        $f1, 0xA94($s0)
    ctx->pc = 0x305088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30508c: 0x26040a50  addiu       $a0, $s0, 0xA50
    ctx->pc = 0x30508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2640));
    // 0x305090: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x305090u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x305094: 0x0  nop
    ctx->pc = 0x305094u;
    // NOP
    // 0x305098: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x305098u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x30509c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x30509Cu;
    {
        const bool branch_taken_0x30509c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3050A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30509Cu;
            // 0x3050a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30509c) {
            ctx->pc = 0x3050A8u;
            goto label_3050a8;
        }
    }
    ctx->pc = 0x3050A4u;
    // 0x3050a4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3050a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3050a8:
    // 0x3050a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3050A8u;
    {
        const bool branch_taken_0x3050a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3050a8) {
            ctx->pc = 0x3050B8u;
            goto label_3050b8;
        }
    }
    ctx->pc = 0x3050B0u;
    // 0x3050b0: 0x90830050  lbu         $v1, 0x50($a0)
    ctx->pc = 0x3050b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x3050b4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3050b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3050b8:
    // 0x3050b8: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x3050B8u;
    {
        const bool branch_taken_0x3050b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3050b8) {
            ctx->pc = 0x305118u;
            goto label_305118;
        }
    }
    ctx->pc = 0x3050C0u;
    // 0x3050c0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3050c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3050c4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x3050c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3050c8: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3050c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x3050cc: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x3050ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
    // 0x3050d0: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3050D0u;
    {
        const bool branch_taken_0x3050d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3050d0) {
            ctx->pc = 0x305118u;
            goto label_305118;
        }
    }
    ctx->pc = 0x3050D8u;
    // 0x3050d8: 0x8e020a78  lw          $v0, 0xA78($s0)
    ctx->pc = 0x3050d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2680)));
    // 0x3050dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3050dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3050e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3050E0u;
    {
        const bool branch_taken_0x3050e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3050e0) {
            ctx->pc = 0x3050E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3050E0u;
            // 0x3050e4: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x305104u;
            goto label_305104;
        }
    }
    ctx->pc = 0x3050E8u;
    // 0x3050e8: 0xc0754b4  jal         func_1D52D0
    ctx->pc = 0x3050E8u;
    SET_GPR_U32(ctx, 31, 0x3050F0u);
    ctx->pc = 0x3050ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3050E8u;
            // 0x3050ec: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3050F0u; }
        if (ctx->pc != 0x3050F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3050F0u; }
        if (ctx->pc != 0x3050F0u) { return; }
    }
    ctx->pc = 0x3050F0u;
label_3050f0:
    // 0x3050f0: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x3050f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3050f4: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x3050f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x3050f8: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3050F8u;
    {
        const bool branch_taken_0x3050f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3050f8) {
            ctx->pc = 0x305118u;
            goto label_305118;
        }
    }
    ctx->pc = 0x305100u;
    // 0x305100: 0x8e040d70  lw          $a0, 0xD70($s0)
    ctx->pc = 0x305100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
label_305104:
    // 0x305104: 0x3c024170  lui         $v0, 0x4170
    ctx->pc = 0x305104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16752 << 16));
    // 0x305108: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x305108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30510c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x30510cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x305110: 0xc0bdf9c  jal         func_2F7E70
    ctx->pc = 0x305110u;
    SET_GPR_U32(ctx, 31, 0x305118u);
    ctx->pc = 0x305114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x305110u;
            // 0x305114: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F7E70u;
    if (runtime->hasFunction(0x2F7E70u)) {
        auto targetFn = runtime->lookupFunction(0x2F7E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305118u; }
        if (ctx->pc != 0x305118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F7E70_0x2f7e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x305118u; }
        if (ctx->pc != 0x305118u) { return; }
    }
    ctx->pc = 0x305118u;
label_305118:
    // 0x305118: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x305118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_30511c:
    // 0x30511c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30511cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x305120: 0x3e00008  jr          $ra
    ctx->pc = 0x305120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x305120u;
            // 0x305124: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x305128u;
    // 0x305128: 0x0  nop
    ctx->pc = 0x305128u;
    // NOP
    // 0x30512c: 0x0  nop
    ctx->pc = 0x30512cu;
    // NOP
}
