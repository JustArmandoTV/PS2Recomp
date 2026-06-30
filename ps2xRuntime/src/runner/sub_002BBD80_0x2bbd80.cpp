#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002BBD80
// Address: 0x2bbd80 - 0x2bbef0
void sub_002BBD80_0x2bbd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBD80_0x2bbd80");
#endif

    switch (ctx->pc) {
        case 0x2bbd80u: goto label_2bbd80;
        case 0x2bbd84u: goto label_2bbd84;
        case 0x2bbd88u: goto label_2bbd88;
        case 0x2bbd8cu: goto label_2bbd8c;
        case 0x2bbd90u: goto label_2bbd90;
        case 0x2bbd94u: goto label_2bbd94;
        case 0x2bbd98u: goto label_2bbd98;
        case 0x2bbd9cu: goto label_2bbd9c;
        case 0x2bbda0u: goto label_2bbda0;
        case 0x2bbda4u: goto label_2bbda4;
        case 0x2bbda8u: goto label_2bbda8;
        case 0x2bbdacu: goto label_2bbdac;
        case 0x2bbdb0u: goto label_2bbdb0;
        case 0x2bbdb4u: goto label_2bbdb4;
        case 0x2bbdb8u: goto label_2bbdb8;
        case 0x2bbdbcu: goto label_2bbdbc;
        case 0x2bbdc0u: goto label_2bbdc0;
        case 0x2bbdc4u: goto label_2bbdc4;
        case 0x2bbdc8u: goto label_2bbdc8;
        case 0x2bbdccu: goto label_2bbdcc;
        case 0x2bbdd0u: goto label_2bbdd0;
        case 0x2bbdd4u: goto label_2bbdd4;
        case 0x2bbdd8u: goto label_2bbdd8;
        case 0x2bbddcu: goto label_2bbddc;
        case 0x2bbde0u: goto label_2bbde0;
        case 0x2bbde4u: goto label_2bbde4;
        case 0x2bbde8u: goto label_2bbde8;
        case 0x2bbdecu: goto label_2bbdec;
        case 0x2bbdf0u: goto label_2bbdf0;
        case 0x2bbdf4u: goto label_2bbdf4;
        case 0x2bbdf8u: goto label_2bbdf8;
        case 0x2bbdfcu: goto label_2bbdfc;
        case 0x2bbe00u: goto label_2bbe00;
        case 0x2bbe04u: goto label_2bbe04;
        case 0x2bbe08u: goto label_2bbe08;
        case 0x2bbe0cu: goto label_2bbe0c;
        case 0x2bbe10u: goto label_2bbe10;
        case 0x2bbe14u: goto label_2bbe14;
        case 0x2bbe18u: goto label_2bbe18;
        case 0x2bbe1cu: goto label_2bbe1c;
        case 0x2bbe20u: goto label_2bbe20;
        case 0x2bbe24u: goto label_2bbe24;
        case 0x2bbe28u: goto label_2bbe28;
        case 0x2bbe2cu: goto label_2bbe2c;
        case 0x2bbe30u: goto label_2bbe30;
        case 0x2bbe34u: goto label_2bbe34;
        case 0x2bbe38u: goto label_2bbe38;
        case 0x2bbe3cu: goto label_2bbe3c;
        case 0x2bbe40u: goto label_2bbe40;
        case 0x2bbe44u: goto label_2bbe44;
        case 0x2bbe48u: goto label_2bbe48;
        case 0x2bbe4cu: goto label_2bbe4c;
        case 0x2bbe50u: goto label_2bbe50;
        case 0x2bbe54u: goto label_2bbe54;
        case 0x2bbe58u: goto label_2bbe58;
        case 0x2bbe5cu: goto label_2bbe5c;
        case 0x2bbe60u: goto label_2bbe60;
        case 0x2bbe64u: goto label_2bbe64;
        case 0x2bbe68u: goto label_2bbe68;
        case 0x2bbe6cu: goto label_2bbe6c;
        case 0x2bbe70u: goto label_2bbe70;
        case 0x2bbe74u: goto label_2bbe74;
        case 0x2bbe78u: goto label_2bbe78;
        case 0x2bbe7cu: goto label_2bbe7c;
        case 0x2bbe80u: goto label_2bbe80;
        case 0x2bbe84u: goto label_2bbe84;
        case 0x2bbe88u: goto label_2bbe88;
        case 0x2bbe8cu: goto label_2bbe8c;
        case 0x2bbe90u: goto label_2bbe90;
        case 0x2bbe94u: goto label_2bbe94;
        case 0x2bbe98u: goto label_2bbe98;
        case 0x2bbe9cu: goto label_2bbe9c;
        case 0x2bbea0u: goto label_2bbea0;
        case 0x2bbea4u: goto label_2bbea4;
        case 0x2bbea8u: goto label_2bbea8;
        case 0x2bbeacu: goto label_2bbeac;
        case 0x2bbeb0u: goto label_2bbeb0;
        case 0x2bbeb4u: goto label_2bbeb4;
        case 0x2bbeb8u: goto label_2bbeb8;
        case 0x2bbebcu: goto label_2bbebc;
        case 0x2bbec0u: goto label_2bbec0;
        case 0x2bbec4u: goto label_2bbec4;
        case 0x2bbec8u: goto label_2bbec8;
        case 0x2bbeccu: goto label_2bbecc;
        case 0x2bbed0u: goto label_2bbed0;
        case 0x2bbed4u: goto label_2bbed4;
        case 0x2bbed8u: goto label_2bbed8;
        case 0x2bbedcu: goto label_2bbedc;
        case 0x2bbee0u: goto label_2bbee0;
        case 0x2bbee4u: goto label_2bbee4;
        case 0x2bbee8u: goto label_2bbee8;
        case 0x2bbeecu: goto label_2bbeec;
        default: break;
    }

    ctx->pc = 0x2bbd80u;

