#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00134A00
// Address: 0x134a00 - 0x134e10
void sub_00134A00_0x134a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134A00_0x134a00");
#endif

    switch (ctx->pc) {
        case 0x134ad0u: goto label_134ad0;
        case 0x134ae4u: goto label_134ae4;
        case 0x134afcu: goto label_134afc;
        case 0x134b7cu: goto label_134b7c;
        case 0x134b8cu: goto label_134b8c;
        case 0x134b9cu: goto label_134b9c;
        case 0x134bacu: goto label_134bac;
        case 0x134c24u: goto label_134c24;
        case 0x134c4cu: goto label_134c4c;
        case 0x134c74u: goto label_134c74;
        case 0x134c84u: goto label_134c84;
        case 0x134c94u: goto label_134c94;
        case 0x134d00u: goto label_134d00;
        case 0x134d10u: goto label_134d10;
        case 0x134d20u: goto label_134d20;
        case 0x134d30u: goto label_134d30;
        case 0x134d40u: goto label_134d40;
        case 0x134db4u: goto label_134db4;
        case 0x134dc4u: goto label_134dc4;
        case 0x134dd4u: goto label_134dd4;
        case 0x134de4u: goto label_134de4;
        default: break;
    }

    ctx->pc = 0x134a00u;

    // 0x134a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x134a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x134a04: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x134a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x134a08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x134a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x134a0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x134a0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x134a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x134a14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x134a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x134a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x134a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x134a1c: 0x8c880000  lw          $t0, 0x0($a0)
    ctx->pc = 0x134a1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134a20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x134a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134a24: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x134a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x134a28: 0x8c85001c  lw          $a1, 0x1C($a0)
    ctx->pc = 0x134a28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x134a2c: 0x3109001c  andi        $t1, $t0, 0x1C
    ctx->pc = 0x134a2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)28);
    // 0x134a30: 0x31087800  andi        $t0, $t0, 0x7800
    ctx->pc = 0x134a30u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)30720);
    // 0x134a34: 0x110300c4  beq         $t0, $v1, . + 4 + (0xC4 << 2)
    ctx->pc = 0x134A34u;
    {
        const bool branch_taken_0x134a34 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x134A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A34u;
            // 0x134a38: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a34) {
            ctx->pc = 0x134D48u;
            goto label_134d48;
        }
    }
    ctx->pc = 0x134A3Cu;
    // 0x134a3c: 0x24033800  addiu       $v1, $zero, 0x3800
    ctx->pc = 0x134a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14336));
    // 0x134a40: 0x5103005c  beql        $t0, $v1, . + 4 + (0x5C << 2)
    ctx->pc = 0x134A40u;
    {
        const bool branch_taken_0x134a40 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x134a40) {
            ctx->pc = 0x134A44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134A40u;
            // 0x134a44: 0x24080010  addiu       $t0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134BB4u;
            goto label_134bb4;
        }
    }
    ctx->pc = 0x134A48u;
    // 0x134a48: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x134a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x134a4c: 0x5103000b  beql        $t0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x134A4Cu;
    {
        const bool branch_taken_0x134a4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x134a4c) {
            ctx->pc = 0x134A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134A4Cu;
            // 0x134a50: 0xa1880  sll         $v1, $t2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134A7Cu;
            goto label_134a7c;
        }
    }
    ctx->pc = 0x134A54u;
    // 0x134a54: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x134a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x134a58: 0x51030007  beql        $t0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x134A58u;
    {
        const bool branch_taken_0x134a58 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x134a58) {
            ctx->pc = 0x134A5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134A58u;
            // 0x134a5c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134A78u;
            goto label_134a78;
        }
    }
    ctx->pc = 0x134A60u;
    // 0x134a60: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x134a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x134a64: 0x51030003  beql        $t0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134A64u;
    {
        const bool branch_taken_0x134a64 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        if (branch_taken_0x134a64) {
            ctx->pc = 0x134A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134A64u;
            // 0x134a68: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134A74u;
            goto label_134a74;
        }
    }
    ctx->pc = 0x134A6Cu;
    // 0x134a6c: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x134A6Cu;
    {
        const bool branch_taken_0x134a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A6Cu;
            // 0x134a70: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a6c) {
            ctx->pc = 0x134DECu;
            goto label_134dec;
        }
    }
    ctx->pc = 0x134A74u;
