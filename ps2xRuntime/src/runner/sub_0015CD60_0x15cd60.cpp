#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015CD60
// Address: 0x15cd60 - 0x15ce60
void sub_0015CD60_0x15cd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CD60_0x15cd60");
#endif

    switch (ctx->pc) {
        case 0x15cda4u: goto label_15cda4;
        case 0x15cdb4u: goto label_15cdb4;
        case 0x15cdc4u: goto label_15cdc4;
        case 0x15cdecu: goto label_15cdec;
        case 0x15cdfcu: goto label_15cdfc;
        case 0x15ce1cu: goto label_15ce1c;
        case 0x15ce34u: goto label_15ce34;
        case 0x15ce48u: goto label_15ce48;
        default: break;
    }

    ctx->pc = 0x15cd60u;

    // 0x15cd60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x15cd60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x15cd64: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x15cd64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x15cd68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15cd68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15cd6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15cd6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15cd70: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15cd70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cd74: 0x1480002b  bnez        $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x15CD74u;
    {
        const bool branch_taken_0x15cd74 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD74u;
            // 0x15cd78: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd74) {
            ctx->pc = 0x15CE24u;
            goto label_15ce24;
        }
    }
    ctx->pc = 0x15CD7Cu;
    // 0x15cd7c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x15cd7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x15cd80: 0x3c11006d  lui         $s1, 0x6D
    ctx->pc = 0x15cd80u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)109 << 16));
    // 0x15cd84: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x15cd84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x15cd88: 0x2610cd30  addiu       $s0, $s0, -0x32D0
    ctx->pc = 0x15cd88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294954288));
    // 0x15cd8c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x15CD8Cu;
    {
        const bool branch_taken_0x15cd8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CD90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD8Cu;
            // 0x15cd90: 0x2631cc70  addiu       $s1, $s1, -0x3390 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294954096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cd8c) {
            ctx->pc = 0x15CDCCu;
            goto label_15cdcc;
        }
    }
    ctx->pc = 0x15CD94u;
    // 0x15cd94: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15cd98: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x15cd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15cd9c: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x15CD9Cu;
    SET_GPR_U32(ctx, 31, 0x15CDA4u);
    ctx->pc = 0x15CDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CD9Cu;
            // 0x15cda0: 0x24a5ccf0  addiu       $a1, $a1, -0x3310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C7E0u;
    if (runtime->hasFunction(0x15C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDA4u; }
        if (ctx->pc != 0x15CDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C7E0_0x15c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDA4u; }
        if (ctx->pc != 0x15CDA4u) { return; }
    }
    ctx->pc = 0x15CDA4u;
label_15cda4:
    // 0x15cda4: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15cda4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15cda8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x15cda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x15cdac: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x15CDACu;
    SET_GPR_U32(ctx, 31, 0x15CDB4u);
    ctx->pc = 0x15CDB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDACu;
            // 0x15cdb0: 0x24a5cd00  addiu       $a1, $a1, -0x3300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C7E0u;
    if (runtime->hasFunction(0x15C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDB4u; }
        if (ctx->pc != 0x15CDB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C7E0_0x15c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDB4u; }
        if (ctx->pc != 0x15CDB4u) { return; }
    }
    ctx->pc = 0x15CDB4u;
label_15cdb4:
    // 0x15cdb4: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15cdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15cdb8: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15cdbc: 0xc0571f8  jal         func_15C7E0
    ctx->pc = 0x15CDBCu;
    SET_GPR_U32(ctx, 31, 0x15CDC4u);
    ctx->pc = 0x15CDC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDBCu;
            // 0x15cdc0: 0x24a5cd10  addiu       $a1, $a1, -0x32F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C7E0u;
    if (runtime->hasFunction(0x15C7E0u)) {
        auto targetFn = runtime->lookupFunction(0x15C7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDC4u; }
        if (ctx->pc != 0x15CDC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C7E0_0x15c7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDC4u; }
        if (ctx->pc != 0x15CDC4u) { return; }
    }
    ctx->pc = 0x15CDC4u;
label_15cdc4:
    // 0x15cdc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15CDC4u;
    {
        const bool branch_taken_0x15cdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDC4u;
            // 0x15cdc8: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdc4) {
            ctx->pc = 0x15CDD4u;
            goto label_15cdd4;
        }
    }
    ctx->pc = 0x15CDCCu;
label_15cdcc:
    // 0x15cdcc: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15cdccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15cdd0: 0x24a5ccf0  addiu       $a1, $a1, -0x3310
    ctx->pc = 0x15cdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