label_2bbd80:
    // 0x2bbd80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bbd84:
    // 0x2bbd84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bbd88:
    // 0x2bbd88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bbd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bbd8c:
    // 0x2bbd8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bbd90:
    // 0x2bbd90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bbd94:
    // 0x2bbd94: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_2bbd98:
    if (ctx->pc == 0x2BBD98u) {
        ctx->pc = 0x2BBD98u;
            // 0x2bbd98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD9Cu;
        goto label_2bbd9c;
    }
    ctx->pc = 0x2BBD94u;
    {
        const bool branch_taken_0x2bbd94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD94u;
            // 0x2bbd98: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbd94) {
            ctx->pc = 0x2BBDD8u;
            goto label_2bbdd8;
        }
    }
    ctx->pc = 0x2BBD9Cu;
label_2bbd9c:
    // 0x2bbd9c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2bbda0:
    if (ctx->pc == 0x2BBDA0u) {
        ctx->pc = 0x2BBDA0u;
            // 0x2bbda0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BBDA4u;
        goto label_2bbda4;
    }
    ctx->pc = 0x2BBD9Cu;
    {
        const bool branch_taken_0x2bbd9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbd9c) {
            ctx->pc = 0x2BBDA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBD9Cu;
            // 0x2bbda0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBDC4u;
            goto label_2bbdc4;
        }
    }
    ctx->pc = 0x2BBDA4u;
label_2bbda4:
    // 0x2bbda4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2bbda8:
    if (ctx->pc == 0x2BBDA8u) {
        ctx->pc = 0x2BBDACu;
        goto label_2bbdac;
    }
    ctx->pc = 0x2BBDA4u;
    {
        const bool branch_taken_0x2bbda4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbda4) {
            ctx->pc = 0x2BBDC0u;
            goto label_2bbdc0;
        }
    }
    ctx->pc = 0x2BBDACu;
label_2bbdac:
    // 0x2bbdac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2bbdacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2bbdb0:
    // 0x2bbdb0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bbdb4:
    if (ctx->pc == 0x2BBDB4u) {
        ctx->pc = 0x2BBDB8u;
        goto label_2bbdb8;
    }
    ctx->pc = 0x2BBDB0u;
    {
        const bool branch_taken_0x2bbdb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbdb0) {
            ctx->pc = 0x2BBDC0u;
            goto label_2bbdc0;
        }
    }
    ctx->pc = 0x2BBDB8u;