label_134a74:
    // 0x134a74: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x134a74u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_134a78:
    // 0x134a78: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x134a78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
label_134a7c:
    // 0x134a7c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x134a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x134a80: 0x15260021  bne         $t1, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x134A80u;
    {
        const bool branch_taken_0x134a80 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        ctx->pc = 0x134A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134A80u;
            // 0x134a84: 0x2038021  addu        $s0, $s0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134a80) {
            ctx->pc = 0x134B08u;
            goto label_134b08;
        }
    }
    ctx->pc = 0x134A88u;
    // 0x134a88: 0xa1840  sll         $v1, $t2, 1
    ctx->pc = 0x134a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
    // 0x134a8c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x134a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134a90: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x134a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x134a94: 0x24710048  addiu       $s1, $v1, 0x48
    ctx->pc = 0x134a94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 72));
    // 0x134a98: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x134a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x134a9c: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x134a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x134aa0: 0x10830013  beq         $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x134AA0u;
    {
        const bool branch_taken_0x134aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x134AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AA0u;
            // 0x134aa4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134aa0) {
            ctx->pc = 0x134AF0u;
            goto label_134af0;
        }
    }
    ctx->pc = 0x134AA8u;
    // 0x134aa8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x134aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134aac: 0x5083000b  beql        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x134AACu;
    {
        const bool branch_taken_0x134aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134aac) {
            ctx->pc = 0x134AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134AACu;
            // 0x134ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134ADCu;
            goto label_134adc;
        }
    }
    ctx->pc = 0x134AB4u;
    // 0x134ab4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x134ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134ab8: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134AB8u;
    {
        const bool branch_taken_0x134ab8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134ab8) {
            ctx->pc = 0x134ABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134AB8u;
            // 0x134abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134AC8u;
            goto label_134ac8;
        }
    }
    ctx->pc = 0x134AC0u;
    // 0x134ac0: 0x100000c9  b           . + 4 + (0xC9 << 2)
    ctx->pc = 0x134AC0u;
    {
        const bool branch_taken_0x134ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ac0) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134AC8u;
label_134ac8:
    // 0x134ac8: 0xc04d954  jal         func_136550
    ctx->pc = 0x134AC8u;
    SET_GPR_U32(ctx, 31, 0x134AD0u);
    ctx->pc = 0x134ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134AC8u;
            // 0x134acc: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136550u;
    if (runtime->hasFunction(0x136550u)) {
        auto targetFn = runtime->lookupFunction(0x136550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AD0u; }
        if (ctx->pc != 0x134AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136550_0x136550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AD0u; }
        if (ctx->pc != 0x134AD0u) { return; }
    }
    ctx->pc = 0x134AD0u;
