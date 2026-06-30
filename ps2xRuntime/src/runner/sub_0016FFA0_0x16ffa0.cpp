#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016FFA0
// Address: 0x16ffa0 - 0x1700c0
void sub_0016FFA0_0x16ffa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016FFA0_0x16ffa0");
#endif

    switch (ctx->pc) {
        case 0x16ffb0u: goto label_16ffb0;
        case 0x16ffc0u: goto label_16ffc0;
        case 0x16ffd8u: goto label_16ffd8;
        case 0x170038u: goto label_170038;
        case 0x170050u: goto label_170050;
        case 0x17006cu: goto label_17006c;
        case 0x170098u: goto label_170098;
        case 0x1700b0u: goto label_1700b0;
        default: break;
    }

    ctx->pc = 0x16ffa0u;

    // 0x16ffa0: 0x3e00008  jr          $ra
    ctx->pc = 0x16FFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFA0u;
            // 0x16ffa4: 0xac850034  sw          $a1, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FFA8u;
    // 0x16ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x16FFA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFA8u;
            // 0x16ffac: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FFB0u;
label_16ffb0:
    // 0x16ffb0: 0x3e00008  jr          $ra
    ctx->pc = 0x16FFB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFB0u;
            // 0x16ffb4: 0xac85009c  sw          $a1, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FFB8u;
    // 0x16ffb8: 0x3e00008  jr          $ra
    ctx->pc = 0x16FFB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFB8u;
            // 0x16ffbc: 0x8c82009c  lw          $v0, 0x9C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16FFC0u;
label_16ffc0:
    // 0x16ffc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ffc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ffc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ffc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ffc8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x16ffc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16ffcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ffccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ffd0: 0x80593fa  j           func_164FE8
    ctx->pc = 0x16FFD0u;
    ctx->pc = 0x16FFD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFD0u;
            // 0x16ffd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164FE8u;
    {
        auto targetFn = runtime->lookupFunction(0x164FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16FFD8u;
label_16ffd8:
    // 0x16ffd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ffd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ffdc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ffdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ffe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ffe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ffe4: 0x8059414  j           func_165050
    ctx->pc = 0x16FFE4u;
    ctx->pc = 0x16FFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFE4u;
            // 0x16ffe8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165050u;
    {
        auto targetFn = runtime->lookupFunction(0x165050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x16FFECu;
    // 0x16ffec: 0x0  nop
    ctx->pc = 0x16ffecu;
    // NOP
    // 0x16fff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16fff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16fff4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16fff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16fff8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x16fff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16fffc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16fffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170000: 0x8059426  j           func_165098
    ctx->pc = 0x170000u;
    ctx->pc = 0x170004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170000u;
            // 0x170004: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x165098u;
    {
        auto targetFn = runtime->lookupFunction(0x165098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x170008u;
    // 0x170008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17000c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x17000cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x170010: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x170010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170014: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x170014u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x170018: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x170018u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x17001c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x17001cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x170020: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x170024: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x170024u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x170028: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17002c: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x17002cu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x170030: 0x805942e  j           func_1650B8
    ctx->pc = 0x170030u;
    ctx->pc = 0x170034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170030u;
            // 0x170034: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1650B8u;
    {
        auto targetFn = runtime->lookupFunction(0x1650B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x170038u;
label_170038:
    // 0x170038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x170038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17003c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17003cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x170040: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x170040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x170044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170048: 0x80592f4  j           func_164BD0
    ctx->pc = 0x170048u;
    ctx->pc = 0x17004Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170048u;
            // 0x17004c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x164BD0u;
    {
        auto targetFn = runtime->lookupFunction(0x164BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x170050u;
label_170050:
    // 0x170050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170054: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170058: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x170058u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17005c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x17005cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170060: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x170060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170064: 0xc0599d2  jal         func_166748
    ctx->pc = 0x170064u;
    SET_GPR_U32(ctx, 31, 0x17006Cu);
    ctx->pc = 0x170068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x170064u;
            // 0x170068: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166748u;
    if (runtime->hasFunction(0x166748u)) {
        auto targetFn = runtime->lookupFunction(0x166748u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17006Cu; }
        if (ctx->pc != 0x17006Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166748_0x166748(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17006Cu; }
        if (ctx->pc != 0x17006Cu) { return; }
    }
    ctx->pc = 0x17006Cu;
label_17006c:
    // 0x17006c: 0x5a200006  blezl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x17006Cu;
    {
        const bool branch_taken_0x17006c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x17006c) {
            ctx->pc = 0x170070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17006Cu;
            // 0x170070: 0x8e0200a4  lw          $v0, 0xA4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x170088u;
            goto label_170088;
        }
    }
    ctx->pc = 0x170074u;
    // 0x170074: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x170074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x170078: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x170078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17007c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17007Cu;
    {
        const bool branch_taken_0x17007c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17007Cu;
            // 0x170080: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17007c) {
            ctx->pc = 0x170090u;
            goto label_170090;
        }
    }
    ctx->pc = 0x170084u;
    // 0x170084: 0x0  nop
    ctx->pc = 0x170084u;
    // NOP
label_170088:
    // 0x170088: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x170088u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x17008c: 0xae0200a4  sw          $v0, 0xA4($s0)
    ctx->pc = 0x17008cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 2));
label_170090:
    // 0x170090: 0xc0599d8  jal         func_166760
    ctx->pc = 0x170090u;
    SET_GPR_U32(ctx, 31, 0x170098u);
    ctx->pc = 0x166760u;
    if (runtime->hasFunction(0x166760u)) {
        auto targetFn = runtime->lookupFunction(0x166760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170098u; }
        if (ctx->pc != 0x170098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166760_0x166760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170098u; }
        if (ctx->pc != 0x170098u) { return; }
    }
    ctx->pc = 0x170098u;
label_170098:
    // 0x170098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x170098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17009c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x17009cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1700a0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1700a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1700a4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1700a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1700a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1700A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700A8u;
            // 0x1700ac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1700B0u;
label_1700b0:
    // 0x1700b0: 0xac860054  sw          $a2, 0x54($a0)
    ctx->pc = 0x1700b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 6));
    // 0x1700b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1700B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1700B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1700B4u;
            // 0x1700b8: 0xac850050  sw          $a1, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1700BCu;
    // 0x1700bc: 0x0  nop
    ctx->pc = 0x1700bcu;
    // NOP
}
