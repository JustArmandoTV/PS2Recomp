#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002EBCA0
// Address: 0x2ebca0 - 0x2ebee0
void sub_002EBCA0_0x2ebca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBCA0_0x2ebca0");
#endif

    switch (ctx->pc) {
        case 0x2ebd40u: goto label_2ebd40;
        case 0x2ebd48u: goto label_2ebd48;
        case 0x2ebd7cu: goto label_2ebd7c;
        case 0x2ebde8u: goto label_2ebde8;
        case 0x2ebdf0u: goto label_2ebdf0;
        case 0x2ebe24u: goto label_2ebe24;
        case 0x2ebe40u: goto label_2ebe40;
        case 0x2ebe64u: goto label_2ebe64;
        case 0x2ebe88u: goto label_2ebe88;
        case 0x2ebeacu: goto label_2ebeac;
        case 0x2ebec8u: goto label_2ebec8;
        default: break;
    }

    ctx->pc = 0x2ebca0u;

    // 0x2ebca0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2ebca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2ebca4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebca8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2ebca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2ebcac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x2ebcacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x2ebcb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ebcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ebcb4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2ebcb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ebcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ebcbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ebcbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ebcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ebcc4: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x2ebcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2ebcc8: 0x8c680ea4  lw          $t0, 0xEA4($v1)
    ctx->pc = 0x2ebcc8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
    // 0x2ebccc: 0x8c460968  lw          $a2, 0x968($v0)
    ctx->pc = 0x2ebcccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
    // 0x2ebcd0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2ebcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ebcd4: 0x10c3006e  beq         $a2, $v1, . + 4 + (0x6E << 2)
    ctx->pc = 0x2EBCD4u;
    {
        const bool branch_taken_0x2ebcd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x2EBCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCD4u;
            // 0x2ebcd8: 0x24510318  addiu       $s1, $v0, 0x318 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcd4) {
            ctx->pc = 0x2EBE90u;
            goto label_2ebe90;
        }
    }
    ctx->pc = 0x2EBCDCu;
    // 0x2ebcdc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2ebcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2ebce0: 0x10c20062  beq         $a2, $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2EBCE0u;
    {
        const bool branch_taken_0x2ebce0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebce0) {
            ctx->pc = 0x2EBE6Cu;
            goto label_2ebe6c;
        }
    }
    ctx->pc = 0x2EBCE8u;
    // 0x2ebce8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2ebce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ebcec: 0x10c20056  beq         $a2, $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2EBCECu;
    {
        const bool branch_taken_0x2ebcec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebcec) {
            ctx->pc = 0x2EBE48u;
            goto label_2ebe48;
        }
    }
    ctx->pc = 0x2EBCF4u;
    // 0x2ebcf4: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x2ebcf4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ebcf8: 0x50ca0022  beql        $a2, $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x2EBCF8u;
    {
        const bool branch_taken_0x2ebcf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 10));
        if (branch_taken_0x2ebcf8) {
            ctx->pc = 0x2EBCFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCF8u;
            // 0x2ebcfc: 0x325000ff  andi        $s0, $s2, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EBD84u;
            goto label_2ebd84;
        }
    }
    ctx->pc = 0x2EBD00u;
    // 0x2ebd00: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2ebd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ebd04: 0x10c20006  beq         $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBD04u;
    {
        const bool branch_taken_0x2ebd04 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebd04) {
            ctx->pc = 0x2EBD20u;
            goto label_2ebd20;
        }
    }
    ctx->pc = 0x2EBD0Cu;
    // 0x2ebd0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ebd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ebd10: 0x10c20003  beq         $a2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBD10u;
    {
        const bool branch_taken_0x2ebd10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebd10) {
            ctx->pc = 0x2EBD20u;
            goto label_2ebd20;
        }
    }
    ctx->pc = 0x2EBD18u;
    // 0x2ebd18: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2EBD18u;
    {
        const bool branch_taken_0x2ebd18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD18u;
            // 0x2ebd1c: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd18) {
            ctx->pc = 0x2EBEB4u;
            goto label_2ebeb4;
        }
    }
    ctx->pc = 0x2EBD20u;
label_2ebd20:
    // 0x2ebd20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebd24: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebd24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd28: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebd28u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebd2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ebd2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd30: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2ebd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2ebd34: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebd34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd38: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBD38u;
    SET_GPR_U32(ctx, 31, 0x2EBD40u);
    ctx->pc = 0x2EBD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD38u;
            // 0x2ebd3c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD40u; }
        if (ctx->pc != 0x2EBD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD40u; }
        if (ctx->pc != 0x2EBD40u) { return; }
    }
    ctx->pc = 0x2EBD40u;
label_2ebd40:
    // 0x2ebd40: 0xc040180  jal         func_100600
    ctx->pc = 0x2EBD40u;
    SET_GPR_U32(ctx, 31, 0x2EBD48u);
    ctx->pc = 0x2EBD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD40u;
            // 0x2ebd44: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD48u; }
        if (ctx->pc != 0x2EBD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD48u; }
        if (ctx->pc != 0x2EBD48u) { return; }
    }
    ctx->pc = 0x2EBD48u;
