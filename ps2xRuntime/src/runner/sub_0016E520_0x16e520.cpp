#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016E520
// Address: 0x16e520 - 0x16e5f8
void sub_0016E520_0x16e520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E520_0x16e520");
#endif

    switch (ctx->pc) {
        case 0x16e564u: goto label_16e564;
        case 0x16e5e4u: goto label_16e5e4;
        case 0x16e5ecu: goto label_16e5ec;
        default: break;
    }

    ctx->pc = 0x16e520u;

    // 0x16e520: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16e524: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16e524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e528: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x16e528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x16e52c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E52Cu;
            // 0x16e530: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E534u;
    // 0x16e534: 0x0  nop
    ctx->pc = 0x16e534u;
    // NOP
    // 0x16e538: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16e538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16e53c: 0x3e00008  jr          $ra
    ctx->pc = 0x16E53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E53Cu;
            // 0x16e540: 0x8c622370  lw          $v0, 0x2370($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9072)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E544u;
    // 0x16e544: 0x0  nop
    ctx->pc = 0x16e544u;
    // NOP
    // 0x16e548: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e54c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16e550: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16e554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e558: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e55c: 0xc05ff96  jal         func_17FE58
    ctx->pc = 0x16E55Cu;
    SET_GPR_U32(ctx, 31, 0x16E564u);
    ctx->pc = 0x16E560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E55Cu;
            // 0x16e560: 0xac502370  sw          $s0, 0x2370($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 9072), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FE58u;
    if (runtime->hasFunction(0x17FE58u)) {
        auto targetFn = runtime->lookupFunction(0x17FE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E564u; }
        if (ctx->pc != 0x16E564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FE58_0x17fe58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E564u; }
        if (ctx->pc != 0x16E564u) { return; }
    }
    ctx->pc = 0x16E564u;
label_16e564:
    // 0x16e564: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e564u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e56c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e56cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e570: 0x805f4c4  j           func_17D310
    ctx->pc = 0x16E570u;
    ctx->pc = 0x16E574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E570u;
            // 0x16e574: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D310u;
    {
        auto targetFn = runtime->lookupFunction(0x17D310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16E578u;
    // 0x16e578: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16e57c: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x16e57cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x16e580: 0x8c4c2370  lw          $t4, 0x2370($v0)
    ctx->pc = 0x16e580u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9072)));
    // 0x16e584: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16e584u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e588: 0x240d0002  addiu       $t5, $zero, 0x2
    ctx->pc = 0x16e588u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16e58c: 0xffa500b8  sd          $a1, 0xB8($sp)
    ctx->pc = 0x16e58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 5));
    // 0x16e590: 0xffa600c0  sd          $a2, 0xC0($sp)
    ctx->pc = 0x16e590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 6));
    // 0x16e594: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x16e594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x16e598: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x16e598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x16e59c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16e59cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5a0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16e5a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16e5a4: 0xffa700c8  sd          $a3, 0xC8($sp)
    ctx->pc = 0x16e5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 7));
    // 0x16e5a8: 0xffa800d0  sd          $t0, 0xD0($sp)
    ctx->pc = 0x16e5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 8));
    // 0x16e5ac: 0xffa900d8  sd          $t1, 0xD8($sp)
    ctx->pc = 0x16e5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 9));
    // 0x16e5b0: 0xffaa00e0  sd          $t2, 0xE0($sp)
    ctx->pc = 0x16e5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 10));
    // 0x16e5b4: 0xffab00e8  sd          $t3, 0xE8($sp)
    ctx->pc = 0x16e5b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 11));
    // 0x16e5b8: 0xe7ac0098  swc1        $f12, 0x98($sp)
    ctx->pc = 0x16e5b8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x16e5bc: 0xe7ad009c  swc1        $f13, 0x9C($sp)
    ctx->pc = 0x16e5bcu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x16e5c0: 0xe7ae00a0  swc1        $f14, 0xA0($sp)
    ctx->pc = 0x16e5c0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x16e5c4: 0xe7af00a4  swc1        $f15, 0xA4($sp)
    ctx->pc = 0x16e5c4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x16e5c8: 0xe7b000a8  swc1        $f16, 0xA8($sp)
    ctx->pc = 0x16e5c8u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x16e5cc: 0xe7b100ac  swc1        $f17, 0xAC($sp)
    ctx->pc = 0x16e5ccu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x16e5d0: 0xe7b200b0  swc1        $f18, 0xB0($sp)
    ctx->pc = 0x16e5d0u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x16e5d4: 0x118d0005  beq         $t4, $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x16E5D4u;
    {
        const bool branch_taken_0x16e5d4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 13));
        ctx->pc = 0x16E5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E5D4u;
            // 0x16e5d8: 0xe7b300b4  swc1        $f19, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5d4) {
            ctx->pc = 0x16E5ECu;
            goto label_16e5ec;
        }
    }
    ctx->pc = 0x16E5DCu;
    // 0x16e5dc: 0xc04c136  jal         func_1304D8
    ctx->pc = 0x16E5DCu;
    SET_GPR_U32(ctx, 31, 0x16E5E4u);
    ctx->pc = 0x1304D8u;
    if (runtime->hasFunction(0x1304D8u)) {
        auto targetFn = runtime->lookupFunction(0x1304D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5E4u; }
        if (ctx->pc != 0x16E5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001304D8_0x1304d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5E4u; }
        if (ctx->pc != 0x16E5E4u) { return; }
    }
    ctx->pc = 0x16E5E4u;
label_16e5e4:
    // 0x16e5e4: 0xc043c12  jal         func_10F048
    ctx->pc = 0x16E5E4u;
    SET_GPR_U32(ctx, 31, 0x16E5ECu);
    ctx->pc = 0x16E5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E5E4u;
            // 0x16e5e8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F048u;
    if (runtime->hasFunction(0x10F048u)) {
        auto targetFn = runtime->lookupFunction(0x10F048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5ECu; }
        if (ctx->pc != 0x16E5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010F048_0x10f048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E5ECu; }
        if (ctx->pc != 0x16E5ECu) { return; }
    }
    ctx->pc = 0x16E5ECu;
label_16e5ec:
    // 0x16e5ec: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x16e5ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16e5f0: 0x3e00008  jr          $ra
    ctx->pc = 0x16E5F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E5F0u;
            // 0x16e5f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16E5F8u;
}
