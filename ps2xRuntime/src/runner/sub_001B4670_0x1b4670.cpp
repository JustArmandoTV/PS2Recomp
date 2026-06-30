#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B4670
// Address: 0x1b4670 - 0x1b46f8
void sub_001B4670_0x1b4670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4670_0x1b4670");
#endif

    switch (ctx->pc) {
        case 0x1b468cu: goto label_1b468c;
        case 0x1b4694u: goto label_1b4694;
        case 0x1b46bcu: goto label_1b46bc;
        case 0x1b46c4u: goto label_1b46c4;
        case 0x1b46d0u: goto label_1b46d0;
        default: break;
    }

    ctx->pc = 0x1b4670u;

    // 0x1b4670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b4670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b4674: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b4674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b4678: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b4678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b467c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b467cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b4680: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1b4680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1b4684: 0xc06e140  jal         func_1B8500
    ctx->pc = 0x1B4684u;
    SET_GPR_U32(ctx, 31, 0x1B468Cu);
    ctx->pc = 0x1B4688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B4684u;
            // 0x1b4688: 0xe7b40018  swc1        $f20, 0x18($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8500u;
    if (runtime->hasFunction(0x1B8500u)) {
        auto targetFn = runtime->lookupFunction(0x1B8500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B468Cu; }
        if (ctx->pc != 0x1B468Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8500_0x1b8500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B468Cu; }
        if (ctx->pc != 0x1B468Cu) { return; }
    }
    ctx->pc = 0x1B468Cu;
label_1b468c:
    // 0x1b468c: 0xc06e16a  jal         func_1B85A8
    ctx->pc = 0x1B468Cu;
    SET_GPR_U32(ctx, 31, 0x1B4694u);
    ctx->pc = 0x1B4690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B468Cu;
            // 0x1b4690: 0xfe0237f8  sd          $v0, 0x37F8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 14328), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B85A8u;
    if (runtime->hasFunction(0x1B85A8u)) {
        auto targetFn = runtime->lookupFunction(0x1B85A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4694u; }
        if (ctx->pc != 0x1B4694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B85A8_0x1b85a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B4694u; }
        if (ctx->pc != 0x1B4694u) { return; }
    }
    ctx->pc = 0x1B4694u;
label_1b4694:
    // 0x1b4694: 0x8e060968  lw          $a2, 0x968($s0)
    ctx->pc = 0x1b4694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
    // 0x1b4698: 0xde0437f8  ld          $a0, 0x37F8($s0)
    ctx->pc = 0x1b4698u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 14328)));
    // 0x1b469c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1b469cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46a0: 0xde0337f0  ld          $v1, 0x37F0($s0)
    ctx->pc = 0x1b46a0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 14320)));
    // 0x1b46a4: 0xae063808  sw          $a2, 0x3808($s0)
    ctx->pc = 0x1b46a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 14344), GPR_U32(ctx, 6));
    // 0x1b46a8: 0x83882f  dsubu       $s1, $a0, $v1
    ctx->pc = 0x1b46a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x1b46ac: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x1B46ACu;
    {
        const bool branch_taken_0x1b46ac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B46B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46ACu;
            // 0x1b46b0: 0xfe023800  sd          $v0, 0x3800($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 14336), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b46ac) {
            ctx->pc = 0x1B46E0u;
            goto label_1b46e0;
        }
    }
    ctx->pc = 0x1B46B4u;
    // 0x1b46b4: 0xc048ce6  jal         func_123398
    ctx->pc = 0x1B46B4u;
    SET_GPR_U32(ctx, 31, 0x1B46BCu);
    ctx->pc = 0x1B46B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46B4u;
            // 0x1b46b8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123398u;
    if (runtime->hasFunction(0x123398u)) {
        auto targetFn = runtime->lookupFunction(0x123398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46BCu; }
        if (ctx->pc != 0x1B46BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123398_0x123398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46BCu; }
        if (ctx->pc != 0x1B46BCu) { return; }
    }
    ctx->pc = 0x1B46BCu;
label_1b46bc:
    // 0x1b46bc: 0xc048d1e  jal         func_123478
    ctx->pc = 0x1B46BCu;
    SET_GPR_U32(ctx, 31, 0x1B46C4u);
    ctx->pc = 0x1B46C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46BCu;
            // 0x1b46c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123478u;
    if (runtime->hasFunction(0x123478u)) {
        auto targetFn = runtime->lookupFunction(0x123478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46C4u; }
        if (ctx->pc != 0x1B46C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123478_0x123478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46C4u; }
        if (ctx->pc != 0x1B46C4u) { return; }
    }
    ctx->pc = 0x1B46C4u;
label_1b46c4:
    // 0x1b46c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b46c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b46c8: 0xc048d1e  jal         func_123478
    ctx->pc = 0x1B46C8u;
    SET_GPR_U32(ctx, 31, 0x1B46D0u);
    ctx->pc = 0x1B46CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46C8u;
            // 0x1b46cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x123478u;
    if (runtime->hasFunction(0x123478u)) {
        auto targetFn = runtime->lookupFunction(0x123478u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46D0u; }
        if (ctx->pc != 0x1B46D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123478_0x123478(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B46D0u; }
        if (ctx->pc != 0x1B46D0u) { return; }
    }
    ctx->pc = 0x1B46D0u;
label_1b46d0:
    // 0x1b46d0: 0x0  nop
    ctx->pc = 0x1b46d0u;
    // NOP
    // 0x1b46d4: 0x0  nop
    ctx->pc = 0x1b46d4u;
    // NOP
    // 0x1b46d8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1b46d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x1b46dc: 0xe614380c  swc1        $f20, 0x380C($s0)
    ctx->pc = 0x1b46dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 14348), bits); }
label_1b46e0:
    // 0x1b46e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b46e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b46e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b46e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b46e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1b46e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b46ec: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x1b46ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b46f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B46F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B46F0u;
            // 0x1b46f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B46F8u;
}
