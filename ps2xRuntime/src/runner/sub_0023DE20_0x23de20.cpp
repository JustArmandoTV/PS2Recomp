#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0023DE20
// Address: 0x23de20 - 0x23df90
void sub_0023DE20_0x23de20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DE20_0x23de20");
#endif

    switch (ctx->pc) {
        case 0x23de20u: goto label_23de20;
        case 0x23de24u: goto label_23de24;
        case 0x23de28u: goto label_23de28;
        case 0x23de2cu: goto label_23de2c;
        case 0x23de30u: goto label_23de30;
        case 0x23de34u: goto label_23de34;
        case 0x23de38u: goto label_23de38;
        case 0x23de3cu: goto label_23de3c;
        case 0x23de40u: goto label_23de40;
        case 0x23de44u: goto label_23de44;
        case 0x23de48u: goto label_23de48;
        case 0x23de4cu: goto label_23de4c;
        case 0x23de50u: goto label_23de50;
        case 0x23de54u: goto label_23de54;
        case 0x23de58u: goto label_23de58;
        case 0x23de5cu: goto label_23de5c;
        case 0x23de60u: goto label_23de60;
        case 0x23de64u: goto label_23de64;
        case 0x23de68u: goto label_23de68;
        case 0x23de6cu: goto label_23de6c;
        case 0x23de70u: goto label_23de70;
        case 0x23de74u: goto label_23de74;
        case 0x23de78u: goto label_23de78;
        case 0x23de7cu: goto label_23de7c;
        case 0x23de80u: goto label_23de80;
        case 0x23de84u: goto label_23de84;
        case 0x23de88u: goto label_23de88;
        case 0x23de8cu: goto label_23de8c;
        case 0x23de90u: goto label_23de90;
        case 0x23de94u: goto label_23de94;
        case 0x23de98u: goto label_23de98;
        case 0x23de9cu: goto label_23de9c;
        case 0x23dea0u: goto label_23dea0;
        case 0x23dea4u: goto label_23dea4;
        case 0x23dea8u: goto label_23dea8;
        case 0x23deacu: goto label_23deac;
        case 0x23deb0u: goto label_23deb0;
        case 0x23deb4u: goto label_23deb4;
        case 0x23deb8u: goto label_23deb8;
        case 0x23debcu: goto label_23debc;
        case 0x23dec0u: goto label_23dec0;
        case 0x23dec4u: goto label_23dec4;
        case 0x23dec8u: goto label_23dec8;
        case 0x23deccu: goto label_23decc;
        case 0x23ded0u: goto label_23ded0;
        case 0x23ded4u: goto label_23ded4;
        case 0x23ded8u: goto label_23ded8;
        case 0x23dedcu: goto label_23dedc;
        case 0x23dee0u: goto label_23dee0;
        case 0x23dee4u: goto label_23dee4;
        case 0x23dee8u: goto label_23dee8;
        case 0x23deecu: goto label_23deec;
        case 0x23def0u: goto label_23def0;
        case 0x23def4u: goto label_23def4;
        case 0x23def8u: goto label_23def8;
        case 0x23defcu: goto label_23defc;
        case 0x23df00u: goto label_23df00;
        case 0x23df04u: goto label_23df04;
        case 0x23df08u: goto label_23df08;
        case 0x23df0cu: goto label_23df0c;
        case 0x23df10u: goto label_23df10;
        case 0x23df14u: goto label_23df14;
        case 0x23df18u: goto label_23df18;
        case 0x23df1cu: goto label_23df1c;
        case 0x23df20u: goto label_23df20;
        case 0x23df24u: goto label_23df24;
        case 0x23df28u: goto label_23df28;
        case 0x23df2cu: goto label_23df2c;
        case 0x23df30u: goto label_23df30;
        case 0x23df34u: goto label_23df34;
        case 0x23df38u: goto label_23df38;
        case 0x23df3cu: goto label_23df3c;
        case 0x23df40u: goto label_23df40;
        case 0x23df44u: goto label_23df44;
        case 0x23df48u: goto label_23df48;
        case 0x23df4cu: goto label_23df4c;
        case 0x23df50u: goto label_23df50;
        case 0x23df54u: goto label_23df54;
        case 0x23df58u: goto label_23df58;
        case 0x23df5cu: goto label_23df5c;
        case 0x23df60u: goto label_23df60;
        case 0x23df64u: goto label_23df64;
        case 0x23df68u: goto label_23df68;
        case 0x23df6cu: goto label_23df6c;
        case 0x23df70u: goto label_23df70;
        case 0x23df74u: goto label_23df74;
        case 0x23df78u: goto label_23df78;
        case 0x23df7cu: goto label_23df7c;
        case 0x23df80u: goto label_23df80;
        case 0x23df84u: goto label_23df84;
        case 0x23df88u: goto label_23df88;
        case 0x23df8cu: goto label_23df8c;
        default: break;
    }

    ctx->pc = 0x23de20u;

