#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004AA3C0
// Address: 0x4aa3c0 - 0x4aa4d0
void sub_004AA3C0_0x4aa3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AA3C0_0x4aa3c0");
#endif

    switch (ctx->pc) {
        case 0x4aa3f8u: goto label_4aa3f8;
        case 0x4aa400u: goto label_4aa400;
        case 0x4aa410u: goto label_4aa410;
        case 0x4aa458u: goto label_4aa458;
        case 0x4aa460u: goto label_4aa460;
        case 0x4aa484u: goto label_4aa484;
        default: break;
    }

    ctx->pc = 0x4aa3c0u;

    // 0x4aa3c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4aa3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4aa3c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aa3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4aa3c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x4aa3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x4aa3cc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4aa3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4aa3d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4aa3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4aa3d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4aa3d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa3d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4aa3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4aa3dc: 0x80420e70  lb          $v0, 0xE70($v0)
    ctx->pc = 0x4aa3dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3696)));
    // 0x4aa3e0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4AA3E0u;
    {
        const bool branch_taken_0x4aa3e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AA3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA3E0u;
            // 0x4aa3e4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa3e0) {
            ctx->pc = 0x4AA42Cu;
            goto label_4aa42c;
        }
    }
    ctx->pc = 0x4AA3E8u;
    // 0x4aa3e8: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x4aa3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x4aa3ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x4aa3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x4aa3f0: 0xc0b3960  jal         func_2CE580
    ctx->pc = 0x4AA3F0u;
    SET_GPR_U32(ctx, 31, 0x4AA3F8u);
    ctx->pc = 0x4AA3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA3F0u;
            // 0x4aa3f4: 0xafa20048  sw          $v0, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE580u;
    if (runtime->hasFunction(0x2CE580u)) {
        auto targetFn = runtime->lookupFunction(0x2CE580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA3F8u; }
        if (ctx->pc != 0x4AA3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE580_0x2ce580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA3F8u; }
        if (ctx->pc != 0x4AA3F8u) { return; }
    }
    ctx->pc = 0x4AA3F8u;
label_4aa3f8:
    // 0x4aa3f8: 0xc12a93c  jal         func_4AA4F0
    ctx->pc = 0x4AA3F8u;
    SET_GPR_U32(ctx, 31, 0x4AA400u);
    ctx->pc = 0x4AA3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA3F8u;
            // 0x4aa3fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4F0u;
    if (runtime->hasFunction(0x4AA4F0u)) {
        auto targetFn = runtime->lookupFunction(0x4AA4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA400u; }
        if (ctx->pc != 0x4AA400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AA4F0_0x4aa4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA400u; }
        if (ctx->pc != 0x4AA400u) { return; }
    }
    ctx->pc = 0x4AA400u;
label_4aa400:
    // 0x4aa400: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x4aa400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x4aa404: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x4aa404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x4aa408: 0xc12a934  jal         func_4AA4D0
    ctx->pc = 0x4AA408u;
    SET_GPR_U32(ctx, 31, 0x4AA410u);
    ctx->pc = 0x4AA40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA408u;
            // 0x4aa40c: 0x27a50048  addiu       $a1, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4AA4D0u;
    if (runtime->hasFunction(0x4AA4D0u)) {
        auto targetFn = runtime->lookupFunction(0x4AA4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA410u; }
        if (ctx->pc != 0x4AA410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004AA4D0_0x4aa4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA410u; }
        if (ctx->pc != 0x4AA410u) { return; }
    }
    ctx->pc = 0x4AA410u;
label_4aa410:
    // 0x4aa410: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4aa410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4aa414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4aa414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4aa418: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x4aa418u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x4aa41c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4aa41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4aa420: 0xa0440e70  sb          $a0, 0xE70($v0)
    ctx->pc = 0x4aa420u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3696), (uint8_t)GPR_U32(ctx, 4));
    // 0x4aa424: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x4aa424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x4aa428: 0xac6217d0  sw          $v0, 0x17D0($v1)
    ctx->pc = 0x4aa428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 6096), GPR_U32(ctx, 2));
