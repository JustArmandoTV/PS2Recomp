#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BEB00
// Address: 0x1beb00 - 0x1bec30
void sub_001BEB00_0x1beb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEB00_0x1beb00");
#endif

    switch (ctx->pc) {
        case 0x1beb60u: goto label_1beb60;
        case 0x1bebb8u: goto label_1bebb8;
        case 0x1bebc8u: goto label_1bebc8;
        case 0x1bebd8u: goto label_1bebd8;
        default: break;
    }

    ctx->pc = 0x1beb00u;

    // 0x1beb00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1beb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1beb04: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x1beb04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1beb08: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x1beb08u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1beb0c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1beb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1beb10: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1beb10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1beb14: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1beb14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1beb18: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1beb18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1beb1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEB1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB1Cu;
            // 0x1beb20: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEB24u;
    // 0x1beb24: 0x0  nop
    ctx->pc = 0x1beb24u;
    // NOP
    // 0x1beb28: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1beb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1beb2c: 0x24860044  addiu       $a2, $a0, 0x44
    ctx->pc = 0x1beb2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    // 0x1beb30: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1beb30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1beb34: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1beb34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1beb38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1beb38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1beb3c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1beb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1beb40: 0x21843  sra         $v1, $v0, 1
    ctx->pc = 0x1beb40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1beb44: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x1beb44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x1beb48: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x1beb48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
    // 0x1beb4c: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEB4Cu;
    {
        const bool branch_taken_0x1beb4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB4Cu;
            // 0x1beb50: 0xac83001c  sw          $v1, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb4c) {
            ctx->pc = 0x1BEB58u;
            goto label_1beb58;
        }
    }
    ctx->pc = 0x1BEB54u;
    // 0x1beb54: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1beb54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1beb58:
    // 0x1beb58: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEB58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEB60u;
label_1beb60:
    // 0x1beb60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1beb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1beb64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1beb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1beb68: 0x687c2  srl         $s0, $a2, 31
    ctx->pc = 0x1beb68u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x1beb6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1beb6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1beb70: 0x58fc2  srl         $s1, $a1, 31
    ctx->pc = 0x1beb70u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1beb74: 0x2068021  addu        $s0, $s0, $a2
    ctx->pc = 0x1beb74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
    // 0x1beb78: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x1beb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x1beb7c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x1beb7cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1beb80: 0x118843  sra         $s1, $s1, 1
    ctx->pc = 0x1beb80u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1beb84: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1beb84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1beb88: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1beb88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb8c: 0x108040  sll         $s0, $s0, 1
    ctx->pc = 0x1beb8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1beb90: 0x118840  sll         $s1, $s1, 1
    ctx->pc = 0x1beb90u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x1beb94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1beb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1beb98: 0x109843  sra         $s3, $s0, 1
    ctx->pc = 0x1beb98u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 16), 1));
    // 0x1beb9c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1beb9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1beba0: 0x11a043  sra         $s4, $s1, 1
    ctx->pc = 0x1beba0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 17), 1));
    // 0x1beba4: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x1beba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1beba8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1beba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1bebacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1bebb0: 0xc06fb0c  jal         func_1BEC30
    ctx->pc = 0x1BEBB0u;
    SET_GPR_U32(ctx, 31, 0x1BEBB8u);
    ctx->pc = 0x1BEBB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEBB0u;
            // 0x1bebb4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC30u;
    if (runtime->hasFunction(0x1BEC30u)) {
        auto targetFn = runtime->lookupFunction(0x1BEC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBB8u; }
        if (ctx->pc != 0x1BEBB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEC30_0x1bec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBB8u; }
        if (ctx->pc != 0x1BEBB8u) { return; }
    }
    ctx->pc = 0x1BEBB8u;
label_1bebb8:
    // 0x1bebb8: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x1bebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1bebbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bebbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebc0: 0xc06fb0c  jal         func_1BEC30
    ctx->pc = 0x1BEBC0u;
    SET_GPR_U32(ctx, 31, 0x1BEBC8u);
    ctx->pc = 0x1BEBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEBC0u;
            // 0x1bebc4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC30u;
    if (runtime->hasFunction(0x1BEC30u)) {
        auto targetFn = runtime->lookupFunction(0x1BEC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBC8u; }
        if (ctx->pc != 0x1BEBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEC30_0x1bec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBC8u; }
        if (ctx->pc != 0x1BEBC8u) { return; }
    }
    ctx->pc = 0x1BEBC8u;
label_1bebc8:
    // 0x1bebc8: 0x26440024  addiu       $a0, $s2, 0x24
    ctx->pc = 0x1bebc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
    // 0x1bebcc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1bebccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebd0: 0xc06fb0c  jal         func_1BEC30
    ctx->pc = 0x1BEBD0u;
    SET_GPR_U32(ctx, 31, 0x1BEBD8u);
    ctx->pc = 0x1BEBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEBD0u;
            // 0x1bebd4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC30u;
    if (runtime->hasFunction(0x1BEC30u)) {
        auto targetFn = runtime->lookupFunction(0x1BEC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBD8u; }
        if (ctx->pc != 0x1BEBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BEC30_0x1bec30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBD8u; }
        if (ctx->pc != 0x1BEBD8u) { return; }
    }
    ctx->pc = 0x1BEBD8u;
label_1bebd8:
    // 0x1bebd8: 0x26440044  addiu       $a0, $s2, 0x44
    ctx->pc = 0x1bebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x1bebdc: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x1bebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x1bebe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bebe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bebe4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BEBE4u;
    {
        const bool branch_taken_0x1bebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEBE4u;
            // 0x1bebe8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebe4) {
            ctx->pc = 0x1BEC10u;
            goto label_1bec10;
        }
    }
    ctx->pc = 0x1BEBECu;
    // 0x1bebec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bebecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bebf0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bebf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bebf4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bebf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bebf8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bebf8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bebfc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1bebfcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec00: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1bec00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bec04: 0x806fb0c  j           func_1BEC30
    ctx->pc = 0x1BEC04u;
    ctx->pc = 0x1BEC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC04u;
            // 0x1bec08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC30u;
    if (runtime->hasFunction(0x1BEC30u)) {
        auto targetFn = runtime->lookupFunction(0x1BEC30u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BEC30_0x1bec30(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BEC0Cu;
    // 0x1bec0c: 0x0  nop
    ctx->pc = 0x1bec0cu;
    // NOP
label_1bec10:
    // 0x1bec10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bec10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bec14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bec18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1bec18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bec1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1bec1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1bec20: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1bec20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec24: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1bec24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1bec28: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC28u;
            // 0x1bec2c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEC30u;
}
