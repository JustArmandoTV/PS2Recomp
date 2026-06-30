#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A76E0
// Address: 0x1a76e0 - 0x1a77b0
void sub_001A76E0_0x1a76e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A76E0_0x1a76e0");
#endif

    switch (ctx->pc) {
        case 0x1a7728u: goto label_1a7728;
        case 0x1a7750u: goto label_1a7750;
        default: break;
    }

    ctx->pc = 0x1a76e0u;

    // 0x1a76e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1a76e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1a76e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a76e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a76e8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1a76e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76ec: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1a76ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a76f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a76f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a76f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a76f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a76f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a76f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a76fc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1a76fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1a7700: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1a7700u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7704: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1a7704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1a7708: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1a7708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1a770c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1a770cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1a7710: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A7710u;
    {
        const bool branch_taken_0x1a7710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A7714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7710u;
            // 0x1a7714: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7710) {
            ctx->pc = 0x1A7784u;
            goto label_1a7784;
        }
    }
    ctx->pc = 0x1A7718u;
    // 0x1a7718: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x1a7718u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1a771c: 0x241500f8  addiu       $s5, $zero, 0xF8
    ctx->pc = 0x1a771cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
    // 0x1a7720: 0x2414000f  addiu       $s4, $zero, 0xF
    ctx->pc = 0x1a7720u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1a7724: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x1a7724u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a7728:
    // 0x1a7728: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x1a7728u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a772c: 0x54560012  bnel        $v0, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A772Cu;
    {
        const bool branch_taken_0x1a772c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x1a772c) {
            ctx->pc = 0x1A7730u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A772Cu;
            // 0x1a7730: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7778u;
            goto label_1a7778;
        }
    }
    ctx->pc = 0x1A7734u;
    // 0x1a7734: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x1a7734u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x1a7738: 0x304200f8  andi        $v0, $v0, 0xF8
    ctx->pc = 0x1a7738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)248);
    // 0x1a773c: 0x5455000e  bnel        $v0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x1A773Cu;
    {
        const bool branch_taken_0x1a773c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x1a773c) {
            ctx->pc = 0x1A7740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A773Cu;
            // 0x1a7740: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7778u;
            goto label_1a7778;
        }
    }
    ctx->pc = 0x1A7744u;
    // 0x1a7744: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a7744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7748: 0xc069dec  jal         func_1A77B0
    ctx->pc = 0x1A7748u;
    SET_GPR_U32(ctx, 31, 0x1A7750u);
    ctx->pc = 0x1A774Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7748u;
            // 0x1a774c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A77B0u;
    if (runtime->hasFunction(0x1A77B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A77B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7750u; }
        if (ctx->pc != 0x1A7750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A77B0_0x1a77b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7750u; }
        if (ctx->pc != 0x1A7750u) { return; }
    }
    ctx->pc = 0x1A7750u;
label_1a7750:
    // 0x1a7750: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x1a7750u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a7754: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1A7754u;
    {
        const bool branch_taken_0x1a7754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a7754) {
            ctx->pc = 0x1A7758u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7754u;
            // 0x1a7758: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7778u;
            goto label_1a7778;
        }
    }
    ctx->pc = 0x1A775Cu;
    // 0x1a775c: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x1a775cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1a7760: 0x50540005  beql        $v0, $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7760u;
    {
        const bool branch_taken_0x1a7760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x1a7760) {
            ctx->pc = 0x1A7764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7760u;
            // 0x1a7764: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A7778u;
            goto label_1a7778;
        }
    }
    ctx->pc = 0x1A7768u;
    // 0x1a7768: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x1a7768u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1a776c: 0x14730006  bne         $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A776Cu;
    {
        const bool branch_taken_0x1a776c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x1A7770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A776Cu;
            // 0x1a7770: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a776c) {
            ctx->pc = 0x1A7788u;
            goto label_1a7788;
        }
    }
    ctx->pc = 0x1A7774u;
    // 0x1a7774: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1a7774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_1a7778:
    // 0x1a7778: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1a7778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1a777c: 0x1040ffea  beqz        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A777Cu;
    {
        const bool branch_taken_0x1a777c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A777Cu;
            // 0x1a7780: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a777c) {
            ctx->pc = 0x1A7728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a7728;
        }
    }
    ctx->pc = 0x1A7784u;
label_1a7784:
    // 0x1a7784: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a7784u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a7788:
    // 0x1a7788: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a7788u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a778c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a778cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a7790: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1a7790u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a7794: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1a7794u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a7798: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1a7798u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a779c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1a779cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1a77a0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1a77a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a77a4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1a77a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a77a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A77A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A77ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A77A8u;
            // 0x1a77ac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A77B0u;
}