label_134ad0:
    // 0x134ad0: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x134ad0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134ad4: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x134AD4u;
    {
        const bool branch_taken_0x134ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AD4u;
            // 0x134ad8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ad4) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134ADCu;
label_134adc:
    // 0x134adc: 0xc04d824  jal         func_136090
    ctx->pc = 0x134ADCu;
    SET_GPR_U32(ctx, 31, 0x134AE4u);
    ctx->pc = 0x134AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134ADCu;
            // 0x134ae0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136090u;
    if (runtime->hasFunction(0x136090u)) {
        auto targetFn = runtime->lookupFunction(0x136090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AE4u; }
        if (ctx->pc != 0x134AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136090_0x136090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AE4u; }
        if (ctx->pc != 0x134AE4u) { return; }
    }
    ctx->pc = 0x134AE4u;
label_134ae4:
    // 0x134ae4: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x134ae4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134ae8: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x134AE8u;
    {
        const bool branch_taken_0x134ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134AE8u;
            // 0x134aec: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ae8) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134AF0u;
label_134af0:
    // 0x134af0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134af4: 0xc04e038  jal         func_1380E0
    ctx->pc = 0x134AF4u;
    SET_GPR_U32(ctx, 31, 0x134AFCu);
    ctx->pc = 0x134AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134AF4u;
            // 0x134af8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1380E0u;
    if (runtime->hasFunction(0x1380E0u)) {
        auto targetFn = runtime->lookupFunction(0x1380E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AFCu; }
        if (ctx->pc != 0x134AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001380E0_0x1380e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134AFCu; }
        if (ctx->pc != 0x134AFCu) { return; }
    }
    ctx->pc = 0x134AFCu;
label_134afc:
    // 0x134afc: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x134afcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x134b00: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x134B00u;
    {
        const bool branch_taken_0x134b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B00u;
            // 0x134b04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b00) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134B08u;
label_134b08:
    // 0x134b08: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x134b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134b0c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x134b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x134b10: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x134b10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x134b14: 0x108300b4  beq         $a0, $v1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x134B14u;
    {
        const bool branch_taken_0x134b14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134b14) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134B1Cu;
    // 0x134b1c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x134b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134b20: 0x108300b1  beq         $a0, $v1, . + 4 + (0xB1 << 2)
    ctx->pc = 0x134B20u;
    {
        const bool branch_taken_0x134b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134b20) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134B28u;
    // 0x134b28: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x134b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x134b2c: 0x108300ae  beq         $a0, $v1, . + 4 + (0xAE << 2)
    ctx->pc = 0x134B2Cu;
    {
        const bool branch_taken_0x134b2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134b2c) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134B34u;
    // 0x134b34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x134b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134b38: 0x108300ab  beq         $a0, $v1, . + 4 + (0xAB << 2)
    ctx->pc = 0x134B38u;
    {
        const bool branch_taken_0x134b38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134b38) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134B40u;
    // 0x134b40: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x134b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x134b44: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x134B44u;
    {
        const bool branch_taken_0x134b44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134b44) {
            ctx->pc = 0x134B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134B44u;
            // 0x134b48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134BA4u;
            goto label_134ba4;
        }
    }
    ctx->pc = 0x134B4Cu;
    // 0x134b4c: 0x50860011  beql        $a0, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x134B4Cu;
    {
        const bool branch_taken_0x134b4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x134b4c) {
            ctx->pc = 0x134B50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134B4Cu;
            // 0x134b50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134B94u;
            goto label_134b94;
        }
    }
    ctx->pc = 0x134B54u;
    // 0x134b54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x134b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134b58: 0x5083000a  beql        $a0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x134B58u;
    {
        const bool branch_taken_0x134b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134b58) {
            ctx->pc = 0x134B5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134B58u;
            // 0x134b5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134B84u;
            goto label_134b84;
        }
    }
    ctx->pc = 0x134B60u;
    // 0x134b60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x134b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134b64: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x134B64u;
    {
        const bool branch_taken_0x134b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134b64) {
            ctx->pc = 0x134B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134B64u;
            // 0x134b68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134B74u;
            goto label_134b74;
        }
    }
    ctx->pc = 0x134B6Cu;
    // 0x134b6c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x134B6Cu;
    {
        const bool branch_taken_0x134b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134b6c) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134B74u;
label_134b74:
    // 0x134b74: 0xc04d8d0  jal         func_136340
    ctx->pc = 0x134B74u;
    SET_GPR_U32(ctx, 31, 0x134B7Cu);
    ctx->pc = 0x134B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134B74u;
            // 0x134b78: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136340u;
    if (runtime->hasFunction(0x136340u)) {
        auto targetFn = runtime->lookupFunction(0x136340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B7Cu; }
        if (ctx->pc != 0x134B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136340_0x136340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B7Cu; }
        if (ctx->pc != 0x134B7Cu) { return; }
    }
    ctx->pc = 0x134B7Cu;
