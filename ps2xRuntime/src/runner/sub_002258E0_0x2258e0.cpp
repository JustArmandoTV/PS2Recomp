#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002258E0
// Address: 0x2258e0 - 0x225a20
void sub_002258E0_0x2258e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002258E0_0x2258e0");
#endif

    switch (ctx->pc) {
        case 0x225948u: goto label_225948;
        case 0x225978u: goto label_225978;
        case 0x2259a8u: goto label_2259a8;
        case 0x2259dcu: goto label_2259dc;
        case 0x225a08u: goto label_225a08;
        default: break;
    }

    ctx->pc = 0x2258e0u;

    // 0x2258e0: 0xc48100dc  lwc1        $f1, 0xDC($a0)
    ctx->pc = 0x2258e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2258e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2258e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2258e8: 0x0  nop
    ctx->pc = 0x2258e8u;
    // NOP
    // 0x2258ec: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2258ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2258f0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2258F0u;
    {
        const bool branch_taken_0x2258f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2258f0) {
            ctx->pc = 0x2258F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2258F0u;
            // 0x2258f4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x225900u;
            goto label_225900;
        }
    }
    ctx->pc = 0x2258F8u;
    // 0x2258f8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2258F8u;
    {
        const bool branch_taken_0x2258f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258f8) {
            ctx->pc = 0x22590Cu;
            goto label_22590c;
        }
    }
    ctx->pc = 0x225900u;
label_225900:
    // 0x225900: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225900u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x225904: 0x0  nop
    ctx->pc = 0x225904u;
    // NOP
    // 0x225908: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x225908u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_22590c:
    // 0x22590c: 0x3e00008  jr          $ra
    ctx->pc = 0x22590Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225914u;
    // 0x225914: 0x0  nop
    ctx->pc = 0x225914u;
    // NOP
    // 0x225918: 0x0  nop
    ctx->pc = 0x225918u;
    // NOP
    // 0x22591c: 0x0  nop
    ctx->pc = 0x22591cu;
    // NOP
    // 0x225920: 0x3e00008  jr          $ra
    ctx->pc = 0x225920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225920u;
            // 0x225924: 0xe48c00dc  swc1        $f12, 0xDC($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 220), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225928u;
    // 0x225928: 0x0  nop
    ctx->pc = 0x225928u;
    // NOP
    // 0x22592c: 0x0  nop
    ctx->pc = 0x22592cu;
    // NOP
    // 0x225930: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225934: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x225934u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225938: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x225938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22593c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225940: 0xc0a4508  jal         func_291420
    ctx->pc = 0x225940u;
    SET_GPR_U32(ctx, 31, 0x225948u);
    ctx->pc = 0x225944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225940u;
            // 0x225944: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291420u;
    if (runtime->hasFunction(0x291420u)) {
        auto targetFn = runtime->lookupFunction(0x291420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225948u; }
        if (ctx->pc != 0x225948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291420_0x291420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225948u; }
        if (ctx->pc != 0x225948u) { return; }
    }
    ctx->pc = 0x225948u;
label_225948:
    // 0x225948: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22594c: 0x3e00008  jr          $ra
    ctx->pc = 0x22594Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22594Cu;
            // 0x225950: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225954u;
    // 0x225954: 0x0  nop
    ctx->pc = 0x225954u;
    // NOP
    // 0x225958: 0x0  nop
    ctx->pc = 0x225958u;
    // NOP
    // 0x22595c: 0x0  nop
    ctx->pc = 0x22595cu;
    // NOP
    // 0x225960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225964: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x225964u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225968: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x225968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22596c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22596cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225970: 0xc0a44b4  jal         func_2912D0
    ctx->pc = 0x225970u;
    SET_GPR_U32(ctx, 31, 0x225978u);
    ctx->pc = 0x225974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225970u;
            // 0x225974: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2912D0u;
    if (runtime->hasFunction(0x2912D0u)) {
        auto targetFn = runtime->lookupFunction(0x2912D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225978u; }
        if (ctx->pc != 0x225978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002912D0_0x2912d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225978u; }
        if (ctx->pc != 0x225978u) { return; }
    }
    ctx->pc = 0x225978u;
