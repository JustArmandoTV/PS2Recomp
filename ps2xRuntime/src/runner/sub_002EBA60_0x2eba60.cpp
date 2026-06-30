#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EBA60
// Address: 0x2eba60 - 0x2ebca0
void sub_002EBA60_0x2eba60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBA60_0x2eba60");
#endif

    switch (ctx->pc) {
        case 0x2ebb00u: goto label_2ebb00;
        case 0x2ebb08u: goto label_2ebb08;
        case 0x2ebb3cu: goto label_2ebb3c;
        case 0x2ebba8u: goto label_2ebba8;
        case 0x2ebbb0u: goto label_2ebbb0;
        case 0x2ebbe4u: goto label_2ebbe4;
        case 0x2ebc00u: goto label_2ebc00;
        case 0x2ebc24u: goto label_2ebc24;
        case 0x2ebc48u: goto label_2ebc48;
        case 0x2ebc6cu: goto label_2ebc6c;
        case 0x2ebc88u: goto label_2ebc88;
        default: break;
    }

    ctx->pc = 0x2eba60u;

    // 0x2eba60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2eba60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2eba64: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2eba64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2eba68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2eba68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2eba6c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2eba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2eba70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2eba70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2eba74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2eba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2eba78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2eba78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2eba7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2eba7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2eba80: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x2eba80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
    // 0x2eba84: 0x8c480ea4  lw          $t0, 0xEA4($v0)
    ctx->pc = 0x2eba84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
    // 0x2eba88: 0x24d10318  addiu       $s1, $a2, 0x318
    ctx->pc = 0x2eba88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 792));
    // 0x2eba8c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2eba8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2eba90: 0x8cc60968  lw          $a2, 0x968($a2)
    ctx->pc = 0x2eba90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 2408)));
    // 0x2eba94: 0x10c3006e  beq         $a2, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x2EBA94u;
    {
        const bool branch_taken_0x2eba94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EBA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBA94u;
            // 0x2eba98: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2eba94) {
            ctx->pc = 0x2EBC50u;
            goto label_2ebc50;
        }
    }
    ctx->pc = 0x2EBA9Cu;
    // 0x2eba9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2eba9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ebaa0: 0x10c20062  beq         $a2, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2EBAA0u;
    {
        const bool branch_taken_0x2ebaa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebaa0) {
            ctx->pc = 0x2EBC2Cu;
            goto label_2ebc2c;
        }
    }
    ctx->pc = 0x2EBAA8u;
    // 0x2ebaa8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ebaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ebaac: 0x10c20056  beq         $a2, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2EBAACu;
    {
        const bool branch_taken_0x2ebaac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebaac) {
            ctx->pc = 0x2EBC08u;
            goto label_2ebc08;
        }
    }
    ctx->pc = 0x2EBAB4u;
    // 0x2ebab4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2ebab4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ebab8: 0x50ca0022  beql        $a2, $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x2EBAB8u;
    {
        const bool branch_taken_0x2ebab8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ebab8) {
            ctx->pc = 0x2EBABCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBAB8u;
            // 0x2ebabc: 0x325000ff  andi        $s0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EBB44u;
            goto label_2ebb44;
        }
    }
    ctx->pc = 0x2EBAC0u;
    // 0x2ebac0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2ebac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ebac4: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBAC4u;
    {
        const bool branch_taken_0x2ebac4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebac4) {
            ctx->pc = 0x2EBAE0u;
            goto label_2ebae0;
        }
    }
    ctx->pc = 0x2EBACCu;
    // 0x2ebacc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebaccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebad0: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBAD0u;
    {
        const bool branch_taken_0x2ebad0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebad0) {
            ctx->pc = 0x2EBAE0u;
            goto label_2ebae0;
        }
    }
    ctx->pc = 0x2EBAD8u;
    // 0x2ebad8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2EBAD8u;
    {
        const bool branch_taken_0x2ebad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBAD8u;
            // 0x2ebadc: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebad8) {
            ctx->pc = 0x2EBC74u;
            goto label_2ebc74;
        }
    }
    ctx->pc = 0x2EBAE0u;
label_2ebae0:
    // 0x2ebae0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebae0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebae4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebae8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebae8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebaec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ebaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaf0: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2ebaf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2ebaf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebaf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebaf8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBAF8u;
    SET_GPR_U32(ctx, 31, 0x2EBB00u);
    ctx->pc = 0x2EBAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBAF8u;
            // 0x2ebafc: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB00u; }
        if (ctx->pc != 0x2EBB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB00u; }
        if (ctx->pc != 0x2EBB00u) { return; }
    }
    ctx->pc = 0x2EBB00u;
label_2ebb00:
    // 0x2ebb00: 0xc040180  jal         func_100600
    ctx->pc = 0x2EBB00u;
    SET_GPR_U32(ctx, 31, 0x2EBB08u);
    ctx->pc = 0x2EBB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB00u;
            // 0x2ebb04: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB08u; }
        if (ctx->pc != 0x2EBB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB08u; }
        if (ctx->pc != 0x2EBB08u) { return; }
    }
    ctx->pc = 0x2EBB08u;
