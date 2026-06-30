#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D130
// Address: 0x16d130 - 0x16d1e8
void sub_0016D130_0x16d130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D130_0x16d130");
#endif

    switch (ctx->pc) {
        case 0x16d18cu: goto label_16d18c;
        case 0x16d1b4u: goto label_16d1b4;
        case 0x16d1c8u: goto label_16d1c8;
        case 0x16d1d8u: goto label_16d1d8;
        default: break;
    }

    ctx->pc = 0x16d130u;

    // 0x16d130: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16d130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16d134: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d134u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d138: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16d138u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d13c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16d13cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d140: 0x2442ca68  addiu       $v0, $v0, -0x3598
    ctx->pc = 0x16d140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953576));
    // 0x16d144: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16d144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d148: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16d148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d14c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x16d14cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d150: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16d150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d154: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D154u;
    {
        const bool branch_taken_0x16d154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D154u;
            // 0x16d158: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d154) {
            ctx->pc = 0x16D178u;
            goto label_16d178;
        }
    }
    ctx->pc = 0x16D15Cu;
    // 0x16d15c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d160: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x16d160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x16d164: 0x2442b360  addiu       $v0, $v0, -0x4CA0
    ctx->pc = 0x16d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947680));
    // 0x16d168: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x16d168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x16d16c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16D16Cu;
    {
        const bool branch_taken_0x16d16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D16Cu;
            // 0x16d170: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d16c) {
            ctx->pc = 0x16D18Cu;
            goto label_16d18c;
        }
    }
    ctx->pc = 0x16D174u;
    // 0x16d174: 0x0  nop
    ctx->pc = 0x16d174u;
    // NOP
label_16d178:
    // 0x16d178: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16d178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16d17c: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x16d17cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16d180: 0x24843ec8  addiu       $a0, $a0, 0x3EC8
    ctx->pc = 0x16d180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16072));
    // 0x16d184: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x16D184u;
    SET_GPR_U32(ctx, 31, 0x16D18Cu);
    ctx->pc = 0x16D188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D184u;
            // 0x16d188: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D18Cu; }
        if (ctx->pc != 0x16D18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D18Cu; }
        if (ctx->pc != 0x16D18Cu) { return; }
    }
    ctx->pc = 0x16D18Cu;
label_16d18c:
    // 0x16d18c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x16d18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x16d190: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16d190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16d194: 0x8ca32368  lw          $v1, 0x2368($a1)
    ctx->pc = 0x16d194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9064)));
    // 0x16d198: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d19c: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x16d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x16d1a0: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16d1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16d1a4: 0x2610aacc  addiu       $s0, $s0, -0x5534
    ctx->pc = 0x16d1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945484));
    // 0x16d1a8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x16d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x16d1ac: 0xc043058  jal         func_10C160
    ctx->pc = 0x16D1ACu;
    SET_GPR_U32(ctx, 31, 0x16D1B4u);
    ctx->pc = 0x16D1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1ACu;
            // 0x16d1b0: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C160u;
    if (runtime->hasFunction(0x10C160u)) {
        auto targetFn = runtime->lookupFunction(0x10C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1B4u; }
        if (ctx->pc != 0x16D1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C160_0x10c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1B4u; }
        if (ctx->pc != 0x16D1B4u) { return; }
    }
    ctx->pc = 0x16D1B4u;
label_16d1b4:
    // 0x16d1b4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16d1b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d1b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d1c0: 0xc043528  jal         func_10D4A0
    ctx->pc = 0x16D1C0u;
    SET_GPR_U32(ctx, 31, 0x16D1C8u);
    ctx->pc = 0x16D1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1C0u;
            // 0x16d1c4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4A0u;
    if (runtime->hasFunction(0x10D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1C8u; }
        if (ctx->pc != 0x16D1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4A0_0x10d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1C8u; }
        if (ctx->pc != 0x16D1C8u) { return; }
    }
    ctx->pc = 0x16D1C8u;
label_16d1c8:
    // 0x16d1c8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d1cc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d1d0: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D1D0u;
    SET_GPR_U32(ctx, 31, 0x16D1D8u);
    ctx->pc = 0x16D1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1D0u;
            // 0x16d1d4: 0x8c45aa48  lw          $a1, -0x55B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945352)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1D8u; }
        if (ctx->pc != 0x16D1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D1D8u; }
        if (ctx->pc != 0x16D1D8u) { return; }
    }
    ctx->pc = 0x16D1D8u;
label_16d1d8:
    // 0x16d1d8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16d1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d1dc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16d1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x16D1E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1E0u;
            // 0x16d1e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D1E8u;
}