label_2bbdb8:
    // 0x2bbdb8: 0xc0400a8  jal         func_1002A0
label_2bbdbc:
    if (ctx->pc == 0x2BBDBCu) {
        ctx->pc = 0x2BBDC0u;
        goto label_2bbdc0;
    }
    ctx->pc = 0x2BBDB8u;
    SET_GPR_U32(ctx, 31, 0x2BBDC0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDC0u; }
        if (ctx->pc != 0x2BBDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDC0u; }
        if (ctx->pc != 0x2BBDC0u) { return; }
    }
    ctx->pc = 0x2BBDC0u;
label_2bbdc0:
    // 0x2bbdc0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bbdc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bbdc4:
    // 0x2bbdc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bbdc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bbdc8:
    // 0x2bbdc8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bbdcc:
    if (ctx->pc == 0x2BBDCCu) {
        ctx->pc = 0x2BBDCCu;
            // 0x2bbdcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBDD0u;
        goto label_2bbdd0;
    }
    ctx->pc = 0x2BBDC8u;
    {
        const bool branch_taken_0x2bbdc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bbdc8) {
            ctx->pc = 0x2BBDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDC8u;
            // 0x2bbdcc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBDDCu;
            goto label_2bbddc;
        }
    }
    ctx->pc = 0x2BBDD0u;
label_2bbdd0:
    // 0x2bbdd0: 0xc0400a8  jal         func_1002A0
label_2bbdd4:
    if (ctx->pc == 0x2BBDD4u) {
        ctx->pc = 0x2BBDD4u;
            // 0x2bbdd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBDD8u;
        goto label_2bbdd8;
    }
    ctx->pc = 0x2BBDD0u;
    SET_GPR_U32(ctx, 31, 0x2BBDD8u);
    ctx->pc = 0x2BBDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDD0u;
            // 0x2bbdd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDD8u; }
        if (ctx->pc != 0x2BBDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBDD8u; }
        if (ctx->pc != 0x2BBDD8u) { return; }
    }
    ctx->pc = 0x2BBDD8u;
label_2bbdd8:
    // 0x2bbdd8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bbdd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bbddc:
    // 0x2bbddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbde0:
    // 0x2bbde0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bbde0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bbde4:
    // 0x2bbde4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bbde4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bbde8:
    // 0x2bbde8: 0x3e00008  jr          $ra
label_2bbdec:
    if (ctx->pc == 0x2BBDECu) {
        ctx->pc = 0x2BBDECu;
            // 0x2bbdec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BBDF0u;
        goto label_2bbdf0;
    }
    ctx->pc = 0x2BBDE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBDE8u;
            // 0x2bbdec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBDF0u;
label_2bbdf0:
    // 0x2bbdf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bbdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2bbdf4:
    // 0x2bbdf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bbdf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2bbdf8:
    // 0x2bbdf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2bbdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2bbdfc:
    // 0x2bbdfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2bbdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2bbe00:
    // 0x2bbe00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bbe00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bbe04:
    // 0x2bbe04: 0x12200031  beqz        $s1, . + 4 + (0x31 << 2)
label_2bbe08:
    if (ctx->pc == 0x2BBE08u) {
        ctx->pc = 0x2BBE08u;
            // 0x2bbe08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE0Cu;
        goto label_2bbe0c;
    }
    ctx->pc = 0x2BBE04u;
    {
        const bool branch_taken_0x2bbe04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE04u;
            // 0x2bbe08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe04) {
            ctx->pc = 0x2BBECCu;
            goto label_2bbecc;
        }
    }
    ctx->pc = 0x2BBE0Cu;
label_2bbe0c:
    // 0x2bbe0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2bbe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2bbe10:
    // 0x2bbe10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2bbe10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2bbe14:
    // 0x2bbe14: 0x246354b0  addiu       $v1, $v1, 0x54B0
    ctx->pc = 0x2bbe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21680));
label_2bbe18:
    // 0x2bbe18: 0x244254f0  addiu       $v0, $v0, 0x54F0
    ctx->pc = 0x2bbe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21744));