label_2ebb08:
    // 0x2ebb08: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ebb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb0c: 0x5080005f  beql        $a0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x2EBB0Cu;
    {
        const bool branch_taken_0x2ebb0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebb0c) {
            ctx->pc = 0x2EBB10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB0Cu;
            // 0x2ebb10: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EBC8Cu;
            goto label_2ebc8c;
        }
    }
    ctx->pc = 0x2EBB14u;
    // 0x2ebb14: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x2ebb14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2ebb18: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ebb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2ebb1c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ebb1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb20: 0x34459570  ori         $a1, $v0, 0x9570
    ctx->pc = 0x2ebb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38256);
    // 0x2ebb24: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ebb24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ebb28: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2ebb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ebb2c: 0x24084d40  addiu       $t0, $zero, 0x4D40
    ctx->pc = 0x2ebb2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19776));
    // 0x2ebb30: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2ebb30u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb34: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x2EBB34u;
    SET_GPR_U32(ctx, 31, 0x2EBB3Cu);
    ctx->pc = 0x2EBB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB34u;
            // 0x2ebb38: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB3Cu; }
        if (ctx->pc != 0x2EBB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBB3Cu; }
        if (ctx->pc != 0x2EBB3Cu) { return; }
    }
    ctx->pc = 0x2EBB3Cu;
label_2ebb3c:
    // 0x2ebb3c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2EBB3Cu;
    {
        const bool branch_taken_0x2ebb3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebb3c) {
            ctx->pc = 0x2EBC88u;
            goto label_2ebc88;
        }
    }
    ctx->pc = 0x2EBB44u;
label_2ebb44:
    // 0x2ebb44: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2ebb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2ebb48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ebb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ebb4c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ebb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ebb50: 0x90630461  lbu         $v1, 0x461($v1)
    ctx->pc = 0x2ebb50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1121)));
    // 0x2ebb54: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EBB54u;
    {
        const bool branch_taken_0x2ebb54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebb54) {
            ctx->pc = 0x2EBB88u;
            goto label_2ebb88;
        }
    }
    ctx->pc = 0x2EBB5Cu;
    // 0x2ebb5c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2ebb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2ebb60: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBB60u;
    {
        const bool branch_taken_0x2ebb60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebb60) {
            ctx->pc = 0x2EBB88u;
            goto label_2ebb88;
        }
    }
    ctx->pc = 0x2EBB68u;
    // 0x2ebb68: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2ebb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2ebb6c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBB6Cu;
    {
        const bool branch_taken_0x2ebb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebb6c) {
            ctx->pc = 0x2EBB88u;
            goto label_2ebb88;
        }
    }
    ctx->pc = 0x2EBB74u;
    // 0x2ebb74: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2ebb74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2ebb78: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBB78u;
    {
        const bool branch_taken_0x2ebb78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebb78) {
            ctx->pc = 0x2EBB88u;
            goto label_2ebb88;
        }
    }
    ctx->pc = 0x2EBB80u;
    // 0x2ebb80: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2EBB80u;
    {
        const bool branch_taken_0x2ebb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBB80u;
            // 0x2ebb84: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebb80) {
            ctx->pc = 0x2EBBECu;
            goto label_2ebbec;
        }
    }
    ctx->pc = 0x2EBB88u;
label_2ebb88:
    // 0x2ebb88: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebb88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebb8c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebb8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb90: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebb90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebb94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ebb94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebb98: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2ebb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2ebb9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebb9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebba0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBBA0u;
    SET_GPR_U32(ctx, 31, 0x2EBBA8u);
    ctx->pc = 0x2EBBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBA0u;
            // 0x2ebba4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBA8u; }
        if (ctx->pc != 0x2EBBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBA8u; }
        if (ctx->pc != 0x2EBBA8u) { return; }
    }
    ctx->pc = 0x2EBBA8u;
label_2ebba8:
    // 0x2ebba8: 0xc040180  jal         func_100600
    ctx->pc = 0x2EBBA8u;
    SET_GPR_U32(ctx, 31, 0x2EBBB0u);
    ctx->pc = 0x2EBBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBA8u;
            // 0x2ebbac: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBB0u; }
        if (ctx->pc != 0x2EBBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBB0u; }
        if (ctx->pc != 0x2EBBB0u) { return; }
    }
    ctx->pc = 0x2EBBB0u;
