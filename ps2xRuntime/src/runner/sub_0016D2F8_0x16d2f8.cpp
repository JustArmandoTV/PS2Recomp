#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D2F8
// Address: 0x16d2f8 - 0x16d390
void sub_0016D2F8_0x16d2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D2F8_0x16d2f8");
#endif

    switch (ctx->pc) {
        case 0x16d34cu: goto label_16d34c;
        case 0x16d360u: goto label_16d360;
        case 0x16d370u: goto label_16d370;
        case 0x16d37cu: goto label_16d37c;
        default: break;
    }

    ctx->pc = 0x16d2f8u;

    // 0x16d2f8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d2fc: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d2fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d300: 0x8c472368  lw          $a3, 0x2368($v0)
    ctx->pc = 0x16d300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9064)));
    // 0x16d304: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x16d304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x16d308: 0x3c050017  lui         $a1, 0x17
    ctx->pc = 0x16d308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)23 << 16));
    // 0x16d30c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x16d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x16d310: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x16d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x16d314: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x16d314u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x16d318: 0x2463e360  addiu       $v1, $v1, -0x1CA0
    ctx->pc = 0x16d318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959968));
    // 0x16d31c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16d31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d320: 0x24062000  addiu       $a2, $zero, 0x2000
    ctx->pc = 0x16d320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x16d324: 0x24a5ccf8  addiu       $a1, $a1, -0x3308
    ctx->pc = 0x16d324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954232));
    // 0x16d328: 0x244203f0  addiu       $v0, $v0, 0x3F0
    ctx->pc = 0x16d328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1008));
    // 0x16d32c: 0x2610aadc  addiu       $s0, $s0, -0x5524
    ctx->pc = 0x16d32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945500));
    // 0x16d330: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x16d330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x16d334: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x16d334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x16d338: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x16d338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x16d33c: 0xafa6000c  sw          $a2, 0xC($sp)
    ctx->pc = 0x16d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 6));
    // 0x16d340: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x16d340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
    // 0x16d344: 0xc043058  jal         func_10C160
    ctx->pc = 0x16D344u;
    SET_GPR_U32(ctx, 31, 0x16D34Cu);
    ctx->pc = 0x16D348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D344u;
            // 0x16d348: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C160u;
    if (runtime->hasFunction(0x10C160u)) {
        auto targetFn = runtime->lookupFunction(0x10C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D34Cu; }
        if (ctx->pc != 0x16D34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C160_0x10c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D34Cu; }
        if (ctx->pc != 0x16D34Cu) { return; }
    }
    ctx->pc = 0x16D34Cu;
label_16d34c:
    // 0x16d34c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x16d34cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x16d350: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x16d350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d354: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d358: 0xc043528  jal         func_10D4A0
    ctx->pc = 0x16D358u;
    SET_GPR_U32(ctx, 31, 0x16D360u);
    ctx->pc = 0x16D35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D358u;
            // 0x16d35c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D4A0u;
    if (runtime->hasFunction(0x10D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x10D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D360u; }
        if (ctx->pc != 0x16D360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D4A0_0x10d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D360u; }
        if (ctx->pc != 0x16D360u) { return; }
    }
    ctx->pc = 0x16D360u;
label_16d360:
    // 0x16d360: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d364: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x16d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x16d368: 0xc04307c  jal         func_10C1F0
    ctx->pc = 0x16D368u;
    SET_GPR_U32(ctx, 31, 0x16D370u);
    ctx->pc = 0x16D36Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D368u;
            // 0x16d36c: 0x8c45aa58  lw          $a1, -0x55A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C1F0u;
    if (runtime->hasFunction(0x10C1F0u)) {
        auto targetFn = runtime->lookupFunction(0x10C1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D370u; }
        if (ctx->pc != 0x16D370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C1F0_0x10c1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D370u; }
        if (ctx->pc != 0x16D370u) { return; }
    }
    ctx->pc = 0x16D370u;
label_16d370:
    // 0x16d370: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16d370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d374: 0xc05b40a  jal         func_16D028
    ctx->pc = 0x16D374u;
    SET_GPR_U32(ctx, 31, 0x16D37Cu);
    ctx->pc = 0x16D028u;
    if (runtime->hasFunction(0x16D028u)) {
        auto targetFn = runtime->lookupFunction(0x16D028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D37Cu; }
        if (ctx->pc != 0x16D37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D028_0x16d028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D37Cu; }
        if (ctx->pc != 0x16D37Cu) { return; }
    }
    ctx->pc = 0x16D37Cu;
label_16d37c:
    // 0x16d37c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x16d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16d380: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x16d380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16d384: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x16d384u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d388: 0x3e00008  jr          $ra
    ctx->pc = 0x16D388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D388u;
            // 0x16d38c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16D390u;
}
