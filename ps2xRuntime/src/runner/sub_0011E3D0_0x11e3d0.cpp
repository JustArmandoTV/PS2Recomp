#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011E3D0
// Address: 0x11e3d0 - 0x11e4b8
void sub_0011E3D0_0x11e3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011E3D0_0x11e3d0");
#endif

    switch (ctx->pc) {
        case 0x11e440u: goto label_11e440;
        case 0x11e458u: goto label_11e458;
        case 0x11e470u: goto label_11e470;
        case 0x11e48cu: goto label_11e48c;
        default: break;
    }

    ctx->pc = 0x11e3d0u;

    // 0x11e3d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11e3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11e3d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11e3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11e3d8: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x11e3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x11e3dc: 0x3c11005d  lui         $s1, 0x5D
    ctx->pc = 0x11e3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)93 << 16));
    // 0x11e3e0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x11e3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x11e3e4: 0x8e22fae8  lw          $v0, -0x518($s1)
    ctx->pc = 0x11e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294965992)));
    // 0x11e3e8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x11e3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x11e3ec: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11E3ECu;
    {
        const bool branch_taken_0x11e3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3ECu;
            // 0x11e3f0: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3ec) {
            ctx->pc = 0x11E418u;
            goto label_11e418;
        }
    }
    ctx->pc = 0x11E3F4u;
    // 0x11e3f4: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x11e3f4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x11e3f8: 0x8e02faec  lw          $v0, -0x514($s0)
    ctx->pc = 0x11e3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294965996)));
    // 0x11e3fc: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11E3FCu;
    {
        const bool branch_taken_0x11e3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x11E400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E3FCu;
            // 0x11e400: 0x3c12005d  lui         $s2, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e3fc) {
            ctx->pc = 0x11E41Cu;
            goto label_11e41c;
        }
    }
    ctx->pc = 0x11E404u;
    // 0x11e404: 0x8e42faf0  lw          $v0, -0x510($s2)
    ctx->pc = 0x11e404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294966000)));
    // 0x11e408: 0x14430025  bne         $v0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x11E408u;
    {
        const bool branch_taken_0x11e408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x11E40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E408u;
            // 0x11e40c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e408) {
            ctx->pc = 0x11E4A0u;
            goto label_11e4a0;
        }
    }
    ctx->pc = 0x11E410u;
    // 0x11e410: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11E410u;
    {
        const bool branch_taken_0x11e410 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E410u;
            // 0x11e414: 0x3c020063  lui         $v0, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e410) {
            ctx->pc = 0x11E424u;
            goto label_11e424;
        }
    }
    ctx->pc = 0x11E418u;
label_11e418:
    // 0x11e418: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x11e418u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
label_11e41c:
    // 0x11e41c: 0x3c12005d  lui         $s2, 0x5D
    ctx->pc = 0x11e41cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)93 << 16));
    // 0x11e420: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x11e420u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_11e424:
    // 0x11e424: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11e424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11e428: 0x24420168  addiu       $v0, $v0, 0x168
    ctx->pc = 0x11e428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 360));
    // 0x11e42c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11e42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11e430: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x11e430u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x11e434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e438: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x11E438u;
    SET_GPR_U32(ctx, 31, 0x11E440u);
    ctx->pc = 0x11E43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E438u;
            // 0x11e43c: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E440u; }
        if (ctx->pc != 0x11E440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E440u; }
        if (ctx->pc != 0x11E440u) { return; }
    }
    ctx->pc = 0x11E440u;
label_11e440:
    // 0x11e440: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x11e440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x11e444: 0xae22fae8  sw          $v0, -0x518($s1)
    ctx->pc = 0x11e444u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965992), GPR_U32(ctx, 2));
    // 0x11e448: 0x24630178  addiu       $v1, $v1, 0x178
    ctx->pc = 0x11e448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 376));
    // 0x11e44c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e450: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x11E450u;
    SET_GPR_U32(ctx, 31, 0x11E458u);
    ctx->pc = 0x11E454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E450u;
            // 0x11e454: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E458u; }
        if (ctx->pc != 0x11E458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E458u; }
        if (ctx->pc != 0x11E458u) { return; }
    }
    ctx->pc = 0x11E458u;
label_11e458:
    // 0x11e458: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x11e458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x11e45c: 0xae02faec  sw          $v0, -0x514($s0)
    ctx->pc = 0x11e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965996), GPR_U32(ctx, 2));
    // 0x11e460: 0x24630188  addiu       $v1, $v1, 0x188
    ctx->pc = 0x11e460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 392));
    // 0x11e464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e468: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x11E468u;
    SET_GPR_U32(ctx, 31, 0x11E470u);
    ctx->pc = 0x11E46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E468u;
            // 0x11e46c: 0xafa30014  sw          $v1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E470u; }
        if (ctx->pc != 0x11E470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E470u; }
        if (ctx->pc != 0x11E470u) { return; }
    }
    ctx->pc = 0x11E470u;
label_11e470:
    // 0x11e470: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x11e470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
    // 0x11e474: 0xae42faf0  sw          $v0, -0x510($s2)
    ctx->pc = 0x11e474u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294966000), GPR_U32(ctx, 2));
    // 0x11e478: 0x24630198  addiu       $v1, $v1, 0x198
    ctx->pc = 0x11e478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 408));
    // 0x11e47c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11e47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11e480: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x11e480u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x11e484: 0xc0430d8  jal         func_10C360
    ctx->pc = 0x11E484u;
    SET_GPR_U32(ctx, 31, 0x11E48Cu);
    ctx->pc = 0x11E488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11E484u;
            // 0x11e488: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C360u;
    if (runtime->hasFunction(0x10C360u)) {
        auto targetFn = runtime->lookupFunction(0x10C360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E48Cu; }
        if (ctx->pc != 0x11E48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C360_0x10c360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11E48Cu; }
        if (ctx->pc != 0x11E48Cu) { return; }
    }
    ctx->pc = 0x11E48Cu;
label_11e48c:
    // 0x11e48c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x11e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x11e490: 0xac62fae0  sw          $v0, -0x520($v1)
    ctx->pc = 0x11e490u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294965984), GPR_U32(ctx, 2));
    // 0x11e494: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x11e494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x11e498: 0xac40faf4  sw          $zero, -0x50C($v0)
    ctx->pc = 0x11e498u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294966004), GPR_U32(ctx, 0));
    // 0x11e49c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x11e49cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_11e4a0:
    // 0x11e4a0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x11e4a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11e4a4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x11e4a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11e4a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x11e4a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11e4ac: 0x3e00008  jr          $ra
    ctx->pc = 0x11E4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11E4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11E4ACu;
            // 0x11e4b0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x11E4B4u;
    // 0x11e4b4: 0x0  nop
    ctx->pc = 0x11e4b4u;
    // NOP
}
