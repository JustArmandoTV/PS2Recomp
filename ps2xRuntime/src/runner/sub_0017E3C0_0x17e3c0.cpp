#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E3C0
// Address: 0x17e3c0 - 0x17e478
void sub_0017E3C0_0x17e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E3C0_0x17e3c0");
#endif

    switch (ctx->pc) {
        case 0x17e3d8u: goto label_17e3d8;
        case 0x17e42cu: goto label_17e42c;
        case 0x17e440u: goto label_17e440;
        case 0x17e44cu: goto label_17e44c;
        default: break;
    }

    ctx->pc = 0x17e3c0u;

    // 0x17e3c0: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x17e3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x17e3c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e3c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e3c8: 0x24446760  addiu       $a0, $v0, 0x6760
    ctx->pc = 0x17e3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26464));
    // 0x17e3cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x17e3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e3d0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x17e3d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17e3d4: 0x0  nop
    ctx->pc = 0x17e3d4u;
    // NOP
label_17e3d8:
    // 0x17e3d8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x17e3d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17e3dc: 0x54470005  bnel        $v0, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x17E3DCu;
    {
        const bool branch_taken_0x17e3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x17e3dc) {
            ctx->pc = 0x17E3E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3DCu;
            // 0x17e3e0: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17E3F4u;
            goto label_17e3f4;
        }
    }
    ctx->pc = 0x17E3E4u;
    // 0x17e3e4: 0x80830002  lb          $v1, 0x2($a0)
    ctx->pc = 0x17e3e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x17e3e8: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x17E3E8u;
    {
        const bool branch_taken_0x17e3e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x17E3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3E8u;
            // 0x17e3ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3e8) {
            ctx->pc = 0x17E408u;
            goto label_17e408;
        }
    }
    ctx->pc = 0x17E3F0u;
    // 0x17e3f0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x17e3f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_17e3f4:
    // 0x17e3f4: 0x28a2000d  slti        $v0, $a1, 0xD
    ctx->pc = 0x17e3f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x17e3f8: 0x0  nop
    ctx->pc = 0x17e3f8u;
    // NOP
    // 0x17e3fc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x17E3FCu;
    {
        const bool branch_taken_0x17e3fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3FCu;
            // 0x17e400: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3fc) {
            ctx->pc = 0x17E3D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e3d8;
        }
    }
    ctx->pc = 0x17E404u;
    // 0x17e404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17e404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e408:
    // 0x17e408: 0x3e00008  jr          $ra
    ctx->pc = 0x17E408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E410u;
    // 0x17e410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17e410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17e414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17e414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17e418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17e418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e41c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17e41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x17e420: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17e420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17e424: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E424u;
    SET_GPR_U32(ctx, 31, 0x17E42Cu);
    ctx->pc = 0x17E428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E424u;
            // 0x17e428: 0x24044000  addiu       $a0, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E42Cu; }
        if (ctx->pc != 0x17E42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E42Cu; }
        if (ctx->pc != 0x17E42Cu) { return; }
    }
    ctx->pc = 0x17E42Cu;
label_17e42c:
    // 0x17e42c: 0x26110014  addiu       $s1, $s0, 0x14
    ctx->pc = 0x17e42cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x17e430: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x17e430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x17e434: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17e434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17e438: 0xc05ede0  jal         func_17B780
    ctx->pc = 0x17E438u;
    SET_GPR_U32(ctx, 31, 0x17E440u);
    ctx->pc = 0x17E43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E438u;
            // 0x17e43c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B780u;
    if (runtime->hasFunction(0x17B780u)) {
        auto targetFn = runtime->lookupFunction(0x17B780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E440u; }
        if (ctx->pc != 0x17E440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B780_0x17b780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E440u; }
        if (ctx->pc != 0x17E440u) { return; }
    }
    ctx->pc = 0x17E440u;
label_17e440:
    // 0x17e440: 0x24044001  addiu       $a0, $zero, 0x4001
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16385));
    // 0x17e444: 0xc05ed3a  jal         func_17B4E8
    ctx->pc = 0x17E444u;
    SET_GPR_U32(ctx, 31, 0x17E44Cu);
    ctx->pc = 0x17E448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E444u;
            // 0x17e448: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B4E8u;
    if (runtime->hasFunction(0x17B4E8u)) {
        auto targetFn = runtime->lookupFunction(0x17B4E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E44Cu; }
        if (ctx->pc != 0x17E44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B4E8_0x17b4e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E44Cu; }
        if (ctx->pc != 0x17E44Cu) { return; }
    }
    ctx->pc = 0x17E44Cu;
label_17e44c:
    // 0x17e44c: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17E44Cu;
    {
        const bool branch_taken_0x17e44c = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x17E450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E44Cu;
            // 0x17e450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e44c) {
            ctx->pc = 0x17E460u;
            goto label_17e460;
        }
    }
    ctx->pc = 0x17E454u;
    // 0x17e454: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x17e454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x17e458: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17e458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x17e45c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x17e45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_17e460:
    // 0x17e460: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17e460u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e464: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17e464u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x17e468: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17e468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17e46c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E46Cu;
            // 0x17e470: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x17E474u;
    // 0x17e474: 0x0  nop
    ctx->pc = 0x17e474u;
    // NOP
}