label_134b7c:
    // 0x134b7c: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x134B7Cu;
    {
        const bool branch_taken_0x134b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B7Cu;
            // 0x134b80: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b7c) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134B84u;
label_134b84:
    // 0x134b84: 0xc04d7e8  jal         func_135FA0
    ctx->pc = 0x134B84u;
    SET_GPR_U32(ctx, 31, 0x134B8Cu);
    ctx->pc = 0x134B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134B84u;
            // 0x134b88: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135FA0u;
    if (runtime->hasFunction(0x135FA0u)) {
        auto targetFn = runtime->lookupFunction(0x135FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B8Cu; }
        if (ctx->pc != 0x134B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00135FA0_0x135fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B8Cu; }
        if (ctx->pc != 0x134B8Cu) { return; }
    }
    ctx->pc = 0x134B8Cu;
label_134b8c:
    // 0x134b8c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x134B8Cu;
    {
        const bool branch_taken_0x134b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B8Cu;
            // 0x134b90: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b8c) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134B94u;
label_134b94:
    // 0x134b94: 0xc04dac4  jal         func_136B10
    ctx->pc = 0x134B94u;
    SET_GPR_U32(ctx, 31, 0x134B9Cu);
    ctx->pc = 0x134B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134B94u;
            // 0x134b98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136B10u;
    if (runtime->hasFunction(0x136B10u)) {
        auto targetFn = runtime->lookupFunction(0x136B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B9Cu; }
        if (ctx->pc != 0x134B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136B10_0x136b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134B9Cu; }
        if (ctx->pc != 0x134B9Cu) { return; }
    }
    ctx->pc = 0x134B9Cu;
label_134b9c:
    // 0x134b9c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x134B9Cu;
    {
        const bool branch_taken_0x134b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134B9Cu;
            // 0x134ba0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134b9c) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134BA4u;
label_134ba4:
    // 0x134ba4: 0xc04dff0  jal         func_137FC0
    ctx->pc = 0x134BA4u;
    SET_GPR_U32(ctx, 31, 0x134BACu);
    ctx->pc = 0x134BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134BA4u;
            // 0x134ba8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137FC0u;
    if (runtime->hasFunction(0x137FC0u)) {
        auto targetFn = runtime->lookupFunction(0x137FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134BACu; }
        if (ctx->pc != 0x134BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137FC0_0x137fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134BACu; }
        if (ctx->pc != 0x134BACu) { return; }
    }
    ctx->pc = 0x134BACu;
label_134bac:
    // 0x134bac: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x134BACu;
    {
        const bool branch_taken_0x134bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134BACu;
            // 0x134bb0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134bac) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134BB4u;
label_134bb4:
    // 0x134bb4: 0x55280039  bnel        $t1, $t0, . + 4 + (0x39 << 2)
    ctx->pc = 0x134BB4u;
    {
        const bool branch_taken_0x134bb4 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 8));
        if (branch_taken_0x134bb4) {
            ctx->pc = 0x134BB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134BB4u;
            // 0x134bb8: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134C9Cu;
            goto label_134c9c;
        }
    }
    ctx->pc = 0x134BBCu;
    // 0x134bbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x134bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134bc0: 0x30640e77  andi        $a0, $v1, 0xE77
    ctx->pc = 0x134bc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3703);
    // 0x134bc4: 0x10880088  beq         $a0, $t0, . + 4 + (0x88 << 2)
    ctx->pc = 0x134BC4u;
    {
        const bool branch_taken_0x134bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x134bc4) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134BCCu;
    // 0x134bcc: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x134bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x134bd0: 0x5083002e  beql        $a0, $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x134BD0u;
    {
        const bool branch_taken_0x134bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134bd0) {
            ctx->pc = 0x134BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134BD0u;
            // 0x134bd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134C8Cu;
            goto label_134c8c;
        }
    }
    ctx->pc = 0x134BD8u;
    // 0x134bd8: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x134bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134bdc: 0x50830027  beql        $a0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x134BDCu;
    {
        const bool branch_taken_0x134bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134bdc) {
            ctx->pc = 0x134BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134BDCu;
            // 0x134be0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134C7Cu;
            goto label_134c7c;
        }
    }
    ctx->pc = 0x134BE4u;
    // 0x134be4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x134be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x134be8: 0x50830020  beql        $a0, $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x134BE8u;
    {
        const bool branch_taken_0x134be8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134be8) {
            ctx->pc = 0x134BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134BE8u;
            // 0x134bec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134C6Cu;
            goto label_134c6c;
        }
    }
    ctx->pc = 0x134BF0u;
    // 0x134bf0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x134bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134bf4: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x134BF4u;
    {
        const bool branch_taken_0x134bf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134bf4) {
            ctx->pc = 0x134BF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134BF4u;
            // 0x134bf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134C44u;
            goto label_134c44;
        }
    }
    ctx->pc = 0x134BFCu;
    // 0x134bfc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x134bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134c00: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x134C00u;
    {
        const bool branch_taken_0x134c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134c00) {
            ctx->pc = 0x134C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134C00u;
            // 0x134c04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134C1Cu;
            goto label_134c1c;
        }
    }
    ctx->pc = 0x134C08u;
    // 0x134c08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134c0c: 0x10820076  beq         $a0, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x134C0Cu;
    {
        const bool branch_taken_0x134c0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134c0c) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134C14u;
    // 0x134c14: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x134C14u;
    {
        const bool branch_taken_0x134c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134c14) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134C1Cu;