label_2ebbb0:
    // 0x2ebbb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ebbb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbb4: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EBBB4u;
    {
        const bool branch_taken_0x2ebbb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebbb4) {
            ctx->pc = 0x2EBC88u;
            goto label_2ebc88;
        }
    }
    ctx->pc = 0x2EBBBCu;
    // 0x2ebbbc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ebbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2ebbc0: 0x324a00ff  andi        $t2, $s2, 0xFF
    ctx->pc = 0x2ebbc0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2ebbc4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ebbc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbc8: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2ebbc8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbcc: 0x34459570  ori         $a1, $v0, 0x9570
    ctx->pc = 0x2ebbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38256);
    // 0x2ebbd0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2ebbd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ebbd4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ebbd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ebbd8: 0x24084d40  addiu       $t0, $zero, 0x4D40
    ctx->pc = 0x2ebbd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19776));
    // 0x2ebbdc: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x2EBBDCu;
    SET_GPR_U32(ctx, 31, 0x2EBBE4u);
    ctx->pc = 0x2EBBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBDCu;
            // 0x2ebbe0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBE4u; }
        if (ctx->pc != 0x2EBBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBBE4u; }
        if (ctx->pc != 0x2EBBE4u) { return; }
    }
    ctx->pc = 0x2EBBE4u;
label_2ebbe4:
    // 0x2ebbe4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2EBBE4u;
    {
        const bool branch_taken_0x2ebbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebbe4) {
            ctx->pc = 0x2EBC88u;
            goto label_2ebc88;
        }
    }
    ctx->pc = 0x2EBBECu;
label_2ebbec:
    // 0x2ebbec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebbecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebbf0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebbf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebbf4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2ebbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x2ebbf8: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBBF8u;
    SET_GPR_U32(ctx, 31, 0x2EBC00u);
    ctx->pc = 0x2EBBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBBF8u;
            // 0x2ebbfc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC00u; }
        if (ctx->pc != 0x2EBC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC00u; }
        if (ctx->pc != 0x2EBC00u) { return; }
    }
    ctx->pc = 0x2EBC00u;
label_2ebc00:
    // 0x2ebc00: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2EBC00u;
    {
        const bool branch_taken_0x2ebc00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc00) {
            ctx->pc = 0x2EBC88u;
            goto label_2ebc88;
        }
    }
    ctx->pc = 0x2EBC08u;
label_2ebc08:
    // 0x2ebc08: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebc0c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebc0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc10: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebc10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebc14: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2ebc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2ebc18: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebc18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc1c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBC1Cu;
    SET_GPR_U32(ctx, 31, 0x2EBC24u);
    ctx->pc = 0x2EBC20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC1Cu;
            // 0x2ebc20: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC24u; }
        if (ctx->pc != 0x2EBC24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC24u; }
        if (ctx->pc != 0x2EBC24u) { return; }
    }
    ctx->pc = 0x2EBC24u;
label_2ebc24:
    // 0x2ebc24: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EBC24u;
    {
        const bool branch_taken_0x2ebc24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc24) {
            ctx->pc = 0x2EBC88u;
            goto label_2ebc88;
        }
    }
    ctx->pc = 0x2EBC2Cu;
label_2ebc2c:
    // 0x2ebc2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebc30: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebc30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc34: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebc34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebc38: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2ebc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2ebc3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebc3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc40: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBC40u;
    SET_GPR_U32(ctx, 31, 0x2EBC48u);
    ctx->pc = 0x2EBC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC40u;
            // 0x2ebc44: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC48u; }
        if (ctx->pc != 0x2EBC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC48u; }
        if (ctx->pc != 0x2EBC48u) { return; }
    }
    ctx->pc = 0x2EBC48u;
label_2ebc48:
    // 0x2ebc48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EBC48u;
    {
        const bool branch_taken_0x2ebc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc48) {
            ctx->pc = 0x2EBC88u;
            goto label_2ebc88;
        }
    }
    ctx->pc = 0x2EBC50u;
label_2ebc50:
    // 0x2ebc50: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebc54: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebc54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc58: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebc58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebc5c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2ebc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2ebc60: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebc60u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc64: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBC64u;
    SET_GPR_U32(ctx, 31, 0x2EBC6Cu);
    ctx->pc = 0x2EBC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC64u;
            // 0x2ebc68: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC6Cu; }
        if (ctx->pc != 0x2EBC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC6Cu; }
        if (ctx->pc != 0x2EBC6Cu) { return; }
    }
    ctx->pc = 0x2EBC6Cu;
label_2ebc6c:
    // 0x2ebc6c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBC6Cu;
    {
        const bool branch_taken_0x2ebc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebc6c) {
            ctx->pc = 0x2EBC88u;
            goto label_2ebc88;
        }
    }
    ctx->pc = 0x2EBC74u;
label_2ebc74:
    // 0x2ebc74: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebc74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebc78: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebc78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebc7c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x2ebc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2ebc80: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBC80u;
    SET_GPR_U32(ctx, 31, 0x2EBC88u);
    ctx->pc = 0x2EBC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC80u;
            // 0x2ebc84: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC88u; }
        if (ctx->pc != 0x2EBC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBC88u; }
        if (ctx->pc != 0x2EBC88u) { return; }
    }
    ctx->pc = 0x2EBC88u;
label_2ebc88:
    // 0x2ebc88: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ebc88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebc8c:
    // 0x2ebc8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ebc8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebc90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebc94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebc98: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBC98u;
            // 0x2ebc9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBCA0u;
}
