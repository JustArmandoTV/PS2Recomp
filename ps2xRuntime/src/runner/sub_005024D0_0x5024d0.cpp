#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005024D0
// Address: 0x5024d0 - 0x502530
void sub_005024D0_0x5024d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005024D0_0x5024d0");
#endif

    switch (ctx->pc) {
        case 0x5024e8u: goto label_5024e8;
        case 0x5024f4u: goto label_5024f4;
        default: break;
    }

    ctx->pc = 0x5024d0u;

    // 0x5024d0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x5024d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x5024d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5024d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x5024d8: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x5024d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x5024dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5024dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x5024e0: 0xc140150  jal         func_500540
    ctx->pc = 0x5024E0u;
    SET_GPR_U32(ctx, 31, 0x5024E8u);
    ctx->pc = 0x5024E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5024E0u;
            // 0x5024e4: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5024E8u; }
        if (ctx->pc != 0x5024E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5024E8u; }
        if (ctx->pc != 0x5024E8u) { return; }
    }
    ctx->pc = 0x5024E8u;
label_5024e8:
    // 0x5024e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5024e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5024ec: 0xc140150  jal         func_500540
    ctx->pc = 0x5024ECu;
    SET_GPR_U32(ctx, 31, 0x5024F4u);
    ctx->pc = 0x5024F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5024ECu;
            // 0x5024f0: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x500540u;
    if (runtime->hasFunction(0x500540u)) {
        auto targetFn = runtime->lookupFunction(0x500540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5024F4u; }
        if (ctx->pc != 0x5024F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00500540_0x500540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5024F4u; }
        if (ctx->pc != 0x5024F4u) { return; }
    }
    ctx->pc = 0x5024F4u;
label_5024f4:
    // 0x5024f4: 0xc7a102b4  lwc1        $f1, 0x2B4($sp)
    ctx->pc = 0x5024f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x5024f8: 0xc7a00124  lwc1        $f0, 0x124($sp)
    ctx->pc = 0x5024f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x5024fc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x5024fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x502500: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x502500u;
    {
        const bool branch_taken_0x502500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x502504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502500u;
            // 0x502504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x502500) {
            ctx->pc = 0x50250Cu;
            goto label_50250c;
        }
    }
    ctx->pc = 0x502508u;
    // 0x502508: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x502508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_50250c:
    // 0x50250c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x50250cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x502510: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x502510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x502514: 0x24632df0  addiu       $v1, $v1, 0x2DF0
    ctx->pc = 0x502514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11760));
    // 0x502518: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x502518u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x50251c: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x50251cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x502520: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x502520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x502524: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x502524u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x502528: 0x3e00008  jr          $ra
    ctx->pc = 0x502528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x50252Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x502528u;
            // 0x50252c: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x502530u;
}