label_134c1c:
    // 0x134c1c: 0xc04d994  jal         func_136650
    ctx->pc = 0x134C1Cu;
    SET_GPR_U32(ctx, 31, 0x134C24u);
    ctx->pc = 0x134C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134C1Cu;
            // 0x134c20: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136650u;
    if (runtime->hasFunction(0x136650u)) {
        auto targetFn = runtime->lookupFunction(0x136650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C24u; }
        if (ctx->pc != 0x134C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136650_0x136650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C24u; }
        if (ctx->pc != 0x134C24u) { return; }
    }
    ctx->pc = 0x134C24u;
label_134c24:
    // 0x134c24: 0x87a20048  lh          $v0, 0x48($sp)
    ctx->pc = 0x134c24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134c28: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x134c28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134c2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x134c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x134c30: 0x87a2004a  lh          $v0, 0x4A($sp)
    ctx->pc = 0x134c30u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 74)));
    // 0x134c34: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x134c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x134c38: 0x87a2004c  lh          $v0, 0x4C($sp)
    ctx->pc = 0x134c38u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x134c3c: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x134C3Cu;
    {
        const bool branch_taken_0x134c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C3Cu;
            // 0x134c40: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c3c) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134C44u;
label_134c44:
    // 0x134c44: 0xc04d844  jal         func_136110
    ctx->pc = 0x134C44u;
    SET_GPR_U32(ctx, 31, 0x134C4Cu);
    ctx->pc = 0x134C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134C44u;
            // 0x134c48: 0x27a60048  addiu       $a2, $sp, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136110u;
    if (runtime->hasFunction(0x136110u)) {
        auto targetFn = runtime->lookupFunction(0x136110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C4Cu; }
        if (ctx->pc != 0x134C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136110_0x136110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C4Cu; }
        if (ctx->pc != 0x134C4Cu) { return; }
    }
    ctx->pc = 0x134C4Cu;
label_134c4c:
    // 0x134c4c: 0x87a20048  lh          $v0, 0x48($sp)
    ctx->pc = 0x134c4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x134c50: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x134c50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134c54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x134c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x134c58: 0x87a2004a  lh          $v0, 0x4A($sp)
    ctx->pc = 0x134c58u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 74)));
    // 0x134c5c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x134c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x134c60: 0x87a2004c  lh          $v0, 0x4C($sp)
    ctx->pc = 0x134c60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x134c64: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x134C64u;
    {
        const bool branch_taken_0x134c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C64u;
            // 0x134c68: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c64) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134C6Cu;
label_134c6c:
    // 0x134c6c: 0xc04db18  jal         func_136C60
    ctx->pc = 0x134C6Cu;
    SET_GPR_U32(ctx, 31, 0x134C74u);
    ctx->pc = 0x136C60u;
    if (runtime->hasFunction(0x136C60u)) {
        auto targetFn = runtime->lookupFunction(0x136C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C74u; }
        if (ctx->pc != 0x134C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136C60_0x136c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C74u; }
        if (ctx->pc != 0x134C74u) { return; }
    }
    ctx->pc = 0x134C74u;
label_134c74:
    // 0x134c74: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x134C74u;
    {
        const bool branch_taken_0x134c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C74u;
            // 0x134c78: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c74) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134C7Cu;
label_134c7c:
    // 0x134c7c: 0xc04dc54  jal         func_137150
    ctx->pc = 0x134C7Cu;
    SET_GPR_U32(ctx, 31, 0x134C84u);
    ctx->pc = 0x137150u;
    if (runtime->hasFunction(0x137150u)) {
        auto targetFn = runtime->lookupFunction(0x137150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C84u; }
        if (ctx->pc != 0x134C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137150_0x137150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C84u; }
        if (ctx->pc != 0x134C84u) { return; }
    }
    ctx->pc = 0x134C84u;
label_134c84:
    // 0x134c84: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x134C84u;
    {
        const bool branch_taken_0x134c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C84u;
            // 0x134c88: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c84) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134C8Cu;
label_134c8c:
    // 0x134c8c: 0xc04dd90  jal         func_137640
    ctx->pc = 0x134C8Cu;
    SET_GPR_U32(ctx, 31, 0x134C94u);
    ctx->pc = 0x137640u;
    if (runtime->hasFunction(0x137640u)) {
        auto targetFn = runtime->lookupFunction(0x137640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C94u; }
        if (ctx->pc != 0x134C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137640_0x137640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134C94u; }
        if (ctx->pc != 0x134C94u) { return; }
    }
    ctx->pc = 0x134C94u;
label_134c94:
    // 0x134c94: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x134C94u;
    {
        const bool branch_taken_0x134c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C94u;
            // 0x134c98: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c94) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134C9Cu;
label_134c9c:
    // 0x134c9c: 0x30640e77  andi        $a0, $v1, 0xE77
    ctx->pc = 0x134c9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3703);
    // 0x134ca0: 0x10880051  beq         $a0, $t0, . + 4 + (0x51 << 2)
    ctx->pc = 0x134CA0u;
    {
        const bool branch_taken_0x134ca0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 8));
        if (branch_taken_0x134ca0) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134CA8u;
    // 0x134ca8: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x134ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x134cac: 0x50830022  beql        $a0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x134CACu;
    {
        const bool branch_taken_0x134cac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134cac) {
            ctx->pc = 0x134CB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134CACu;
            // 0x134cb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134D38u;
            goto label_134d38;
        }
    }
    ctx->pc = 0x134CB4u;
    // 0x134cb4: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x134cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134cb8: 0x5083001b  beql        $a0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x134CB8u;
    {
        const bool branch_taken_0x134cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134cb8) {
            ctx->pc = 0x134CBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134CB8u;
            // 0x134cbc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134D28u;
            goto label_134d28;
        }
    }
    ctx->pc = 0x134CC0u;
    // 0x134cc0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x134cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x134cc4: 0x50830014  beql        $a0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x134CC4u;
    {
        const bool branch_taken_0x134cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134cc4) {
            ctx->pc = 0x134CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134CC4u;
            // 0x134cc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134D18u;
            goto label_134d18;
        }
    }
    ctx->pc = 0x134CCCu;
    // 0x134ccc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x134cccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134cd0: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x134CD0u;
    {
        const bool branch_taken_0x134cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134cd0) {
            ctx->pc = 0x134CD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134CD0u;
            // 0x134cd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134D08u;
            goto label_134d08;
        }
    }
    ctx->pc = 0x134CD8u;
    // 0x134cd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x134cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134cdc: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x134CDCu;
    {
        const bool branch_taken_0x134cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134cdc) {
            ctx->pc = 0x134CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134CDCu;
            // 0x134ce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134CF8u;
            goto label_134cf8;
        }
    }
    ctx->pc = 0x134CE4u;
    // 0x134ce4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134ce8: 0x1082003f  beq         $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x134CE8u;
    {
        const bool branch_taken_0x134ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134ce8) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134CF0u;
    // 0x134cf0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x134CF0u;
    {
        const bool branch_taken_0x134cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cf0) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134CF8u;