label_2bbe1c:
    // 0x2bbe1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2bbe1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2bbe20:
    // 0x2bbe20: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bbe24:
    // 0x2bbe24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bbe24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bbe28:
    // 0x2bbe28: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2bbe28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2bbe2c:
    // 0x2bbe2c: 0x320f809  jalr        $t9
label_2bbe30:
    if (ctx->pc == 0x2BBE30u) {
        ctx->pc = 0x2BBE34u;
        goto label_2bbe34;
    }
    ctx->pc = 0x2BBE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BBE34u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BBE34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE34u; }
            if (ctx->pc != 0x2BBE34u) { return; }
        }
        }
    }
    ctx->pc = 0x2BBE34u;
label_2bbe34:
    // 0x2bbe34: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_2bbe38:
    if (ctx->pc == 0x2BBE38u) {
        ctx->pc = 0x2BBE38u;
            // 0x2bbe38: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x2BBE3Cu;
        goto label_2bbe3c;
    }
    ctx->pc = 0x2BBE34u;
    {
        const bool branch_taken_0x2bbe34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe34) {
            ctx->pc = 0x2BBE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE34u;
            // 0x2bbe38: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBEB8u;
            goto label_2bbeb8;
        }
    }
    ctx->pc = 0x2BBE3Cu;
label_2bbe3c:
    // 0x2bbe3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bbe40:
    // 0x2bbe40: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2bbe40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_2bbe44:
    // 0x2bbe44: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x2bbe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
label_2bbe48:
    // 0x2bbe48: 0x246326b0  addiu       $v1, $v1, 0x26B0
    ctx->pc = 0x2bbe48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9904));
label_2bbe4c:
    // 0x2bbe4c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bbe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bbe50:
    // 0x2bbe50: 0x26220050  addiu       $v0, $s1, 0x50
    ctx->pc = 0x2bbe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_2bbe54:
    // 0x2bbe54: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2bbe58:
    if (ctx->pc == 0x2BBE58u) {
        ctx->pc = 0x2BBE58u;
            // 0x2bbe58: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2BBE5Cu;
        goto label_2bbe5c;
    }
    ctx->pc = 0x2BBE54u;
    {
        const bool branch_taken_0x2bbe54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBE58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE54u;
            // 0x2bbe58: 0xae230054  sw          $v1, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbe54) {
            ctx->pc = 0x2BBE90u;
            goto label_2bbe90;
        }
    }
    ctx->pc = 0x2BBE5Cu;
label_2bbe5c:
    // 0x2bbe5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bbe60:
    // 0x2bbe60: 0x24422660  addiu       $v0, $v0, 0x2660
    ctx->pc = 0x2bbe60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9824));
label_2bbe64:
    // 0x2bbe64: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x2bbe64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_2bbe68:
    // 0x2bbe68: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2bbe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2bbe6c:
    // 0x2bbe6c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2bbe70:
    if (ctx->pc == 0x2BBE70u) {
        ctx->pc = 0x2BBE74u;
        goto label_2bbe74;
    }
    ctx->pc = 0x2BBE6Cu;
    {
        const bool branch_taken_0x2bbe6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe6c) {
            ctx->pc = 0x2BBE90u;
            goto label_2bbe90;
        }
    }
    ctx->pc = 0x2BBE74u;
label_2bbe74:
    // 0x2bbe74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2bbe78:
    if (ctx->pc == 0x2BBE78u) {
        ctx->pc = 0x2BBE78u;
            // 0x2bbe78: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x2BBE7Cu;
        goto label_2bbe7c;
    }
    ctx->pc = 0x2BBE74u;
    {
        const bool branch_taken_0x2bbe74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe74) {
            ctx->pc = 0x2BBE78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE74u;
            // 0x2bbe78: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBE90u;
            goto label_2bbe90;
        }
    }
    ctx->pc = 0x2BBE7Cu;
label_2bbe7c:
    // 0x2bbe7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2bbe7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2bbe80:
    // 0x2bbe80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2bbe80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2bbe84:
    // 0x2bbe84: 0x320f809  jalr        $t9
