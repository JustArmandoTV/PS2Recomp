#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00482000
// Address: 0x482000 - 0x482120
void sub_00482000_0x482000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482000_0x482000");
#endif

    switch (ctx->pc) {
        case 0x482014u: goto label_482014;
        case 0x482090u: goto label_482090;
        case 0x4820e8u: goto label_4820e8;
        case 0x482100u: goto label_482100;
        default: break;
    }

    ctx->pc = 0x482000u;

    // 0x482000: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x482000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x482004: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x482004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x482008: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x482008u;
    {
        const bool branch_taken_0x482008 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x48200Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482008u;
            // 0x48200c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x482008) {
            ctx->pc = 0x482088u;
            goto label_482088;
        }
    }
    ctx->pc = 0x482010u;
    // 0x482010: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x482010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_482014:
    // 0x482014: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x482014u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x482018: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x482018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x48201c: 0xc5382b  sltu        $a3, $a2, $a1
    ctx->pc = 0x48201cu;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x482020: 0x30690001  andi        $t1, $v1, 0x1
    ctx->pc = 0x482020u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x482024: 0x34043  sra         $t0, $v1, 1
    ctx->pc = 0x482024u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 1));
    // 0x482028: 0x494821  addu        $t1, $v0, $t1
    ctx->pc = 0x482028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x48202c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x48202cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x482030: 0x31020001  andi        $v0, $t0, 0x1
    ctx->pc = 0x482030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1);
    // 0x482034: 0x1224821  addu        $t1, $t1, $v0
    ctx->pc = 0x482034u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x482038: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x482038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x48203c: 0x30480001  andi        $t0, $v0, 0x1
    ctx->pc = 0x48203cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x482040: 0x310c3  sra         $v0, $v1, 3
    ctx->pc = 0x482040u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 3));
    // 0x482044: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x482044u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x482048: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x482048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48204c: 0x1024821  addu        $t1, $t0, $v0
    ctx->pc = 0x48204cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x482050: 0x31103  sra         $v0, $v1, 4
    ctx->pc = 0x482050u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
    // 0x482054: 0x30480001  andi        $t0, $v0, 0x1
    ctx->pc = 0x482054u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x482058: 0x31143  sra         $v0, $v1, 5
    ctx->pc = 0x482058u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 5));
    // 0x48205c: 0x1284021  addu        $t0, $t1, $t0
    ctx->pc = 0x48205cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x482060: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x482060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x482064: 0x1024821  addu        $t1, $t0, $v0
    ctx->pc = 0x482064u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x482068: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x482068u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
    // 0x48206c: 0x30480001  andi        $t0, $v0, 0x1
    ctx->pc = 0x48206cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x482070: 0x311c3  sra         $v0, $v1, 7
    ctx->pc = 0x482070u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 7));
    // 0x482074: 0x1281821  addu        $v1, $t1, $t0
    ctx->pc = 0x482074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 8)));
    // 0x482078: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x482078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x48207c: 0x14e0ffe5  bnez        $a3, . + 4 + (-0x1B << 2)
    ctx->pc = 0x48207Cu;
    {
        const bool branch_taken_0x48207c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x482080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48207Cu;
            // 0x482080: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48207c) {
            ctx->pc = 0x482014u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_482014;
        }
    }
    ctx->pc = 0x482084u;
    // 0x482084: 0x0  nop
    ctx->pc = 0x482084u;
    // NOP
label_482088:
    // 0x482088: 0x3e00008  jr          $ra
    ctx->pc = 0x482088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482090u;
label_482090:
    // 0x482090: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482094: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x482094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x482098: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x482098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48209c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48209cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4820a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4820a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4820a4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x4820A4u;
    {
        const bool branch_taken_0x4820a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4820A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4820A4u;
            // 0x4820a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4820a4) {
            ctx->pc = 0x482100u;
            goto label_482100;
        }
    }
    ctx->pc = 0x4820ACu;
    // 0x4820ac: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4820acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4820b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4820b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4820b4: 0x2463f090  addiu       $v1, $v1, -0xF70
    ctx->pc = 0x4820b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963344));
    // 0x4820b8: 0x2442f0c8  addiu       $v0, $v0, -0xF38
    ctx->pc = 0x4820b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963400));
    // 0x4820bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4820bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4820c0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4820C0u;
    {
        const bool branch_taken_0x4820c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4820C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4820C0u;
            // 0x4820c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4820c0) {
            ctx->pc = 0x4820E8u;
            goto label_4820e8;
        }
    }
    ctx->pc = 0x4820C8u;
    // 0x4820c8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4820c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x4820cc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4820ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x4820d0: 0x2463f140  addiu       $v1, $v1, -0xEC0
    ctx->pc = 0x4820d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963520));
    // 0x4820d4: 0x2442f178  addiu       $v0, $v0, -0xE88
    ctx->pc = 0x4820d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963576));
    // 0x4820d8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4820d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x4820dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4820dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4820e0: 0xc120848  jal         func_482120
    ctx->pc = 0x4820E0u;
    SET_GPR_U32(ctx, 31, 0x4820E8u);
    ctx->pc = 0x4820E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4820E0u;
            // 0x4820e4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x482120u;
    if (runtime->hasFunction(0x482120u)) {
        auto targetFn = runtime->lookupFunction(0x482120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4820E8u; }
        if (ctx->pc != 0x4820E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00482120_0x482120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4820E8u; }
        if (ctx->pc != 0x4820E8u) { return; }
    }
    ctx->pc = 0x4820E8u;
label_4820e8:
    // 0x4820e8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4820e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x4820ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4820ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x4820f0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4820F0u;
    {
        const bool branch_taken_0x4820f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4820f0) {
            ctx->pc = 0x4820F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4820F0u;
            // 0x4820f4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x482104u;
            goto label_482104;
        }
    }
    ctx->pc = 0x4820F8u;
    // 0x4820f8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x4820F8u;
    SET_GPR_U32(ctx, 31, 0x482100u);
    ctx->pc = 0x4820FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4820F8u;
            // 0x4820fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482100u; }
        if (ctx->pc != 0x482100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x482100u; }
        if (ctx->pc != 0x482100u) { return; }
    }
    ctx->pc = 0x482100u;
label_482100:
    // 0x482100: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x482100u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_482104:
    // 0x482104: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x482104u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482108: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x482108u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48210c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x48210cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482110: 0x3e00008  jr          $ra
    ctx->pc = 0x482110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x482114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x482110u;
            // 0x482114: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x482118u;
    // 0x482118: 0x0  nop
    ctx->pc = 0x482118u;
    // NOP
    // 0x48211c: 0x0  nop
    ctx->pc = 0x48211cu;
    // NOP
}