label_134cf8:
    // 0x134cf8: 0xc04d900  jal         func_136400
    ctx->pc = 0x134CF8u;
    SET_GPR_U32(ctx, 31, 0x134D00u);
    ctx->pc = 0x134CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134CF8u;
            // 0x134cfc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136400u;
    if (runtime->hasFunction(0x136400u)) {
        auto targetFn = runtime->lookupFunction(0x136400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D00u; }
        if (ctx->pc != 0x134D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136400_0x136400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D00u; }
        if (ctx->pc != 0x134D00u) { return; }
    }
    ctx->pc = 0x134D00u;
label_134d00:
    // 0x134d00: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x134D00u;
    {
        const bool branch_taken_0x134d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D00u;
            // 0x134d04: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d00) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134D08u;
label_134d08:
    // 0x134d08: 0xc04d804  jal         func_136010
    ctx->pc = 0x134D08u;
    SET_GPR_U32(ctx, 31, 0x134D10u);
    ctx->pc = 0x134D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134D08u;
            // 0x134d0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136010u;
    if (runtime->hasFunction(0x136010u)) {
        auto targetFn = runtime->lookupFunction(0x136010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D10u; }
        if (ctx->pc != 0x134D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136010_0x136010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D10u; }
        if (ctx->pc != 0x134D10u) { return; }
    }
    ctx->pc = 0x134D10u;
label_134d10:
    // 0x134d10: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x134D10u;
    {
        const bool branch_taken_0x134d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D10u;
            // 0x134d14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d10) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134D18u;
label_134d18:
    // 0x134d18: 0xc04db9c  jal         func_136E70
    ctx->pc = 0x134D18u;
    SET_GPR_U32(ctx, 31, 0x134D20u);
    ctx->pc = 0x136E70u;
    if (runtime->hasFunction(0x136E70u)) {
        auto targetFn = runtime->lookupFunction(0x136E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D20u; }
        if (ctx->pc != 0x134D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136E70_0x136e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D20u; }
        if (ctx->pc != 0x134D20u) { return; }
    }
    ctx->pc = 0x134D20u;
label_134d20:
    // 0x134d20: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x134D20u;
    {
        const bool branch_taken_0x134d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D20u;
            // 0x134d24: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d20) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134D28u;
label_134d28:
    // 0x134d28: 0xc04dcd8  jal         func_137360
    ctx->pc = 0x134D28u;
    SET_GPR_U32(ctx, 31, 0x134D30u);
    ctx->pc = 0x137360u;
    if (runtime->hasFunction(0x137360u)) {
        auto targetFn = runtime->lookupFunction(0x137360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D30u; }
        if (ctx->pc != 0x134D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137360_0x137360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D30u; }
        if (ctx->pc != 0x134D30u) { return; }
    }
    ctx->pc = 0x134D30u;
label_134d30:
    // 0x134d30: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x134D30u;
    {
        const bool branch_taken_0x134d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D30u;
            // 0x134d34: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d30) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134D38u;
label_134d38:
    // 0x134d38: 0xc04de58  jal         func_137960
    ctx->pc = 0x134D38u;
    SET_GPR_U32(ctx, 31, 0x134D40u);
    ctx->pc = 0x137960u;
    if (runtime->hasFunction(0x137960u)) {
        auto targetFn = runtime->lookupFunction(0x137960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D40u; }
        if (ctx->pc != 0x134D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137960_0x137960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134D40u; }
        if (ctx->pc != 0x134D40u) { return; }
    }
    ctx->pc = 0x134D40u;
label_134d40:
    // 0x134d40: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x134D40u;
    {
        const bool branch_taken_0x134d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D40u;
            // 0x134d44: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d40) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134D48u;
label_134d48:
    // 0x134d48: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x134d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134d4c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x134d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x134d50: 0x30840e77  andi        $a0, $a0, 0xE77
    ctx->pc = 0x134d50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3703);
    // 0x134d54: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x134D54u;
    {
        const bool branch_taken_0x134d54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134d54) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134D5Cu;
    // 0x134d5c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x134d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x134d60: 0x5083001e  beql        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x134D60u;
    {
        const bool branch_taken_0x134d60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134d60) {
            ctx->pc = 0x134D64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134D60u;
            // 0x134d64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134DDCu;
            goto label_134ddc;
        }
    }
    ctx->pc = 0x134D68u;
    // 0x134d68: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x134d68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x134d6c: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x134D6Cu;
    {
        const bool branch_taken_0x134d6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134d6c) {
            ctx->pc = 0x134D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134D6Cu;
            // 0x134d70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134DCCu;
            goto label_134dcc;
        }
    }
    ctx->pc = 0x134D74u;
    // 0x134d74: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x134d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x134d78: 0x50830010  beql        $a0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x134D78u;
    {
        const bool branch_taken_0x134d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134d78) {
            ctx->pc = 0x134D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134D78u;
            // 0x134d7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134DBCu;
            goto label_134dbc;
        }
    }
    ctx->pc = 0x134D80u;
    // 0x134d80: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x134d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x134d84: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x134D84u;
    {
        const bool branch_taken_0x134d84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x134d84) {
            ctx->pc = 0x134D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134D84u;
            // 0x134d88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134DACu;
            goto label_134dac;
        }
    }
    ctx->pc = 0x134D8Cu;
    // 0x134d8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x134d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x134d90: 0x10820015  beq         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x134D90u;
    {
        const bool branch_taken_0x134d90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134d90) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134D98u;
    // 0x134d98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x134d9c: 0x10820012  beq         $a0, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x134D9Cu;
    {
        const bool branch_taken_0x134d9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x134d9c) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134DA4u;
    // 0x134da4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x134DA4u;
    {
        const bool branch_taken_0x134da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x134da4) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134DACu;
