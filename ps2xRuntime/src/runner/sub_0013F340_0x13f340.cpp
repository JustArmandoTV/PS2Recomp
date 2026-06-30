#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F340
// Address: 0x13f340 - 0x13f420
void sub_0013F340_0x13f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F340_0x13f340");
#endif

    switch (ctx->pc) {
        case 0x13f374u: goto label_13f374;
        case 0x13f3c0u: goto label_13f3c0;
        default: break;
    }

    ctx->pc = 0x13f340u;

    // 0x13f340: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f344: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f348: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f34c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f354: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f358: 0x8c6356b0  lw          $v1, 0x56B0($v1)
    ctx->pc = 0x13f358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22192)));
    // 0x13f35c: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x13f35cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x13f360: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13F360u;
    {
        const bool branch_taken_0x13f360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F360u;
            // 0x13f364: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f360) {
            ctx->pc = 0x13F38Cu;
            goto label_13f38c;
        }
    }
    ctx->pc = 0x13F368u;
    // 0x13f368: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f36c: 0xc056354  jal         func_158D50
    ctx->pc = 0x13F36Cu;
    SET_GPR_U32(ctx, 31, 0x13F374u);
    ctx->pc = 0x13F370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13F36Cu;
            // 0x13f370: 0x8c4456b4  lw          $a0, 0x56B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22196)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158D50u;
    if (runtime->hasFunction(0x158D50u)) {
        auto targetFn = runtime->lookupFunction(0x158D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F374u; }
        if (ctx->pc != 0x13F374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158D50_0x158d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F374u; }
        if (ctx->pc != 0x13F374u) { return; }
    }
    ctx->pc = 0x13F374u;
label_13f374:
    // 0x13f374: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f378: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x13f378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13f37c: 0x8c6556b0  lw          $a1, 0x56B0($v1)
    ctx->pc = 0x13f37cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22192)));
    // 0x13f380: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f384: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x13f384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x13f388: 0xac6456b0  sw          $a0, 0x56B0($v1)
    ctx->pc = 0x13f388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22192), GPR_U32(ctx, 4));
label_13f38c:
    // 0x13f38c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13f390: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f394: 0x908556d4  lbu         $a1, 0x56D4($a0)
    ctx->pc = 0x13f394u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 22228)));
    // 0x13f398: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13f398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f39c: 0x205001b  divu        $zero, $s0, $a1
    ctx->pc = 0x13f39cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x13f3a0: 0x2012  mflo        $a0
    ctx->pc = 0x13f3a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x13f3a4: 0x18a00014  blez        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x13F3A4u;
    {
        const bool branch_taken_0x13f3a4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x13F3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3A4u;
            // 0x13f3a8: 0xac6456d0  sw          $a0, 0x56D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22224), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3a4) {
            ctx->pc = 0x13F3F8u;
            goto label_13f3f8;
        }
    }
    ctx->pc = 0x13F3ACu;
    // 0x13f3ac: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x13f3acu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x13f3b0: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13f3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13f3b4: 0x250856b0  addiu       $t0, $t0, 0x56B0
    ctx->pc = 0x13f3b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22192));
    // 0x13f3b8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13f3bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_13f3c0:
    // 0x13f3c0: 0x8ca656d0  lw          $a2, 0x56D0($a1)
    ctx->pc = 0x13f3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 22224)));
    // 0x13f3c4: 0xc93018  mult        $a2, $a2, $t1
    ctx->pc = 0x13f3c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x13f3c8: 0x2263821  addu        $a3, $s1, $a2
    ctx->pc = 0x13f3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x13f3cc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x13f3ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x13f3d0: 0xad070004  sw          $a3, 0x4($t0)
    ctx->pc = 0x13f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 7));
    // 0x13f3d4: 0x8c8656d0  lw          $a2, 0x56D0($a0)
    ctx->pc = 0x13f3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22224)));
    // 0x13f3d8: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x13f3d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x13f3dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x13f3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x13f3e0: 0xad060010  sw          $a2, 0x10($t0)
    ctx->pc = 0x13f3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 16), GPR_U32(ctx, 6));
    // 0x13f3e4: 0x906656d4  lbu         $a2, 0x56D4($v1)
    ctx->pc = 0x13f3e4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22228)));
    // 0x13f3e8: 0x126302a  slt         $a2, $t1, $a2
    ctx->pc = 0x13f3e8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x13f3ec: 0x14c0fff4  bnez        $a2, . + 4 + (-0xC << 2)
    ctx->pc = 0x13F3ECu;
    {
        const bool branch_taken_0x13f3ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F3ECu;
            // 0x13f3f0: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f3ec) {
            ctx->pc = 0x13F3C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f3c0;
        }
    }
    ctx->pc = 0x13F3F4u;
    // 0x13f3f4: 0x0  nop
    ctx->pc = 0x13f3f4u;
    // NOP
label_13f3f8:
    // 0x13f3f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13f3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f3fc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f400: 0xa46456da  sh          $a0, 0x56DA($v1)
    ctx->pc = 0x13f400u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 22234), (uint16_t)GPR_U32(ctx, 4));
    // 0x13f404: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f408: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f40c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f40cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f410: 0x3e00008  jr          $ra
    ctx->pc = 0x13F410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F410u;
            // 0x13f414: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F418u;
    // 0x13f418: 0x0  nop
    ctx->pc = 0x13f418u;
    // NOP
    // 0x13f41c: 0x0  nop
    ctx->pc = 0x13f41cu;
    // NOP
}