label_23de20:
    // 0x23de20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x23de20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_23de24:
    // 0x23de24: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23de24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23de28:
    // 0x23de28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x23de28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_23de2c:
    // 0x23de2c: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x23de2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23de30:
    // 0x23de30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x23de30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_23de34:
    // 0x23de34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x23de34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_23de38:
    // 0x23de38: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x23de38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23de3c:
    // 0x23de3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x23de3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_23de40:
    // 0x23de40: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x23de40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_23de44:
    // 0x23de44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x23de44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_23de48:
    // 0x23de48: 0x8c900318  lw          $s0, 0x318($a0)
    ctx->pc = 0x23de48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 792)));
label_23de4c:
    // 0x23de4c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_23de50:
    // 0x23de50: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x23de50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_23de54:
    // 0x23de54: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x23de54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_23de58:
    // 0x23de58: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23de58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23de5c:
    // 0x23de5c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x23de5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_23de60:
    // 0x23de60: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x23de60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_23de64:
    // 0x23de64: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x23de64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_23de68:
    // 0x23de68: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x23de68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23de6c:
    // 0x23de6c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x23de6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_23de70:
    // 0x23de70: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x23de70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_23de74:
    // 0x23de74: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x23de74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_23de78:
    // 0x23de78: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x23de78u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_23de7c:
    // 0x23de7c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_23de80:
    if (ctx->pc == 0x23DE80u) {
        ctx->pc = 0x23DE80u;
            // 0x23de80: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23DE84u;
        goto label_23de84;
    }
    ctx->pc = 0x23DE7Cu;
    {
        const bool branch_taken_0x23de7c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x23DE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DE7Cu;
            // 0x23de80: 0x27b10070  addiu       $s1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de7c) {
            ctx->pc = 0x23DE8Cu;
            goto label_23de8c;
        }
    }
    ctx->pc = 0x23DE84u;
label_23de84:
    // 0x23de84: 0x10000005  b           . + 4 + (0x5 << 2)
label_23de88:
    if (ctx->pc == 0x23DE88u) {
        ctx->pc = 0x23DE88u;
            // 0x23de88: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x23DE8Cu;
        goto label_23de8c;
    }
    ctx->pc = 0x23DE84u;
    {
        const bool branch_taken_0x23de84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23DE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DE84u;
            // 0x23de88: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23de84) {
            ctx->pc = 0x23DE9Cu;
            goto label_23de9c;
        }
    }
    ctx->pc = 0x23DE8Cu;
label_23de8c:
    // 0x23de8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23de8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23de90:
    // 0x23de90: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23de90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23de94:
    // 0x23de94: 0x320f809  jalr        $t9
label_23de98:
    if (ctx->pc == 0x23DE98u) {
        ctx->pc = 0x23DE9Cu;
        goto label_23de9c;
    }
    ctx->pc = 0x23DE94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DE9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DE9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DE9Cu; }
            if (ctx->pc != 0x23DE9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23DE9Cu;
label_23de9c:
    // 0x23de9c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x23de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_23dea0:
    // 0x23dea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23dea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23dea4:
    // 0x23dea4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x23dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_23dea8:
    // 0x23dea8: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x23dea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_23deac:
    // 0x23deac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x23deacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_23deb0:
    // 0x23deb0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x23deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_23deb4:
    // 0x23deb4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x23deb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_23deb8:
    // 0x23deb8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x23deb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_23debc:
    // 0x23debc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x23debcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_23dec0:
    // 0x23dec0: 0x320f809  jalr        $t9
label_23dec4:
    if (ctx->pc == 0x23DEC4u) {
        ctx->pc = 0x23DEC4u;
            // 0x23dec4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x23DEC8u;
        goto label_23dec8;
    }
    ctx->pc = 0x23DEC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DEC8u);
        ctx->pc = 0x23DEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DEC0u;
            // 0x23dec4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DEC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DEC8u; }
            if (ctx->pc != 0x23DEC8u) { return; }
        }
        }
    }
    ctx->pc = 0x23DEC8u;