label_4aa42c:
    // 0x4aa42c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4aa42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
    // 0x4aa430: 0x8c5017d0  lw          $s0, 0x17D0($v0)
    ctx->pc = 0x4aa430u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6096)));
    // 0x4aa434: 0x211082b  sltu        $at, $s0, $s1
    ctx->pc = 0x4aa434u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4aa438: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x4AA438u;
    {
        const bool branch_taken_0x4aa438 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa438) {
            ctx->pc = 0x4AA43Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA438u;
            // 0x4aa43c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA464u;
            goto label_4aa464;
        }
    }
    ctx->pc = 0x4AA440u;
    // 0x4aa440: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x4aa440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x4aa444: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4aa444u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x4aa448: 0x8c421ad8  lw          $v0, 0x1AD8($v0)
    ctx->pc = 0x4aa448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6872)));
    // 0x4aa44c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x4aa44cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x4aa450: 0xc049e92  jal         func_127A48
    ctx->pc = 0x4AA450u;
    SET_GPR_U32(ctx, 31, 0x4AA458u);
    ctx->pc = 0x4AA454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA450u;
            // 0x4aa454: 0x24a552f0  addiu       $a1, $a1, 0x52F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127A48u;
    if (runtime->hasFunction(0x127A48u)) {
        auto targetFn = runtime->lookupFunction(0x127A48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA458u; }
        if (ctx->pc != 0x4AA458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127A48_0x127a48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA458u; }
        if (ctx->pc != 0x4AA458u) { return; }
    }
    ctx->pc = 0x4AA458u;
label_4aa458:
    // 0x4aa458: 0xc04981a  jal         func_126068
    ctx->pc = 0x4AA458u;
    SET_GPR_U32(ctx, 31, 0x4AA460u);
    ctx->pc = 0x126068u;
    if (runtime->hasFunction(0x126068u)) {
        auto targetFn = runtime->lookupFunction(0x126068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA460u; }
        if (ctx->pc != 0x4AA460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00126068_0x126068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4AA460u; }
        if (ctx->pc != 0x4AA460u) { return; }
    }
    ctx->pc = 0x4AA460u;
label_4aa460:
    // 0x4aa460: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x4aa460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_4aa464:
    // 0x4aa464: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x4AA464u;
    {
        const bool branch_taken_0x4aa464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa464) {
            ctx->pc = 0x4AA468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA464u;
            // 0x4aa468: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA470u;
            goto label_4aa470;
        }
    }
    ctx->pc = 0x4AA46Cu;
    // 0x4aa46c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4aa46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4aa470:
    // 0x4aa470: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x4aa470u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4aa474: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x4AA474u;
    {
        const bool branch_taken_0x4aa474 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa474) {
            ctx->pc = 0x4AA4B0u;
            goto label_4aa4b0;
        }
    }
    ctx->pc = 0x4AA47Cu;
    // 0x4aa47c: 0x101842  srl         $v1, $s0, 1
    ctx->pc = 0x4aa47cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x4aa480: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x4aa480u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4aa484:
    // 0x4aa484: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AA484u;
    {
        const bool branch_taken_0x4aa484 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4aa484) {
            ctx->pc = 0x4AA498u;
            goto label_4aa498;
        }
    }
    ctx->pc = 0x4AA48Cu;
    // 0x4aa48c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4AA48Cu;
    {
        const bool branch_taken_0x4aa48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AA490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA48Cu;
            // 0x4aa490: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4aa48c) {
            ctx->pc = 0x4AA4A0u;
            goto label_4aa4a0;
        }
    }
    ctx->pc = 0x4AA494u;
    // 0x4aa494: 0x0  nop
    ctx->pc = 0x4aa494u;
    // NOP
label_4aa498:
    // 0x4aa498: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4aa498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aa49c: 0x0  nop
    ctx->pc = 0x4aa49cu;
    // NOP
label_4aa4a0:
    // 0x4aa4a0: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x4aa4a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4aa4a4: 0x5420fff7  bnel        $at, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4AA4A4u;
    {
        const bool branch_taken_0x4aa4a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x4aa4a4) {
            ctx->pc = 0x4AA4A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA4A4u;
            // 0x4aa4a8: 0x43082b  sltu        $at, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4AA484u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4aa484;
        }
    }
    ctx->pc = 0x4AA4ACu;
    // 0x4aa4ac: 0x0  nop
    ctx->pc = 0x4aa4acu;
    // NOP
label_4aa4b0:
    // 0x4aa4b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4aa4b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4aa4b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4aa4b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4aa4b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4aa4b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4aa4bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4aa4bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4aa4c0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AA4C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AA4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4AA4C0u;
            // 0x4aa4c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4AA4C8u;
    // 0x4aa4c8: 0x0  nop
    ctx->pc = 0x4aa4c8u;
    // NOP
    // 0x4aa4cc: 0x0  nop
    ctx->pc = 0x4aa4ccu;
    // NOP
}