label_134dac:
    // 0x134dac: 0xc04df8c  jal         func_137E30
    ctx->pc = 0x134DACu;
    SET_GPR_U32(ctx, 31, 0x134DB4u);
    ctx->pc = 0x137E30u;
    if (runtime->hasFunction(0x137E30u)) {
        auto targetFn = runtime->lookupFunction(0x137E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DB4u; }
        if (ctx->pc != 0x134DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137E30_0x137e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DB4u; }
        if (ctx->pc != 0x134DB4u) { return; }
    }
    ctx->pc = 0x134DB4u;
label_134db4:
    // 0x134db4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x134DB4u;
    {
        const bool branch_taken_0x134db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DB4u;
            // 0x134db8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134db4) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134DBCu;
label_134dbc:
    // 0x134dbc: 0xc04dc10  jal         func_137040
    ctx->pc = 0x134DBCu;
    SET_GPR_U32(ctx, 31, 0x134DC4u);
    ctx->pc = 0x137040u;
    if (runtime->hasFunction(0x137040u)) {
        auto targetFn = runtime->lookupFunction(0x137040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DC4u; }
        if (ctx->pc != 0x134DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137040_0x137040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DC4u; }
        if (ctx->pc != 0x134DC4u) { return; }
    }
    ctx->pc = 0x134DC4u;
label_134dc4:
    // 0x134dc4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x134DC4u;
    {
        const bool branch_taken_0x134dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DC4u;
            // 0x134dc8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dc4) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134DCCu;
label_134dcc:
    // 0x134dcc: 0xc04dd4c  jal         func_137530
    ctx->pc = 0x134DCCu;
    SET_GPR_U32(ctx, 31, 0x134DD4u);
    ctx->pc = 0x137530u;
    if (runtime->hasFunction(0x137530u)) {
        auto targetFn = runtime->lookupFunction(0x137530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DD4u; }
        if (ctx->pc != 0x134DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137530_0x137530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DD4u; }
        if (ctx->pc != 0x134DD4u) { return; }
    }
    ctx->pc = 0x134DD4u;
label_134dd4:
    // 0x134dd4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x134DD4u;
    {
        const bool branch_taken_0x134dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DD4u;
            // 0x134dd8: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dd4) {
            ctx->pc = 0x134DE8u;
            goto label_134de8;
        }
    }
    ctx->pc = 0x134DDCu;
label_134ddc:
    // 0x134ddc: 0xc04df14  jal         func_137C50
    ctx->pc = 0x134DDCu;
    SET_GPR_U32(ctx, 31, 0x134DE4u);
    ctx->pc = 0x137C50u;
    if (runtime->hasFunction(0x137C50u)) {
        auto targetFn = runtime->lookupFunction(0x137C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DE4u; }
        if (ctx->pc != 0x134DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00137C50_0x137c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134DE4u; }
        if (ctx->pc != 0x134DE4u) { return; }
    }
    ctx->pc = 0x134DE4u;
label_134de4:
    // 0x134de4: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x134de4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_134de8:
    // 0x134de8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x134de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_134dec:
    // 0x134dec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x134decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134df0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x134df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x134df4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x134df4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x134df8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x134df8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134dfc: 0x3e00008  jr          $ra
    ctx->pc = 0x134DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x134E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DFCu;
            // 0x134e00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x134E04u;
    // 0x134e04: 0x0  nop
    ctx->pc = 0x134e04u;
    // NOP
    // 0x134e08: 0x0  nop
    ctx->pc = 0x134e08u;
    // NOP
    // 0x134e0c: 0x0  nop
    ctx->pc = 0x134e0cu;
    // NOP
}