label_225978:
    // 0x225978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22597c: 0x3e00008  jr          $ra
    ctx->pc = 0x22597Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22597Cu;
            // 0x225980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225984u;
    // 0x225984: 0x0  nop
    ctx->pc = 0x225984u;
    // NOP
    // 0x225988: 0x0  nop
    ctx->pc = 0x225988u;
    // NOP
    // 0x22598c: 0x0  nop
    ctx->pc = 0x22598cu;
    // NOP
    // 0x225990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225994: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x225994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225998: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x225998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22599c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22599cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2259a0: 0xc0a44fc  jal         func_2913F0
    ctx->pc = 0x2259A0u;
    SET_GPR_U32(ctx, 31, 0x2259A8u);
    ctx->pc = 0x2259A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2259A0u;
            // 0x2259a4: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2913F0u;
    if (runtime->hasFunction(0x2913F0u)) {
        auto targetFn = runtime->lookupFunction(0x2913F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259A8u; }
        if (ctx->pc != 0x2259A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002913F0_0x2913f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259A8u; }
        if (ctx->pc != 0x2259A8u) { return; }
    }
    ctx->pc = 0x2259A8u;
label_2259a8:
    // 0x2259a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2259a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2259ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2259ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2259B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2259ACu;
            // 0x2259b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2259B4u;
    // 0x2259b4: 0x0  nop
    ctx->pc = 0x2259b4u;
    // NOP
    // 0x2259b8: 0x0  nop
    ctx->pc = 0x2259b8u;
    // NOP
    // 0x2259bc: 0x0  nop
    ctx->pc = 0x2259bcu;
    // NOP
    // 0x2259c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2259c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2259c4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2259c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259c8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2259c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2259ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2259d0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2259d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259d4: 0xc0a43dc  jal         func_290F70
    ctx->pc = 0x2259D4u;
    SET_GPR_U32(ctx, 31, 0x2259DCu);
    ctx->pc = 0x2259D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2259D4u;
            // 0x2259d8: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290F70u;
    if (runtime->hasFunction(0x290F70u)) {
        auto targetFn = runtime->lookupFunction(0x290F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259DCu; }
        if (ctx->pc != 0x2259DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290F70_0x290f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2259DCu; }
        if (ctx->pc != 0x2259DCu) { return; }
    }
    ctx->pc = 0x2259DCu;
label_2259dc:
    // 0x2259dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2259dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2259e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2259E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2259E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2259E0u;
            // 0x2259e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2259E8u;
    // 0x2259e8: 0x0  nop
    ctx->pc = 0x2259e8u;
    // NOP
    // 0x2259ec: 0x0  nop
    ctx->pc = 0x2259ecu;
    // NOP
    // 0x2259f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2259f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2259f4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2259f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259f8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2259f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2259fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2259fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225a00: 0xc0a443c  jal         func_2910F0
    ctx->pc = 0x225A00u;
    SET_GPR_U32(ctx, 31, 0x225A08u);
    ctx->pc = 0x225A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x225A00u;
            // 0x225a04: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2910F0u;
    if (runtime->hasFunction(0x2910F0u)) {
        auto targetFn = runtime->lookupFunction(0x2910F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A08u; }
        if (ctx->pc != 0x225A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002910F0_0x2910f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x225A08u; }
        if (ctx->pc != 0x225A08u) { return; }
    }
    ctx->pc = 0x225A08u;
label_225a08:
    // 0x225a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x225A0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x225A0Cu;
            // 0x225a10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x225A14u;
    // 0x225a14: 0x0  nop
    ctx->pc = 0x225a14u;
    // NOP
    // 0x225a18: 0x0  nop
    ctx->pc = 0x225a18u;
    // NOP
    // 0x225a1c: 0x0  nop
    ctx->pc = 0x225a1cu;
    // NOP
}