label_2ebd48:
    // 0x2ebd48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ebd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd4c: 0x5080005f  beql        $a0, $zero, . + 4 + (0x5F << 2)
    ctx->pc = 0x2EBD4Cu;
    {
        const bool branch_taken_0x2ebd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebd4c) {
            ctx->pc = 0x2EBD50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD4Cu;
            // 0x2ebd50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2EBECCu;
            goto label_2ebecc;
        }
    }
    ctx->pc = 0x2EBD54u;
    // 0x2ebd54: 0x324900ff  andi        $t1, $s2, 0xFF
    ctx->pc = 0x2ebd54u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2ebd58: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ebd58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2ebd5c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ebd5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd60: 0x34459570  ori         $a1, $v0, 0x9570
    ctx->pc = 0x2ebd60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38256);
    // 0x2ebd64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ebd64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ebd68: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2ebd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ebd6c: 0x24084d40  addiu       $t0, $zero, 0x4D40
    ctx->pc = 0x2ebd6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19776));
    // 0x2ebd70: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x2ebd70u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebd74: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x2EBD74u;
    SET_GPR_U32(ctx, 31, 0x2EBD7Cu);
    ctx->pc = 0x2EBD78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD74u;
            // 0x2ebd78: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD7Cu; }
        if (ctx->pc != 0x2EBD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD7Cu; }
        if (ctx->pc != 0x2EBD7Cu) { return; }
    }
    ctx->pc = 0x2EBD7Cu;
label_2ebd7c:
    // 0x2ebd7c: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2EBD7Cu;
    {
        const bool branch_taken_0x2ebd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebd7c) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBD84u;
label_2ebd84:
    // 0x2ebd84: 0x24020048  addiu       $v0, $zero, 0x48
    ctx->pc = 0x2ebd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2ebd88: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2ebd88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2ebd8c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2ebd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ebd90: 0x90630461  lbu         $v1, 0x461($v1)
    ctx->pc = 0x2ebd90u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1121)));
    // 0x2ebd94: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2EBD94u;
    {
        const bool branch_taken_0x2ebd94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebd94) {
            ctx->pc = 0x2EBDC8u;
            goto label_2ebdc8;
        }
    }
    ctx->pc = 0x2EBD9Cu;
    // 0x2ebd9c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x2ebd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2ebda0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2EBDA0u;
    {
        const bool branch_taken_0x2ebda0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebda0) {
            ctx->pc = 0x2EBDC8u;
            goto label_2ebdc8;
        }
    }
    ctx->pc = 0x2EBDA8u;
    // 0x2ebda8: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x2ebda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x2ebdac: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBDACu;
    {
        const bool branch_taken_0x2ebdac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebdac) {
            ctx->pc = 0x2EBDC8u;
            goto label_2ebdc8;
        }
    }
    ctx->pc = 0x2EBDB4u;
    // 0x2ebdb4: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x2ebdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2ebdb8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2EBDB8u;
    {
        const bool branch_taken_0x2ebdb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ebdb8) {
            ctx->pc = 0x2EBDC8u;
            goto label_2ebdc8;
        }
    }
    ctx->pc = 0x2EBDC0u;
    // 0x2ebdc0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2EBDC0u;
    {
        const bool branch_taken_0x2ebdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDC0u;
            // 0x2ebdc4: 0x3c0200af  lui         $v0, 0xAF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebdc0) {
            ctx->pc = 0x2EBE2Cu;
            goto label_2ebe2c;
        }
    }
    ctx->pc = 0x2EBDC8u;
label_2ebdc8:
    // 0x2ebdc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebdcc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebdccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdd0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebdd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebdd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2ebdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdd8: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2ebdd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2ebddc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebde0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBDE0u;
    SET_GPR_U32(ctx, 31, 0x2EBDE8u);
    ctx->pc = 0x2EBDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDE0u;
            // 0x2ebde4: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDE8u; }
        if (ctx->pc != 0x2EBDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDE8u; }
        if (ctx->pc != 0x2EBDE8u) { return; }
    }
    ctx->pc = 0x2EBDE8u;
label_2ebde8:
    // 0x2ebde8: 0xc040180  jal         func_100600
    ctx->pc = 0x2EBDE8u;
    SET_GPR_U32(ctx, 31, 0x2EBDF0u);
    ctx->pc = 0x2EBDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBDE8u;
            // 0x2ebdec: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDF0u; }
        if (ctx->pc != 0x2EBDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBDF0u; }
        if (ctx->pc != 0x2EBDF0u) { return; }
    }
    ctx->pc = 0x2EBDF0u;