label_23dec8:
    // 0x23dec8: 0x8e640054  lw          $a0, 0x54($s3)
    ctx->pc = 0x23dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_23decc:
    // 0x23decc: 0x26450024  addiu       $a1, $s2, 0x24
    ctx->pc = 0x23deccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 36));
label_23ded0:
    // 0x23ded0: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x23ded0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_23ded4:
    // 0x23ded4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23ded4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23ded8:
    // 0x23ded8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x23ded8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_23dedc:
    // 0x23dedc: 0x320f809  jalr        $t9
label_23dee0:
    if (ctx->pc == 0x23DEE0u) {
        ctx->pc = 0x23DEE0u;
            // 0x23dee0: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x23DEE4u;
        goto label_23dee4;
    }
    ctx->pc = 0x23DEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DEE4u);
        ctx->pc = 0x23DEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DEDCu;
            // 0x23dee0: 0x27a70070  addiu       $a3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DEE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DEE4u; }
            if (ctx->pc != 0x23DEE4u) { return; }
        }
        }
    }
    ctx->pc = 0x23DEE4u;
label_23dee4:
    // 0x23dee4: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x23dee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_23dee8:
    // 0x23dee8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_23deec:
    if (ctx->pc == 0x23DEECu) {
        ctx->pc = 0x23DEF0u;
        goto label_23def0;
    }
    ctx->pc = 0x23DEE8u;
    {
        const bool branch_taken_0x23dee8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x23dee8) {
            ctx->pc = 0x23DF0Cu;
            goto label_23df0c;
        }
    }
    ctx->pc = 0x23DEF0u;
label_23def0:
    // 0x23def0: 0x8e670070  lw          $a3, 0x70($s3)
    ctx->pc = 0x23def0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_23def4:
    // 0x23def4: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_23def8:
    if (ctx->pc == 0x23DEF8u) {
        ctx->pc = 0x23DEF8u;
            // 0x23def8: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->pc = 0x23DEFCu;
        goto label_23defc;
    }
    ctx->pc = 0x23DEF4u;
    {
        const bool branch_taken_0x23def4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x23def4) {
            ctx->pc = 0x23DEF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DEF4u;
            // 0x23def8: 0x8e640058  lw          $a0, 0x58($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DF04u;
            goto label_23df04;
        }
    }
    ctx->pc = 0x23DEFCu;
label_23defc:
    // 0x23defc: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x23defcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_23df00:
    // 0x23df00: 0x8e640058  lw          $a0, 0x58($s3)
    ctx->pc = 0x23df00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_23df04:
    // 0x23df04: 0xc07fb38  jal         func_1FECE0
label_23df08:
    if (ctx->pc == 0x23DF08u) {
        ctx->pc = 0x23DF08u;
            // 0x23df08: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x23DF0Cu;
        goto label_23df0c;
    }
    ctx->pc = 0x23DF04u;
    SET_GPR_U32(ctx, 31, 0x23DF0Cu);
    ctx->pc = 0x23DF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF04u;
            // 0x23df08: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FECE0u;
    if (runtime->hasFunction(0x1FECE0u)) {
        auto targetFn = runtime->lookupFunction(0x1FECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF0Cu; }
        if (ctx->pc != 0x23DF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FECE0_0x1fece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF0Cu; }
        if (ctx->pc != 0x23DF0Cu) { return; }
    }
    ctx->pc = 0x23DF0Cu;