label_2bbe88:
    if (ctx->pc == 0x2BBE88u) {
        ctx->pc = 0x2BBE88u;
            // 0x2bbe88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2BBE8Cu;
        goto label_2bbe8c;
    }
    ctx->pc = 0x2BBE84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2BBE8Cu);
        ctx->pc = 0x2BBE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBE84u;
            // 0x2bbe88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2BBE8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2BBE8Cu; }
            if (ctx->pc != 0x2BBE8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2BBE8Cu;
label_2bbe8c:
    // 0x2bbe8c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x2bbe8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_2bbe90:
    // 0x2bbe90: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_2bbe94:
    if (ctx->pc == 0x2BBE94u) {
        ctx->pc = 0x2BBE98u;
        goto label_2bbe98;
    }
    ctx->pc = 0x2BBE90u;
    {
        const bool branch_taken_0x2bbe90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2bbe90) {
            ctx->pc = 0x2BBEB4u;
            goto label_2bbeb4;
        }
    }
    ctx->pc = 0x2BBE98u;
label_2bbe98:
    // 0x2bbe98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bbe9c:
    // 0x2bbe9c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2bbe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_2bbea0:
    // 0x2bbea0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2bbea4:
    if (ctx->pc == 0x2BBEA4u) {
        ctx->pc = 0x2BBEA4u;
            // 0x2bbea4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2BBEA8u;
        goto label_2bbea8;
    }
    ctx->pc = 0x2BBEA0u;
    {
        const bool branch_taken_0x2bbea0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBEA0u;
            // 0x2bbea4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bbea0) {
            ctx->pc = 0x2BBEB4u;
            goto label_2bbeb4;
        }
    }
    ctx->pc = 0x2BBEA8u;
label_2bbea8:
    // 0x2bbea8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2bbea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2bbeac:
    // 0x2bbeac: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2bbeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_2bbeb0:
    // 0x2bbeb0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2bbeb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2bbeb4:
    // 0x2bbeb4: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2bbeb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2bbeb8:
    // 0x2bbeb8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2bbeb8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2bbebc:
    // 0x2bbebc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2bbec0:
    if (ctx->pc == 0x2BBEC0u) {
        ctx->pc = 0x2BBEC0u;
            // 0x2bbec0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBEC4u;
        goto label_2bbec4;
    }
    ctx->pc = 0x2BBEBCu;
    {
        const bool branch_taken_0x2bbebc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2bbebc) {
            ctx->pc = 0x2BBEC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBEBCu;
            // 0x2bbec0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2BBED0u;
            goto label_2bbed0;
        }
    }
    ctx->pc = 0x2BBEC4u;
label_2bbec4:
    // 0x2bbec4: 0xc0400a8  jal         func_1002A0
label_2bbec8:
    if (ctx->pc == 0x2BBEC8u) {
        ctx->pc = 0x2BBEC8u;
            // 0x2bbec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2BBECCu;
        goto label_2bbecc;
    }
    ctx->pc = 0x2BBEC4u;
    SET_GPR_U32(ctx, 31, 0x2BBECCu);
    ctx->pc = 0x2BBEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBEC4u;
            // 0x2bbec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBECCu; }
        if (ctx->pc != 0x2BBECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2BBECCu; }
        if (ctx->pc != 0x2BBECCu) { return; }
    }
    ctx->pc = 0x2BBECCu;
label_2bbecc:
    // 0x2bbecc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2bbeccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bbed0:
    // 0x2bbed0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bbed4:
    // 0x2bbed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2bbed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2bbed8:
    // 0x2bbed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2bbed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2bbedc:
    // 0x2bbedc: 0x3e00008  jr          $ra
label_2bbee0:
    if (ctx->pc == 0x2BBEE0u) {
        ctx->pc = 0x2BBEE0u;
            // 0x2bbee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2BBEE4u;
        goto label_2bbee4;
    }
    ctx->pc = 0x2BBEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2BBEDCu;
            // 0x2bbee0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2BBEE4u;
label_2bbee4:
    // 0x2bbee4: 0x0  nop
    ctx->pc = 0x2bbee4u;
    // NOP
label_2bbee8:
    // 0x2bbee8: 0x0  nop
    ctx->pc = 0x2bbee8u;
    // NOP
label_2bbeec:
    // 0x2bbeec: 0x0  nop
    ctx->pc = 0x2bbeecu;
    // NOP
}