label_15cdd4:
    // 0x15cdd4: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x15cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x15cdd8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x15CDD8u;
    {
        const bool branch_taken_0x15cdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15cdd8) {
            ctx->pc = 0x15CDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDD8u;
            // 0x15cddc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CDF4u;
            goto label_15cdf4;
        }
    }
    ctx->pc = 0x15CDE0u;
    // 0x15cde0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15cde0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cde4: 0xc0572b4  jal         func_15CAD0
    ctx->pc = 0x15CDE4u;
    SET_GPR_U32(ctx, 31, 0x15CDECu);
    ctx->pc = 0x15CDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDE4u;
            // 0x15cde8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CAD0u;
    if (runtime->hasFunction(0x15CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x15CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDECu; }
        if (ctx->pc != 0x15CDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CAD0_0x15cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDECu; }
        if (ctx->pc != 0x15CDECu) { return; }
    }
    ctx->pc = 0x15CDECu;
label_15cdec:
    // 0x15cdec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15CDECu;
    {
        const bool branch_taken_0x15cdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDECu;
            // 0x15cdf0: 0x32430004  andi        $v1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cdec) {
            ctx->pc = 0x15CE00u;
            goto label_15ce00;
        }
    }
    ctx->pc = 0x15CDF4u;
label_15cdf4:
    // 0x15cdf4: 0xc05727c  jal         func_15C9F0
    ctx->pc = 0x15CDF4u;
    SET_GPR_U32(ctx, 31, 0x15CDFCu);
    ctx->pc = 0x15CDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CDF4u;
            // 0x15cdf8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C9F0u;
    if (runtime->hasFunction(0x15C9F0u)) {
        auto targetFn = runtime->lookupFunction(0x15C9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDFCu; }
        if (ctx->pc != 0x15CDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C9F0_0x15c9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CDFCu; }
        if (ctx->pc != 0x15CDFCu) { return; }
    }
    ctx->pc = 0x15CDFCu;
label_15cdfc:
    // 0x15cdfc: 0x32430004  andi        $v1, $s2, 0x4
    ctx->pc = 0x15cdfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
label_15ce00:
    // 0x15ce00: 0x54600012  bnel        $v1, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x15CE00u;
    {
        const bool branch_taken_0x15ce00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ce00) {
            ctx->pc = 0x15CE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE00u;
            // 0x15ce04: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15CE4Cu;
            goto label_15ce4c;
        }
    }
    ctx->pc = 0x15CE08u;
    // 0x15ce08: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15ce08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15ce0c: 0x240403f8  addiu       $a0, $zero, 0x3F8
    ctx->pc = 0x15ce0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
    // 0x15ce10: 0x24a5cc70  addiu       $a1, $a1, -0x3390
    ctx->pc = 0x15ce10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954096));
    // 0x15ce14: 0xc0573a0  jal         func_15CE80
    ctx->pc = 0x15CE14u;
    SET_GPR_U32(ctx, 31, 0x15CE1Cu);
    ctx->pc = 0x15CE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE14u;
            // 0x15ce18: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE1Cu; }
        if (ctx->pc != 0x15CE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CE80_0x15ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE1Cu; }
        if (ctx->pc != 0x15CE1Cu) { return; }
    }
    ctx->pc = 0x15CE1Cu;
label_15ce1c:
    // 0x15ce1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15CE1Cu;
    {
        const bool branch_taken_0x15ce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ce1c) {
            ctx->pc = 0x15CE48u;
            goto label_15ce48;
        }
    }
    ctx->pc = 0x15CE24u;
label_15ce24:
    // 0x15ce24: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x15ce24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ce28: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x15ce28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15ce2c: 0xc0573a0  jal         func_15CE80
    ctx->pc = 0x15CE2Cu;
    SET_GPR_U32(ctx, 31, 0x15CE34u);
    ctx->pc = 0x15CE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE2Cu;
            // 0x15ce30: 0x240403f8  addiu       $a0, $zero, 0x3F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE34u; }
        if (ctx->pc != 0x15CE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CE80_0x15ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE34u; }
        if (ctx->pc != 0x15CE34u) { return; }
    }
    ctx->pc = 0x15CE34u;
label_15ce34:
    // 0x15ce34: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x15ce34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x15ce38: 0x240403fc  addiu       $a0, $zero, 0x3FC
    ctx->pc = 0x15ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1020));
    // 0x15ce3c: 0x24a5ccb0  addiu       $a1, $a1, -0x3350
    ctx->pc = 0x15ce3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954160));
    // 0x15ce40: 0xc0573a0  jal         func_15CE80
    ctx->pc = 0x15CE40u;
    SET_GPR_U32(ctx, 31, 0x15CE48u);
    ctx->pc = 0x15CE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE40u;
            // 0x15ce44: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CE80u;
    if (runtime->hasFunction(0x15CE80u)) {
        auto targetFn = runtime->lookupFunction(0x15CE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE48u; }
        if (ctx->pc != 0x15CE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CE80_0x15ce80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15CE48u; }
        if (ctx->pc != 0x15CE48u) { return; }
    }
    ctx->pc = 0x15CE48u;
label_15ce48:
    // 0x15ce48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15ce48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_15ce4c:
    // 0x15ce4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15ce4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ce50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15ce50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ce54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15ce54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15ce58: 0x3e00008  jr          $ra
    ctx->pc = 0x15CE58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15CE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15CE58u;
            // 0x15ce5c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15CE60u;
}