label_2ebdf0:
    // 0x2ebdf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ebdf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebdf4: 0x10800034  beqz        $a0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2EBDF4u;
    {
        const bool branch_taken_0x2ebdf4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebdf4) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBDFCu;
    // 0x2ebdfc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2ebdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x2ebe00: 0x324a00ff  andi        $t2, $s2, 0xFF
    ctx->pc = 0x2ebe00u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x2ebe04: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2ebe04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe08: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2ebe08u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe0c: 0x34459570  ori         $a1, $v0, 0x9570
    ctx->pc = 0x2ebe0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38256);
    // 0x2ebe10: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x2ebe10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2ebe14: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ebe14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ebe18: 0x24084d40  addiu       $t0, $zero, 0x4D40
    ctx->pc = 0x2ebe18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 19776));
    // 0x2ebe1c: 0xc0b9404  jal         func_2E5010
    ctx->pc = 0x2EBE1Cu;
    SET_GPR_U32(ctx, 31, 0x2EBE24u);
    ctx->pc = 0x2EBE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE1Cu;
            // 0x2ebe20: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE24u; }
        if (ctx->pc != 0x2EBE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE24u; }
        if (ctx->pc != 0x2EBE24u) { return; }
    }
    ctx->pc = 0x2EBE24u;
label_2ebe24:
    // 0x2ebe24: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2EBE24u;
    {
        const bool branch_taken_0x2ebe24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebe24) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBE2Cu;
label_2ebe2c:
    // 0x2ebe2c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebe2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe30: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebe30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebe34: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x2ebe34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x2ebe38: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBE38u;
    SET_GPR_U32(ctx, 31, 0x2EBE40u);
    ctx->pc = 0x2EBE3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE38u;
            // 0x2ebe3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE40u; }
        if (ctx->pc != 0x2EBE40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE40u; }
        if (ctx->pc != 0x2EBE40u) { return; }
    }
    ctx->pc = 0x2EBE40u;
label_2ebe40:
    // 0x2ebe40: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2EBE40u;
    {
        const bool branch_taken_0x2ebe40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebe40) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBE48u;
label_2ebe48:
    // 0x2ebe48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebe48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebe4c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebe4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe50: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebe50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebe54: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2ebe54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2ebe58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebe58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe5c: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBE5Cu;
    SET_GPR_U32(ctx, 31, 0x2EBE64u);
    ctx->pc = 0x2EBE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE5Cu;
            // 0x2ebe60: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE64u; }
        if (ctx->pc != 0x2EBE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE64u; }
        if (ctx->pc != 0x2EBE64u) { return; }
    }
    ctx->pc = 0x2EBE64u;
label_2ebe64:
    // 0x2ebe64: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2EBE64u;
    {
        const bool branch_taken_0x2ebe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebe64) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBE6Cu;
label_2ebe6c:
    // 0x2ebe6c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebe6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebe70: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebe70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe74: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebe74u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebe78: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2ebe78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2ebe7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebe7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe80: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBE80u;
    SET_GPR_U32(ctx, 31, 0x2EBE88u);
    ctx->pc = 0x2EBE84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBE80u;
            // 0x2ebe84: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE88u; }
        if (ctx->pc != 0x2EBE88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBE88u; }
        if (ctx->pc != 0x2EBE88u) { return; }
    }
    ctx->pc = 0x2EBE88u;
label_2ebe88:
    // 0x2ebe88: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2EBE88u;
    {
        const bool branch_taken_0x2ebe88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebe88) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBE90u;
label_2ebe90:
    // 0x2ebe90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2ebe90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2ebe94: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebe94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebe98: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebe98u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebe9c: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2ebe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2ebea0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2ebea0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebea4: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBEA4u;
    SET_GPR_U32(ctx, 31, 0x2EBEACu);
    ctx->pc = 0x2EBEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBEA4u;
            // 0x2ebea8: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBEACu; }
        if (ctx->pc != 0x2EBEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBEACu; }
        if (ctx->pc != 0x2EBEACu) { return; }
    }
    ctx->pc = 0x2EBEACu;
label_2ebeac:
    // 0x2ebeac: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2EBEACu;
    {
        const bool branch_taken_0x2ebeac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ebeac) {
            ctx->pc = 0x2EBEC8u;
            goto label_2ebec8;
        }
    }
    ctx->pc = 0x2EBEB4u;
label_2ebeb4:
    // 0x2ebeb4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2ebeb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebeb8: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x2ebeb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
    // 0x2ebebc: 0x24050031  addiu       $a1, $zero, 0x31
    ctx->pc = 0x2ebebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x2ebec0: 0xc0bb404  jal         func_2ED010
    ctx->pc = 0x2EBEC0u;
    SET_GPR_U32(ctx, 31, 0x2EBEC8u);
    ctx->pc = 0x2EBEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBEC0u;
            // 0x2ebec4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED010u;
    if (runtime->hasFunction(0x2ED010u)) {
        auto targetFn = runtime->lookupFunction(0x2ED010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBEC8u; }
        if (ctx->pc != 0x2EBEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED010_0x2ed010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBEC8u; }
        if (ctx->pc != 0x2EBEC8u) { return; }
    }
    ctx->pc = 0x2EBEC8u;
label_2ebec8:
    // 0x2ebec8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2ebec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebecc:
    // 0x2ebecc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ebeccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ebed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ebed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ebed8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBED8u;
            // 0x2ebedc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2EBEE0u;
}