label_23df0c:
    // 0x23df0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x23df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_23df10:
    // 0x23df10: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x23df10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_23df14:
    // 0x23df14: 0x8c64ea40  lw          $a0, -0x15C0($v1)
    ctx->pc = 0x23df14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961728)));
label_23df18:
    // 0x23df18: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x23df18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_23df1c:
    // 0x23df1c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x23df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_23df20:
    // 0x23df20: 0x54a30006  bnel        $a1, $v1, . + 4 + (0x6 << 2)
label_23df24:
    if (ctx->pc == 0x23DF24u) {
        ctx->pc = 0x23DF24u;
            // 0x23df24: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->pc = 0x23DF28u;
        goto label_23df28;
    }
    ctx->pc = 0x23DF20u;
    {
        const bool branch_taken_0x23df20 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x23df20) {
            ctx->pc = 0x23DF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF20u;
            // 0x23df24: 0x8fa40078  lw          $a0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DF3Cu;
            goto label_23df3c;
        }
    }
    ctx->pc = 0x23DF28u;
label_23df28:
    // 0x23df28: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x23df28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23df2c:
    // 0x23df2c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x23df2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_23df30:
    // 0x23df30: 0x320f809  jalr        $t9
label_23df34:
    if (ctx->pc == 0x23DF34u) {
        ctx->pc = 0x23DF38u;
        goto label_23df38;
    }
    ctx->pc = 0x23DF30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23DF38u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23DF38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23DF38u; }
            if (ctx->pc != 0x23DF38u) { return; }
        }
        }
    }
    ctx->pc = 0x23DF38u;
label_23df38:
    // 0x23df38: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x23df38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_23df3c:
    // 0x23df3c: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x23df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_23df40:
    // 0x23df40: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x23df40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_23df44:
    // 0x23df44: 0x5460000b  bnel        $v1, $zero, . + 4 + (0xB << 2)
label_23df48:
    if (ctx->pc == 0x23DF48u) {
        ctx->pc = 0x23DF48u;
            // 0x23df48: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x23DF4Cu;
        goto label_23df4c;
    }
    ctx->pc = 0x23DF44u;
    {
        const bool branch_taken_0x23df44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x23df44) {
            ctx->pc = 0x23DF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF44u;
            // 0x23df48: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23DF74u;
            goto label_23df74;
        }
    }
    ctx->pc = 0x23DF4Cu;
label_23df4c:
    // 0x23df4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x23df4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_23df50:
    // 0x23df50: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x23df50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_23df54:
    // 0x23df54: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x23df54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_23df58:
    // 0x23df58: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x23df58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_23df5c:
    // 0x23df5c: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x23df5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_23df60:
    // 0x23df60: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x23df60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_23df64:
    // 0x23df64: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x23df64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_23df68:
    // 0x23df68: 0xc0a7ab4  jal         func_29EAD0
label_23df6c:
    if (ctx->pc == 0x23DF6Cu) {
        ctx->pc = 0x23DF6Cu;
            // 0x23df6c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x23DF70u;
        goto label_23df70;
    }
    ctx->pc = 0x23DF68u;
    SET_GPR_U32(ctx, 31, 0x23DF70u);
    ctx->pc = 0x23DF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF68u;
            // 0x23df6c: 0x230c0  sll         $a2, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF70u; }
        if (ctx->pc != 0x23DF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23DF70u; }
        if (ctx->pc != 0x23DF70u) { return; }
    }
    ctx->pc = 0x23DF70u;
label_23df70:
    // 0x23df70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x23df70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23df74:
    // 0x23df74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x23df74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23df78:
    // 0x23df78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x23df78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23df7c:
    // 0x23df7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23df7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23df80:
    // 0x23df80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23df80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23df84:
    // 0x23df84: 0x3e00008  jr          $ra
label_23df88:
    if (ctx->pc == 0x23DF88u) {
        ctx->pc = 0x23DF88u;
            // 0x23df88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x23DF8Cu;
        goto label_23df8c;
    }
    ctx->pc = 0x23DF84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23DF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23DF84u;
            // 0x23df88: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x23DF8Cu;
label_23df8c:
    // 0x23df8c: 0x0  nop
    ctx->pc = 0x23df8cu;
    // NOP
}
