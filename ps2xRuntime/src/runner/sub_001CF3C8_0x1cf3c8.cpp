#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CF3C8
// Address: 0x1cf3c8 - 0x1cf488
void sub_001CF3C8_0x1cf3c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF3C8_0x1cf3c8");
#endif

    switch (ctx->pc) {
        case 0x1cf3e8u: goto label_1cf3e8;
        case 0x1cf3f0u: goto label_1cf3f0;
        case 0x1cf418u: goto label_1cf418;
        case 0x1cf46cu: goto label_1cf46c;
        default: break;
    }

    ctx->pc = 0x1cf3c8u;

    // 0x1cf3c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cf3c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1cf3cc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1cf3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1cf3d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf3d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1cf3d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf3d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cf3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1cf3dc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1CF3DCu;
    {
        const bool branch_taken_0x1cf3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF3DCu;
            // 0x1cf3e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf3dc) {
            ctx->pc = 0x1CF40Cu;
            goto label_1cf40c;
        }
    }
    ctx->pc = 0x1CF3E4u;
    // 0x1cf3e4: 0x0  nop
    ctx->pc = 0x1cf3e4u;
    // NOP
label_1cf3e8:
    // 0x1cf3e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cf3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf3ec: 0x0  nop
    ctx->pc = 0x1cf3ecu;
    // NOP
label_1cf3f0:
    // 0x1cf3f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cf3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1cf3f4: 0x0  nop
    ctx->pc = 0x1cf3f4u;
    // NOP
    // 0x1cf3f8: 0x0  nop
    ctx->pc = 0x1cf3f8u;
    // NOP
    // 0x1cf3fc: 0x0  nop
    ctx->pc = 0x1cf3fcu;
    // NOP
    // 0x1cf400: 0x0  nop
    ctx->pc = 0x1cf400u;
    // NOP
    // 0x1cf404: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CF404u;
    {
        const bool branch_taken_0x1cf404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cf404) {
            ctx->pc = 0x1CF3F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf3f0;
        }
    }
    ctx->pc = 0x1CF40Cu;
label_1cf40c:
    // 0x1cf40c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf410: 0xc073812  jal         func_1CE048
    ctx->pc = 0x1CF410u;
    SET_GPR_U32(ctx, 31, 0x1CF418u);
    ctx->pc = 0x1CF414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF410u;
            // 0x1cf414: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE048u;
    if (runtime->hasFunction(0x1CE048u)) {
        auto targetFn = runtime->lookupFunction(0x1CE048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF418u; }
        if (ctx->pc != 0x1CF418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE048_0x1ce048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF418u; }
        if (ctx->pc != 0x1CF418u) { return; }
    }
    ctx->pc = 0x1CF418u;
label_1cf418:
    // 0x1cf418: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF418u;
    {
        const bool branch_taken_0x1cf418 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf418) {
            ctx->pc = 0x1CF428u;
            goto label_1cf428;
        }
    }
    ctx->pc = 0x1CF420u;
    // 0x1cf420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1CF420u;
    {
        const bool branch_taken_0x1cf420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF420u;
            // 0x1cf424: 0x2402fde4  addiu       $v0, $zero, -0x21C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966756));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf420) {
            ctx->pc = 0x1CF434u;
            goto label_1cf434;
        }
    }
    ctx->pc = 0x1CF428u;
label_1cf428:
    // 0x1cf428: 0x1451ffef  bne         $v0, $s1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1CF428u;
    {
        const bool branch_taken_0x1cf428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1CF42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF428u;
            // 0x1cf42c: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf428) {
            ctx->pc = 0x1CF3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf3e8;
        }
    }
    ctx->pc = 0x1CF430u;
    // 0x1cf430: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cf430u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf434:
    // 0x1cf434: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cf434u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1cf438: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1cf438u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf43c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf43cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf440: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF440u;
            // 0x1cf444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF448u;
    // 0x1cf448: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf44c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf44cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf450: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cf450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cf454: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1cf454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cf458: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cf458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf45c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cf45cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cf460: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1cf460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1cf464: 0xc0738fe  jal         func_1CE3F8
    ctx->pc = 0x1CF464u;
    SET_GPR_U32(ctx, 31, 0x1CF46Cu);
    ctx->pc = 0x1CF468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF464u;
            // 0x1cf468: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE3F8u;
    if (runtime->hasFunction(0x1CE3F8u)) {
        auto targetFn = runtime->lookupFunction(0x1CE3F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF46Cu; }
        if (ctx->pc != 0x1CF46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CE3F8_0x1ce3f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF46Cu; }
        if (ctx->pc != 0x1CF46Cu) { return; }
    }
    ctx->pc = 0x1CF46Cu;
label_1cf46c:
    // 0x1cf46c: 0x4430002  bgezl       $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1CF46Cu;
    {
        const bool branch_taken_0x1cf46c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1cf46c) {
            ctx->pc = 0x1CF470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF46Cu;
            // 0x1cf470: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CF478u;
            goto label_1cf478;
        }
    }
    ctx->pc = 0x1CF474u;
    // 0x1cf474: 0x2402fde2  addiu       $v0, $zero, -0x21E
    ctx->pc = 0x1cf474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966754));
label_1cf478:
    // 0x1cf478: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cf478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf47c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cf47cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf480: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF480u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF480u;
            // 0x1cf484: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CF488u;
}
