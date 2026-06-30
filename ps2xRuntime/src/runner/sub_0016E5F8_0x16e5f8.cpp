#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E5F8
// Address: 0x16e5f8 - 0x16e670
void sub_0016E5F8_0x16e5f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E5F8_0x16e5f8");
#endif

    switch (ctx->pc) {
        case 0x16e65cu: goto label_16e65c;
        case 0x16e664u: goto label_16e664;
        default: break;
    }

    ctx->pc = 0x16e5f8u;

    // 0x16e5f8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16e5fc: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x16e5fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x16e600: 0x8c432370  lw          $v1, 0x2370($v0)
    ctx->pc = 0x16e600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9072)));
    // 0x16e604: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x16e604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
    // 0x16e608: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x16e608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e60c: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x16e60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x16e610: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x16e610u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x16e614: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16e614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16e618: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16e618u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e61c: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x16e61cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x16e620: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x16e620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x16e624: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x16e624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x16e628: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x16e628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x16e62c: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x16e62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x16e630: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x16e630u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x16e634: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x16e634u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x16e638: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x16e638u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x16e63c: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x16e63cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x16e640: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x16e640u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x16e644: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x16e644u;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x16e648: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x16e648u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16e64c: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E64Cu;
    {
        const bool branch_taken_0x16e64c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16E650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E64Cu;
            // 0x16e650: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e64c) {
            ctx->pc = 0x16E664u;
            goto label_16e664;
        }
    }
    ctx->pc = 0x16E654u;
    // 0x16e654: 0xc04c136  jal         func_1304D8
    ctx->pc = 0x16E654u;
    SET_GPR_U32(ctx, 31, 0x16E65Cu);
    ctx->pc = 0x1304D8u;
    if (runtime->hasFunction(0x1304D8u)) {
        auto targetFn = runtime->lookupFunction(0x1304D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E65Cu; }
        if (ctx->pc != 0x16E65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001304D8_0x1304d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E65Cu; }
        if (ctx->pc != 0x16E65Cu) { return; }
    }
    ctx->pc = 0x16E65Cu;
label_16e65c:
    // 0x16e65c: 0xc043c12  jal         func_10F048
    ctx->pc = 0x16E65Cu;
    SET_GPR_U32(ctx, 31, 0x16E664u);
    ctx->pc = 0x16E660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E65Cu;
            // 0x16e660: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E664u; }
        if (ctx->pc != 0x16E664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E664u; }
        if (ctx->pc != 0x16E664u) { return; }
    }
    ctx->pc = 0x16E664u;
label_16e664:
    // 0x16e664: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16e664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16e668: 0x3e00008  jr          $ra
    ctx->pc = 0x16E668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E668u;
            // 0x16e66c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E670u;
}
