#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D390
// Address: 0x16d390 - 0x16d460
void sub_0016D390_0x16d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D390_0x16d390");
#endif

    switch (ctx->pc) {
        case 0x16d3ecu: goto label_16d3ec;
        case 0x16d414u: goto label_16d414;
        case 0x16d428u: goto label_16d428;
        case 0x16d438u: goto label_16d438;
        case 0x16d444u: goto label_16d444;
        default: break;
    }

    ctx->pc = 0x16d390u;

    // 0x16d390: 0x3c020017  lui         $v0, 0x17
    ctx->pc = 0x16d390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
    // 0x16d394: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d394u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d398: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x16d398u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d39c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x16d39cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d3a0: 0x2442ce30  addiu       $v0, $v0, -0x31D0
    ctx->pc = 0x16d3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954544));
    // 0x16d3a4: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d3a8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16d3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d3ac: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x16d3acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d3b0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16d3b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d3b4: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D3B4u;
    {
        const bool branch_taken_0x16d3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3B4u;
            // 0x16d3b8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3b4) {
            ctx->pc = 0x16D3D8u;
            goto label_16d3d8;
        }
    }
    ctx->pc = 0x16D3BCu;
    // 0x16d3bc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d3c0: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x16d3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x16d3c4: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x16d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x16d3c8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x16d3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x16d3cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16D3CCu;
    {
        const bool branch_taken_0x16d3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3CCu;
            // 0x16d3d0: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3cc) {
            ctx->pc = 0x16D3ECu;
            goto label_16d3ec;
        }
    }
    ctx->pc = 0x16D3D4u;
    // 0x16d3d4: 0x0  nop
    ctx->pc = 0x16d3d4u;
    // NOP
label_16d3d8:
    // 0x16d3d8: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16d3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16d3dc: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x16d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16d3e0: 0x24843f08  addiu       $a0, $a0, 0x3F08
    ctx->pc = 0x16d3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16136));
    // 0x16d3e4: 0xc05b99c  jal         func_16E670
    ctx->pc = 0x16D3E4u;
    SET_GPR_U32(ctx, 31, 0x16D3ECu);
    ctx->pc = 0x16D3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3E4u;
            // 0x16d3e8: 0xafa7000c  sw          $a3, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16E670u;
    if (runtime->hasFunction(0x16E670u)) {
        auto targetFn = runtime->lookupFunction(0x16E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3ECu; }
        if (ctx->pc != 0x16D3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016E670_0x16e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D3ECu; }
        if (ctx->pc != 0x16D3ECu) { return; }
    }
    ctx->pc = 0x16D3ECu;
label_16d3ec:
    // 0x16d3ec: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x16d3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x16d3f0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16d3f4: 0x8ca32368  lw          $v1, 0x2368($a1)
    ctx->pc = 0x16d3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 9064)));
    // 0x16d3f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d3fc: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x16d3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x16d400: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16d400u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16d404: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x16d404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x16d408: 0x2610aae0  addiu       $s0, $s0, -0x5520
    ctx->pc = 0x16d408u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945504));
    // 0x16d40c: 0xc043058  jal         func_10C160
    ctx->pc = 0x16D40Cu;
    SET_GPR_U32(ctx, 31, 0x16D414u);
    ctx->pc = 0x16D410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D40Cu;
            // 0x16d410: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C160u;
    if (runtime->hasFunction(0x10C160u)) {
        auto targetFn = runtime->lookupFunction(0x10C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D414u; }
        if (ctx->pc != 0x16D414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C160_0x10c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D414u; }
        if (ctx->pc != 0x16D414u) { return; }
    }
    ctx->pc = 0x16D414u;
label_16d414:
    // 0x16d414: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16d414u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16d418: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d41c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d420: 0xc043528  jal         func_10D4A0
    ctx->pc = 0x16D420u;
    SET_GPR_U32(ctx, 31, 0x16D428u);
    ctx->pc = 0x16D424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D420u;
            // 0x16d424: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4A0u;
    if (runtime->hasFunction(0x10D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D428u; }
        if (ctx->pc != 0x16D428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4A0_0x10d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D428u; }
        if (ctx->pc != 0x16D428u) { return; }
    }
    ctx->pc = 0x16D428u;
label_16d428:
    // 0x16d428: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d42c: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d430: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D430u;
    SET_GPR_U32(ctx, 31, 0x16D438u);
    ctx->pc = 0x16D434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D430u;
            // 0x16d434: 0x8c45aa5c  lw          $a1, -0x55A4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945372)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D438u; }
        if (ctx->pc != 0x16D438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D438u; }
        if (ctx->pc != 0x16D438u) { return; }
    }
    ctx->pc = 0x16D438u;
label_16d438:
    // 0x16d438: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d43c: 0xc05b40a  jal         func_16D028
    ctx->pc = 0x16D43Cu;
    SET_GPR_U32(ctx, 31, 0x16D444u);
    ctx->pc = 0x16D028u;
    if (runtime->hasFunction(0x16D028u)) {
        auto targetFn = runtime->lookupFunction(0x16D028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D444u; }
        if (ctx->pc != 0x16D444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D028_0x16d028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D444u; }
        if (ctx->pc != 0x16D444u) { return; }
    }
    ctx->pc = 0x16D444u;
label_16d444:
    // 0x16d444: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d448: 0x2463aadc  addiu       $v1, $v1, -0x5524
    ctx->pc = 0x16d448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945500));
    // 0x16d44c: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16d44cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d450: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d454: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16d454u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d458: 0x3e00008  jr          $ra
    ctx->pc = 0x16D458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D458u;
            // 0x16d45c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D460u;
}
