#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004FDB30
// Address: 0x4fdb30 - 0x4fde40
void sub_004FDB30_0x4fdb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004FDB30_0x4fdb30");
#endif

    switch (ctx->pc) {
        case 0x4fdb30u: goto label_4fdb30;
        case 0x4fdb34u: goto label_4fdb34;
        case 0x4fdb38u: goto label_4fdb38;
        case 0x4fdb3cu: goto label_4fdb3c;
        case 0x4fdb40u: goto label_4fdb40;
        case 0x4fdb44u: goto label_4fdb44;
        case 0x4fdb48u: goto label_4fdb48;
        case 0x4fdb4cu: goto label_4fdb4c;
        case 0x4fdb50u: goto label_4fdb50;
        case 0x4fdb54u: goto label_4fdb54;
        case 0x4fdb58u: goto label_4fdb58;
        case 0x4fdb5cu: goto label_4fdb5c;
        case 0x4fdb60u: goto label_4fdb60;
        case 0x4fdb64u: goto label_4fdb64;
        case 0x4fdb68u: goto label_4fdb68;
        case 0x4fdb6cu: goto label_4fdb6c;
        case 0x4fdb70u: goto label_4fdb70;
        case 0x4fdb74u: goto label_4fdb74;
        case 0x4fdb78u: goto label_4fdb78;
        case 0x4fdb7cu: goto label_4fdb7c;
        case 0x4fdb80u: goto label_4fdb80;
        case 0x4fdb84u: goto label_4fdb84;
        case 0x4fdb88u: goto label_4fdb88;
        case 0x4fdb8cu: goto label_4fdb8c;
        case 0x4fdb90u: goto label_4fdb90;
        case 0x4fdb94u: goto label_4fdb94;
        case 0x4fdb98u: goto label_4fdb98;
        case 0x4fdb9cu: goto label_4fdb9c;
        case 0x4fdba0u: goto label_4fdba0;
        case 0x4fdba4u: goto label_4fdba4;
        case 0x4fdba8u: goto label_4fdba8;
        case 0x4fdbacu: goto label_4fdbac;
        case 0x4fdbb0u: goto label_4fdbb0;
        case 0x4fdbb4u: goto label_4fdbb4;
        case 0x4fdbb8u: goto label_4fdbb8;
        case 0x4fdbbcu: goto label_4fdbbc;
        case 0x4fdbc0u: goto label_4fdbc0;
        case 0x4fdbc4u: goto label_4fdbc4;
        case 0x4fdbc8u: goto label_4fdbc8;
        case 0x4fdbccu: goto label_4fdbcc;
        case 0x4fdbd0u: goto label_4fdbd0;
        case 0x4fdbd4u: goto label_4fdbd4;
        case 0x4fdbd8u: goto label_4fdbd8;
        case 0x4fdbdcu: goto label_4fdbdc;
        case 0x4fdbe0u: goto label_4fdbe0;
        case 0x4fdbe4u: goto label_4fdbe4;
        case 0x4fdbe8u: goto label_4fdbe8;
        case 0x4fdbecu: goto label_4fdbec;
        case 0x4fdbf0u: goto label_4fdbf0;
        case 0x4fdbf4u: goto label_4fdbf4;
        case 0x4fdbf8u: goto label_4fdbf8;
        case 0x4fdbfcu: goto label_4fdbfc;
        case 0x4fdc00u: goto label_4fdc00;
        case 0x4fdc04u: goto label_4fdc04;
        case 0x4fdc08u: goto label_4fdc08;
        case 0x4fdc0cu: goto label_4fdc0c;
        case 0x4fdc10u: goto label_4fdc10;
        case 0x4fdc14u: goto label_4fdc14;
        case 0x4fdc18u: goto label_4fdc18;
        case 0x4fdc1cu: goto label_4fdc1c;
        case 0x4fdc20u: goto label_4fdc20;
        case 0x4fdc24u: goto label_4fdc24;
        case 0x4fdc28u: goto label_4fdc28;
        case 0x4fdc2cu: goto label_4fdc2c;
        case 0x4fdc30u: goto label_4fdc30;
        case 0x4fdc34u: goto label_4fdc34;
        case 0x4fdc38u: goto label_4fdc38;
        case 0x4fdc3cu: goto label_4fdc3c;
        case 0x4fdc40u: goto label_4fdc40;
        case 0x4fdc44u: goto label_4fdc44;
        case 0x4fdc48u: goto label_4fdc48;
        case 0x4fdc4cu: goto label_4fdc4c;
        case 0x4fdc50u: goto label_4fdc50;
        case 0x4fdc54u: goto label_4fdc54;
        case 0x4fdc58u: goto label_4fdc58;
        case 0x4fdc5cu: goto label_4fdc5c;
        case 0x4fdc60u: goto label_4fdc60;
        case 0x4fdc64u: goto label_4fdc64;
        case 0x4fdc68u: goto label_4fdc68;
        case 0x4fdc6cu: goto label_4fdc6c;
        case 0x4fdc70u: goto label_4fdc70;
        case 0x4fdc74u: goto label_4fdc74;
        case 0x4fdc78u: goto label_4fdc78;
        case 0x4fdc7cu: goto label_4fdc7c;
        case 0x4fdc80u: goto label_4fdc80;
        case 0x4fdc84u: goto label_4fdc84;
        case 0x4fdc88u: goto label_4fdc88;
        case 0x4fdc8cu: goto label_4fdc8c;
        case 0x4fdc90u: goto label_4fdc90;
        case 0x4fdc94u: goto label_4fdc94;
        case 0x4fdc98u: goto label_4fdc98;
        case 0x4fdc9cu: goto label_4fdc9c;
        case 0x4fdca0u: goto label_4fdca0;
        case 0x4fdca4u: goto label_4fdca4;
        case 0x4fdca8u: goto label_4fdca8;
        case 0x4fdcacu: goto label_4fdcac;
        case 0x4fdcb0u: goto label_4fdcb0;
        case 0x4fdcb4u: goto label_4fdcb4;
        case 0x4fdcb8u: goto label_4fdcb8;
        case 0x4fdcbcu: goto label_4fdcbc;
        case 0x4fdcc0u: goto label_4fdcc0;
        case 0x4fdcc4u: goto label_4fdcc4;
        case 0x4fdcc8u: goto label_4fdcc8;
        case 0x4fdcccu: goto label_4fdccc;
        case 0x4fdcd0u: goto label_4fdcd0;
        case 0x4fdcd4u: goto label_4fdcd4;
        case 0x4fdcd8u: goto label_4fdcd8;
        case 0x4fdcdcu: goto label_4fdcdc;
        case 0x4fdce0u: goto label_4fdce0;
        case 0x4fdce4u: goto label_4fdce4;
        case 0x4fdce8u: goto label_4fdce8;
        case 0x4fdcecu: goto label_4fdcec;
        case 0x4fdcf0u: goto label_4fdcf0;
        case 0x4fdcf4u: goto label_4fdcf4;
        case 0x4fdcf8u: goto label_4fdcf8;
        case 0x4fdcfcu: goto label_4fdcfc;
        case 0x4fdd00u: goto label_4fdd00;
        case 0x4fdd04u: goto label_4fdd04;
        case 0x4fdd08u: goto label_4fdd08;
        case 0x4fdd0cu: goto label_4fdd0c;
        case 0x4fdd10u: goto label_4fdd10;
        case 0x4fdd14u: goto label_4fdd14;
        case 0x4fdd18u: goto label_4fdd18;
        case 0x4fdd1cu: goto label_4fdd1c;
        case 0x4fdd20u: goto label_4fdd20;
        case 0x4fdd24u: goto label_4fdd24;
        case 0x4fdd28u: goto label_4fdd28;
        case 0x4fdd2cu: goto label_4fdd2c;
        case 0x4fdd30u: goto label_4fdd30;
        case 0x4fdd34u: goto label_4fdd34;
        case 0x4fdd38u: goto label_4fdd38;
        case 0x4fdd3cu: goto label_4fdd3c;
        case 0x4fdd40u: goto label_4fdd40;
        case 0x4fdd44u: goto label_4fdd44;
        case 0x4fdd48u: goto label_4fdd48;
        case 0x4fdd4cu: goto label_4fdd4c;
        case 0x4fdd50u: goto label_4fdd50;
        case 0x4fdd54u: goto label_4fdd54;
        case 0x4fdd58u: goto label_4fdd58;
        case 0x4fdd5cu: goto label_4fdd5c;
        case 0x4fdd60u: goto label_4fdd60;
        case 0x4fdd64u: goto label_4fdd64;
        case 0x4fdd68u: goto label_4fdd68;
        case 0x4fdd6cu: goto label_4fdd6c;
        case 0x4fdd70u: goto label_4fdd70;
        case 0x4fdd74u: goto label_4fdd74;
        case 0x4fdd78u: goto label_4fdd78;
        case 0x4fdd7cu: goto label_4fdd7c;
        case 0x4fdd80u: goto label_4fdd80;
        case 0x4fdd84u: goto label_4fdd84;
        case 0x4fdd88u: goto label_4fdd88;
        case 0x4fdd8cu: goto label_4fdd8c;
        case 0x4fdd90u: goto label_4fdd90;
        case 0x4fdd94u: goto label_4fdd94;
        case 0x4fdd98u: goto label_4fdd98;
        case 0x4fdd9cu: goto label_4fdd9c;
        case 0x4fdda0u: goto label_4fdda0;
        case 0x4fdda4u: goto label_4fdda4;
        case 0x4fdda8u: goto label_4fdda8;
        case 0x4fddacu: goto label_4fddac;
        case 0x4fddb0u: goto label_4fddb0;
        case 0x4fddb4u: goto label_4fddb4;
        case 0x4fddb8u: goto label_4fddb8;
        case 0x4fddbcu: goto label_4fddbc;
        case 0x4fddc0u: goto label_4fddc0;
        case 0x4fddc4u: goto label_4fddc4;
        case 0x4fddc8u: goto label_4fddc8;
        case 0x4fddccu: goto label_4fddcc;
        case 0x4fddd0u: goto label_4fddd0;
        case 0x4fddd4u: goto label_4fddd4;
        case 0x4fddd8u: goto label_4fddd8;
        case 0x4fdddcu: goto label_4fdddc;
        case 0x4fdde0u: goto label_4fdde0;
        case 0x4fdde4u: goto label_4fdde4;
        case 0x4fdde8u: goto label_4fdde8;
        case 0x4fddecu: goto label_4fddec;
        case 0x4fddf0u: goto label_4fddf0;
        case 0x4fddf4u: goto label_4fddf4;
        case 0x4fddf8u: goto label_4fddf8;
        case 0x4fddfcu: goto label_4fddfc;
        case 0x4fde00u: goto label_4fde00;
        case 0x4fde04u: goto label_4fde04;
        case 0x4fde08u: goto label_4fde08;
        case 0x4fde0cu: goto label_4fde0c;
        case 0x4fde10u: goto label_4fde10;
        case 0x4fde14u: goto label_4fde14;
        case 0x4fde18u: goto label_4fde18;
        case 0x4fde1cu: goto label_4fde1c;
        case 0x4fde20u: goto label_4fde20;
        case 0x4fde24u: goto label_4fde24;
        case 0x4fde28u: goto label_4fde28;
        case 0x4fde2cu: goto label_4fde2c;
        case 0x4fde30u: goto label_4fde30;
        case 0x4fde34u: goto label_4fde34;
        case 0x4fde38u: goto label_4fde38;
        case 0x4fde3cu: goto label_4fde3c;
        default: break;
    }

    ctx->pc = 0x4fdb30u;

label_4fdb30:
    // 0x4fdb30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4fdb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4fdb34:
    // 0x4fdb34: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4fdb34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4fdb38:
    // 0x4fdb38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4fdb38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4fdb3c:
    // 0x4fdb3c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x4fdb3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4fdb40:
    // 0x4fdb40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4fdb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4fdb44:
    // 0x4fdb44: 0x34468a92  ori         $a2, $v0, 0x8A92
    ctx->pc = 0x4fdb44u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35474);
label_4fdb48:
    // 0x4fdb48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4fdb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4fdb4c:
    // 0x4fdb4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fdb4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fdb50:
    // 0x4fdb50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fdb50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fdb54:
    // 0x4fdb54: 0xc0aeaf4  jal         func_2BABD0
label_4fdb58:
    if (ctx->pc == 0x4FDB58u) {
        ctx->pc = 0x4FDB58u;
            // 0x4fdb58: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4FDB5Cu;
        goto label_4fdb5c;
    }
    ctx->pc = 0x4FDB54u;
    SET_GPR_U32(ctx, 31, 0x4FDB5Cu);
    ctx->pc = 0x4FDB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDB54u;
            // 0x4fdb58: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BABD0u;
    if (runtime->hasFunction(0x2BABD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BABD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB5Cu; }
        if (ctx->pc != 0x4FDB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BABD0_0x2babd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB5Cu; }
        if (ctx->pc != 0x4FDB5Cu) { return; }
    }
    ctx->pc = 0x4FDB5Cu;
label_4fdb5c:
    // 0x4fdb5c: 0xc13f7f0  jal         func_4FDFC0
label_4fdb60:
    if (ctx->pc == 0x4FDB60u) {
        ctx->pc = 0x4FDB60u;
            // 0x4fdb60: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4FDB64u;
        goto label_4fdb64;
    }
    ctx->pc = 0x4FDB5Cu;
    SET_GPR_U32(ctx, 31, 0x4FDB64u);
    ctx->pc = 0x4FDB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDB5Cu;
            // 0x4fdb60: 0x26240064  addiu       $a0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FDFC0u;
    if (runtime->hasFunction(0x4FDFC0u)) {
        auto targetFn = runtime->lookupFunction(0x4FDFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB64u; }
        if (ctx->pc != 0x4FDB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FDFC0_0x4fdfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB64u; }
        if (ctx->pc != 0x4FDB64u) { return; }
    }
    ctx->pc = 0x4FDB64u;
label_4fdb64:
    // 0x4fdb64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4fdb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4fdb68:
    // 0x4fdb68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fdb68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fdb6c:
    // 0x4fdb6c: 0x24634640  addiu       $v1, $v1, 0x4640
    ctx->pc = 0x4fdb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17984));
label_4fdb70:
    // 0x4fdb70: 0x24424678  addiu       $v0, $v0, 0x4678
    ctx->pc = 0x4fdb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18040));
label_4fdb74:
    // 0x4fdb74: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4fdb74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4fdb78:
    // 0x4fdb78: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4fdb78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4fdb7c:
    // 0x4fdb7c: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4fdb7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4fdb80:
    // 0x4fdb80: 0xc13f7e8  jal         func_4FDFA0
label_4fdb84:
    if (ctx->pc == 0x4FDB84u) {
        ctx->pc = 0x4FDB84u;
            // 0x4fdb84: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x4FDB88u;
        goto label_4fdb88;
    }
    ctx->pc = 0x4FDB80u;
    SET_GPR_U32(ctx, 31, 0x4FDB88u);
    ctx->pc = 0x4FDB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDB80u;
            // 0x4fdb84: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FDFA0u;
    if (runtime->hasFunction(0x4FDFA0u)) {
        auto targetFn = runtime->lookupFunction(0x4FDFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB88u; }
        if (ctx->pc != 0x4FDB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FDFA0_0x4fdfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB88u; }
        if (ctx->pc != 0x4FDB88u) { return; }
    }
    ctx->pc = 0x4FDB88u;
label_4fdb88:
    // 0x4fdb88: 0xc13f7e8  jal         func_4FDFA0
label_4fdb8c:
    if (ctx->pc == 0x4FDB8Cu) {
        ctx->pc = 0x4FDB8Cu;
            // 0x4fdb8c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4FDB90u;
        goto label_4fdb90;
    }
    ctx->pc = 0x4FDB88u;
    SET_GPR_U32(ctx, 31, 0x4FDB90u);
    ctx->pc = 0x4FDB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDB88u;
            // 0x4fdb8c: 0x26240078  addiu       $a0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FDFA0u;
    if (runtime->hasFunction(0x4FDFA0u)) {
        auto targetFn = runtime->lookupFunction(0x4FDFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB90u; }
        if (ctx->pc != 0x4FDB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FDFA0_0x4fdfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB90u; }
        if (ctx->pc != 0x4FDB90u) { return; }
    }
    ctx->pc = 0x4FDB90u;
label_4fdb90:
    // 0x4fdb90: 0xc13f7d0  jal         func_4FDF40
label_4fdb94:
    if (ctx->pc == 0x4FDB94u) {
        ctx->pc = 0x4FDB94u;
            // 0x4fdb94: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x4FDB98u;
        goto label_4fdb98;
    }
    ctx->pc = 0x4FDB90u;
    SET_GPR_U32(ctx, 31, 0x4FDB98u);
    ctx->pc = 0x4FDB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDB90u;
            // 0x4fdb94: 0x26240084  addiu       $a0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FDF40u;
    if (runtime->hasFunction(0x4FDF40u)) {
        auto targetFn = runtime->lookupFunction(0x4FDF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB98u; }
        if (ctx->pc != 0x4FDB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FDF40_0x4fdf40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDB98u; }
        if (ctx->pc != 0x4FDB98u) { return; }
    }
    ctx->pc = 0x4FDB98u;
label_4fdb98:
    // 0x4fdb98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fdb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fdb9c:
    // 0x4fdb9c: 0xc0aeac0  jal         func_2BAB00
label_4fdba0:
    if (ctx->pc == 0x4FDBA0u) {
        ctx->pc = 0x4FDBA0u;
            // 0x4fdba0: 0xae2000dc  sw          $zero, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
        ctx->pc = 0x4FDBA4u;
        goto label_4fdba4;
    }
    ctx->pc = 0x4FDB9Cu;
    SET_GPR_U32(ctx, 31, 0x4FDBA4u);
    ctx->pc = 0x4FDBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDB9Cu;
            // 0x4fdba0: 0xae2000dc  sw          $zero, 0xDC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 220), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAB00u;
    if (runtime->hasFunction(0x2BAB00u)) {
        auto targetFn = runtime->lookupFunction(0x2BAB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDBA4u; }
        if (ctx->pc != 0x4FDBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAB00_0x2bab00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDBA4u; }
        if (ctx->pc != 0x4FDBA4u) { return; }
    }
    ctx->pc = 0x4FDBA4u;
label_4fdba4:
    // 0x4fdba4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4fdba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fdba8:
    // 0x4fdba8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_4fdbac:
    if (ctx->pc == 0x4FDBACu) {
        ctx->pc = 0x4FDBB0u;
        goto label_4fdbb0;
    }
    ctx->pc = 0x4FDBA8u;
    {
        const bool branch_taken_0x4fdba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdba8) {
            ctx->pc = 0x4FDC28u;
            goto label_4fdc28;
        }
    }
    ctx->pc = 0x4FDBB0u;
label_4fdbb0:
    // 0x4fdbb0: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x4fdbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_4fdbb4:
    // 0x4fdbb4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x4fdbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4fdbb8:
    // 0x4fdbb8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4fdbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4fdbbc:
    // 0x4fdbbc: 0xc040138  jal         func_1004E0
label_4fdbc0:
    if (ctx->pc == 0x4FDBC0u) {
        ctx->pc = 0x4FDBC0u;
            // 0x4fdbc0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x4FDBC4u;
        goto label_4fdbc4;
    }
    ctx->pc = 0x4FDBBCu;
    SET_GPR_U32(ctx, 31, 0x4FDBC4u);
    ctx->pc = 0x4FDBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDBBCu;
            // 0x4fdbc0: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDBC4u; }
        if (ctx->pc != 0x4FDBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDBC4u; }
        if (ctx->pc != 0x4FDBC4u) { return; }
    }
    ctx->pc = 0x4FDBC4u;
label_4fdbc4:
    // 0x4fdbc4: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x4fdbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
label_4fdbc8:
    // 0x4fdbc8: 0x3c060050  lui         $a2, 0x50
    ctx->pc = 0x4fdbc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)80 << 16));
label_4fdbcc:
    // 0x4fdbcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4fdbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fdbd0:
    // 0x4fdbd0: 0x24a5de70  addiu       $a1, $a1, -0x2190
    ctx->pc = 0x4fdbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958704));
label_4fdbd4:
    // 0x4fdbd4: 0x24c6d9a0  addiu       $a2, $a2, -0x2660
    ctx->pc = 0x4fdbd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957472));
label_4fdbd8:
    // 0x4fdbd8: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x4fdbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_4fdbdc:
    // 0x4fdbdc: 0xc040840  jal         func_102100
label_4fdbe0:
    if (ctx->pc == 0x4FDBE0u) {
        ctx->pc = 0x4FDBE0u;
            // 0x4fdbe0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDBE4u;
        goto label_4fdbe4;
    }
    ctx->pc = 0x4FDBDCu;
    SET_GPR_U32(ctx, 31, 0x4FDBE4u);
    ctx->pc = 0x4FDBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDBDCu;
            // 0x4fdbe0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDBE4u; }
        if (ctx->pc != 0x4FDBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDBE4u; }
        if (ctx->pc != 0x4FDBE4u) { return; }
    }
    ctx->pc = 0x4FDBE4u;
label_4fdbe4:
    // 0x4fdbe4: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x4fdbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_4fdbe8:
    // 0x4fdbe8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x4fdbe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fdbec:
    // 0x4fdbec: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x4fdbecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4fdbf0:
    // 0x4fdbf0: 0xc13f798  jal         func_4FDE60
label_4fdbf4:
    if (ctx->pc == 0x4FDBF4u) {
        ctx->pc = 0x4FDBF4u;
            // 0x4fdbf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDBF8u;
        goto label_4fdbf8;
    }
    ctx->pc = 0x4FDBF0u;
    SET_GPR_U32(ctx, 31, 0x4FDBF8u);
    ctx->pc = 0x4FDBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDBF0u;
            // 0x4fdbf4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FDE60u;
    if (runtime->hasFunction(0x4FDE60u)) {
        auto targetFn = runtime->lookupFunction(0x4FDE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDBF8u; }
        if (ctx->pc != 0x4FDBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FDE60_0x4fde60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDBF8u; }
        if (ctx->pc != 0x4FDBF8u) { return; }
    }
    ctx->pc = 0x4FDBF8u;
label_4fdbf8:
    // 0x4fdbf8: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4fdbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4fdbfc:
    // 0x4fdbfc: 0xc13f798  jal         func_4FDE60
label_4fdc00:
    if (ctx->pc == 0x4FDC00u) {
        ctx->pc = 0x4FDC00u;
            // 0x4fdc00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDC04u;
        goto label_4fdc04;
    }
    ctx->pc = 0x4FDBFCu;
    SET_GPR_U32(ctx, 31, 0x4FDC04u);
    ctx->pc = 0x4FDC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDBFCu;
            // 0x4fdc00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FDE60u;
    if (runtime->hasFunction(0x4FDE60u)) {
        auto targetFn = runtime->lookupFunction(0x4FDE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDC04u; }
        if (ctx->pc != 0x4FDC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FDE60_0x4fde60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDC04u; }
        if (ctx->pc != 0x4FDC04u) { return; }
    }
    ctx->pc = 0x4FDC04u;
label_4fdc04:
    // 0x4fdc04: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4fdc04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fdc08:
    // 0x4fdc08: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x4fdc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4fdc0c:
    // 0x4fdc0c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x4fdc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4fdc10:
    // 0x4fdc10: 0xc13f790  jal         func_4FDE40
label_4fdc14:
    if (ctx->pc == 0x4FDC14u) {
        ctx->pc = 0x4FDC14u;
            // 0x4fdc14: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->pc = 0x4FDC18u;
        goto label_4fdc18;
    }
    ctx->pc = 0x4FDC10u;
    SET_GPR_U32(ctx, 31, 0x4FDC18u);
    ctx->pc = 0x4FDC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDC10u;
            // 0x4fdc14: 0xafb3005c  sw          $s3, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4FDE40u;
    if (runtime->hasFunction(0x4FDE40u)) {
        auto targetFn = runtime->lookupFunction(0x4FDE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDC18u; }
        if (ctx->pc != 0x4FDC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004FDE40_0x4fde40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDC18u; }
        if (ctx->pc != 0x4FDC18u) { return; }
    }
    ctx->pc = 0x4FDC18u;
label_4fdc18:
    // 0x4fdc18: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4fdc18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4fdc1c:
    // 0x4fdc1c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x4fdc1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4fdc20:
    // 0x4fdc20: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_4fdc24:
    if (ctx->pc == 0x4FDC24u) {
        ctx->pc = 0x4FDC24u;
            // 0x4fdc24: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->pc = 0x4FDC28u;
        goto label_4fdc28;
    }
    ctx->pc = 0x4FDC20u;
    {
        const bool branch_taken_0x4fdc20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FDC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDC20u;
            // 0x4fdc24: 0x26730070  addiu       $s3, $s3, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fdc20) {
            ctx->pc = 0x4FDC08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fdc08;
        }
    }
    ctx->pc = 0x4FDC28u;
label_4fdc28:
    // 0x4fdc28: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fdc28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fdc2c:
    // 0x4fdc2c: 0x244245a0  addiu       $v0, $v0, 0x45A0
    ctx->pc = 0x4fdc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17824));
label_4fdc30:
    // 0x4fdc30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4fdc30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fdc34:
    // 0x4fdc34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fdc34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4fdc38:
    // 0x4fdc38: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4fdc38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4fdc3c:
    // 0x4fdc3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fdc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fdc40:
    // 0x4fdc40: 0x244245d8  addiu       $v0, $v0, 0x45D8
    ctx->pc = 0x4fdc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17880));
label_4fdc44:
    // 0x4fdc44: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4fdc44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4fdc48:
    // 0x4fdc48: 0xc040180  jal         func_100600
label_4fdc4c:
    if (ctx->pc == 0x4FDC4Cu) {
        ctx->pc = 0x4FDC4Cu;
            // 0x4fdc4c: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->pc = 0x4FDC50u;
        goto label_4fdc50;
    }
    ctx->pc = 0x4FDC48u;
    SET_GPR_U32(ctx, 31, 0x4FDC50u);
    ctx->pc = 0x4FDC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDC48u;
            // 0x4fdc4c: 0x24040150  addiu       $a0, $zero, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDC50u; }
        if (ctx->pc != 0x4FDC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDC50u; }
        if (ctx->pc != 0x4FDC50u) { return; }
    }
    ctx->pc = 0x4FDC50u;
label_4fdc50:
    // 0x4fdc50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_4fdc54:
    if (ctx->pc == 0x4FDC54u) {
        ctx->pc = 0x4FDC58u;
        goto label_4fdc58;
    }
    ctx->pc = 0x4FDC50u;
    {
        const bool branch_taken_0x4fdc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdc50) {
            ctx->pc = 0x4FDC68u;
            goto label_4fdc68;
        }
    }
    ctx->pc = 0x4FDC58u;
label_4fdc58:
    // 0x4fdc58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4fdc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4fdc5c:
    // 0x4fdc5c: 0xc146114  jal         func_518450
label_4fdc60:
    if (ctx->pc == 0x4FDC60u) {
        ctx->pc = 0x4FDC60u;
            // 0x4fdc60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDC64u;
        goto label_4fdc64;
    }
    ctx->pc = 0x4FDC5Cu;
    SET_GPR_U32(ctx, 31, 0x4FDC64u);
    ctx->pc = 0x4FDC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDC5Cu;
            // 0x4fdc60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x518450u;
    if (runtime->hasFunction(0x518450u)) {
        auto targetFn = runtime->lookupFunction(0x518450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDC64u; }
        if (ctx->pc != 0x4FDC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00518450_0x518450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDC64u; }
        if (ctx->pc != 0x4FDC64u) { return; }
    }
    ctx->pc = 0x4FDC64u;
label_4fdc64:
    // 0x4fdc64: 0x0  nop
    ctx->pc = 0x4fdc64u;
    // NOP
label_4fdc68:
    // 0x4fdc68: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x4fdc68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_4fdc6c:
    // 0x4fdc6c: 0xac6200e0  sw          $v0, 0xE0($v1)
    ctx->pc = 0x4fdc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 224), GPR_U32(ctx, 2));
label_4fdc70:
    // 0x4fdc70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4fdc70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4fdc74:
    // 0x4fdc74: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x4fdc74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_4fdc78:
    // 0x4fdc78: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_4fdc7c:
    if (ctx->pc == 0x4FDC7Cu) {
        ctx->pc = 0x4FDC7Cu;
            // 0x4fdc7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4FDC80u;
        goto label_4fdc80;
    }
    ctx->pc = 0x4FDC78u;
    {
        const bool branch_taken_0x4fdc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4FDC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDC78u;
            // 0x4fdc7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fdc78) {
            ctx->pc = 0x4FDC48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4fdc48;
        }
    }
    ctx->pc = 0x4FDC80u;
label_4fdc80:
    // 0x4fdc80: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fdc80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fdc84:
    // 0x4fdc84: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4fdc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4fdc88:
    // 0x4fdc88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4fdc88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4fdc8c:
    // 0x4fdc8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4fdc8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4fdc90:
    // 0x4fdc90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fdc90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fdc94:
    // 0x4fdc94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fdc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fdc98:
    // 0x4fdc98: 0x3e00008  jr          $ra
label_4fdc9c:
    if (ctx->pc == 0x4FDC9Cu) {
        ctx->pc = 0x4FDC9Cu;
            // 0x4fdc9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4FDCA0u;
        goto label_4fdca0;
    }
    ctx->pc = 0x4FDC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FDC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDC98u;
            // 0x4fdc9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FDCA0u;
label_4fdca0:
    // 0x4fdca0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4fdca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4fdca4:
    // 0x4fdca4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4fdca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4fdca8:
    // 0x4fdca8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4fdca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4fdcac:
    // 0x4fdcac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4fdcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4fdcb0:
    // 0x4fdcb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4fdcb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4fdcb4:
    // 0x4fdcb4: 0x12200059  beqz        $s1, . + 4 + (0x59 << 2)
label_4fdcb8:
    if (ctx->pc == 0x4FDCB8u) {
        ctx->pc = 0x4FDCB8u;
            // 0x4fdcb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDCBCu;
        goto label_4fdcbc;
    }
    ctx->pc = 0x4FDCB4u;
    {
        const bool branch_taken_0x4fdcb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4FDCB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDCB4u;
            // 0x4fdcb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4fdcb4) {
            ctx->pc = 0x4FDE1Cu;
            goto label_4fde1c;
        }
    }
    ctx->pc = 0x4FDCBCu;
label_4fdcbc:
    // 0x4fdcbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4fdcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4fdcc0:
    // 0x4fdcc0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4fdcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4fdcc4:
    // 0x4fdcc4: 0x24634640  addiu       $v1, $v1, 0x4640
    ctx->pc = 0x4fdcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17984));
label_4fdcc8:
    // 0x4fdcc8: 0x3c050050  lui         $a1, 0x50
    ctx->pc = 0x4fdcc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)80 << 16));
label_4fdccc:
    // 0x4fdccc: 0x24424678  addiu       $v0, $v0, 0x4678
    ctx->pc = 0x4fdcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18040));
label_4fdcd0:
    // 0x4fdcd0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4fdcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4fdcd4:
    // 0x4fdcd4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4fdcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4fdcd8:
    // 0x4fdcd8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4fdcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4fdcdc:
    // 0x4fdcdc: 0xc0407c0  jal         func_101F00
label_4fdce0:
    if (ctx->pc == 0x4FDCE0u) {
        ctx->pc = 0x4FDCE0u;
            // 0x4fdce0: 0x24a5d9a0  addiu       $a1, $a1, -0x2660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957472));
        ctx->pc = 0x4FDCE4u;
        goto label_4fdce4;
    }
    ctx->pc = 0x4FDCDCu;
    SET_GPR_U32(ctx, 31, 0x4FDCE4u);
    ctx->pc = 0x4FDCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDCDCu;
            // 0x4fdce0: 0x24a5d9a0  addiu       $a1, $a1, -0x2660 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDCE4u; }
        if (ctx->pc != 0x4FDCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDCE4u; }
        if (ctx->pc != 0x4FDCE4u) { return; }
    }
    ctx->pc = 0x4FDCE4u;
label_4fdce4:
    // 0x4fdce4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4fdce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4fdce8:
    // 0x4fdce8: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_4fdcec:
    if (ctx->pc == 0x4FDCECu) {
        ctx->pc = 0x4FDCECu;
            // 0x4fdcec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4FDCF0u;
        goto label_4fdcf0;
    }
    ctx->pc = 0x4FDCE8u;
    {
        const bool branch_taken_0x4fdce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdce8) {
            ctx->pc = 0x4FDCECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDCE8u;
            // 0x4fdcec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDD30u;
            goto label_4fdd30;
        }
    }
    ctx->pc = 0x4FDCF0u;
label_4fdcf0:
    // 0x4fdcf0: 0x262200c8  addiu       $v0, $s1, 0xC8
    ctx->pc = 0x4fdcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 200));
label_4fdcf4:
    // 0x4fdcf4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4fdcf8:
    if (ctx->pc == 0x4FDCF8u) {
        ctx->pc = 0x4FDCF8u;
            // 0x4fdcf8: 0x262200a4  addiu       $v0, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->pc = 0x4FDCFCu;
        goto label_4fdcfc;
    }
    ctx->pc = 0x4FDCF4u;
    {
        const bool branch_taken_0x4fdcf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdcf4) {
            ctx->pc = 0x4FDCF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDCF4u;
            // 0x4fdcf8: 0x262200a4  addiu       $v0, $s1, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDD08u;
            goto label_4fdd08;
        }
    }
    ctx->pc = 0x4FDCFCu;
label_4fdcfc:
    // 0x4fdcfc: 0xc07507c  jal         func_1D41F0
label_4fdd00:
    if (ctx->pc == 0x4FDD00u) {
        ctx->pc = 0x4FDD00u;
            // 0x4fdd00: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->pc = 0x4FDD04u;
        goto label_4fdd04;
    }
    ctx->pc = 0x4FDCFCu;
    SET_GPR_U32(ctx, 31, 0x4FDD04u);
    ctx->pc = 0x4FDD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDCFCu;
            // 0x4fdd00: 0x8e2400cc  lw          $a0, 0xCC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD04u; }
        if (ctx->pc != 0x4FDD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD04u; }
        if (ctx->pc != 0x4FDD04u) { return; }
    }
    ctx->pc = 0x4FDD04u;
label_4fdd04:
    // 0x4fdd04: 0x262200a4  addiu       $v0, $s1, 0xA4
    ctx->pc = 0x4fdd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_4fdd08:
    // 0x4fdd08: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4fdd0c:
    if (ctx->pc == 0x4FDD0Cu) {
        ctx->pc = 0x4FDD0Cu;
            // 0x4fdd0c: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->pc = 0x4FDD10u;
        goto label_4fdd10;
    }
    ctx->pc = 0x4FDD08u;
    {
        const bool branch_taken_0x4fdd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd08) {
            ctx->pc = 0x4FDD0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDD08u;
            // 0x4fdd0c: 0x26220084  addiu       $v0, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDD1Cu;
            goto label_4fdd1c;
        }
    }
    ctx->pc = 0x4FDD10u;
label_4fdd10:
    // 0x4fdd10: 0xc07507c  jal         func_1D41F0
label_4fdd14:
    if (ctx->pc == 0x4FDD14u) {
        ctx->pc = 0x4FDD14u;
            // 0x4fdd14: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->pc = 0x4FDD18u;
        goto label_4fdd18;
    }
    ctx->pc = 0x4FDD10u;
    SET_GPR_U32(ctx, 31, 0x4FDD18u);
    ctx->pc = 0x4FDD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDD10u;
            // 0x4fdd14: 0x8e2400a8  lw          $a0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD18u; }
        if (ctx->pc != 0x4FDD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD18u; }
        if (ctx->pc != 0x4FDD18u) { return; }
    }
    ctx->pc = 0x4FDD18u;
label_4fdd18:
    // 0x4fdd18: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4fdd18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4fdd1c:
    // 0x4fdd1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4fdd20:
    if (ctx->pc == 0x4FDD20u) {
        ctx->pc = 0x4FDD24u;
        goto label_4fdd24;
    }
    ctx->pc = 0x4FDD1Cu;
    {
        const bool branch_taken_0x4fdd1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd1c) {
            ctx->pc = 0x4FDD2Cu;
            goto label_4fdd2c;
        }
    }
    ctx->pc = 0x4FDD24u;
label_4fdd24:
    // 0x4fdd24: 0xc07507c  jal         func_1D41F0
label_4fdd28:
    if (ctx->pc == 0x4FDD28u) {
        ctx->pc = 0x4FDD28u;
            // 0x4fdd28: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4FDD2Cu;
        goto label_4fdd2c;
    }
    ctx->pc = 0x4FDD24u;
    SET_GPR_U32(ctx, 31, 0x4FDD2Cu);
    ctx->pc = 0x4FDD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDD24u;
            // 0x4fdd28: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD2Cu; }
        if (ctx->pc != 0x4FDD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD2Cu; }
        if (ctx->pc != 0x4FDD2Cu) { return; }
    }
    ctx->pc = 0x4FDD2Cu;
label_4fdd2c:
    // 0x4fdd2c: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4fdd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4fdd30:
    // 0x4fdd30: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4fdd34:
    if (ctx->pc == 0x4FDD34u) {
        ctx->pc = 0x4FDD34u;
            // 0x4fdd34: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4FDD38u;
        goto label_4fdd38;
    }
    ctx->pc = 0x4FDD30u;
    {
        const bool branch_taken_0x4fdd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd30) {
            ctx->pc = 0x4FDD34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDD30u;
            // 0x4fdd34: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDD60u;
            goto label_4fdd60;
        }
    }
    ctx->pc = 0x4FDD38u;
label_4fdd38:
    // 0x4fdd38: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4fdd3c:
    if (ctx->pc == 0x4FDD3Cu) {
        ctx->pc = 0x4FDD40u;
        goto label_4fdd40;
    }
    ctx->pc = 0x4FDD38u;
    {
        const bool branch_taken_0x4fdd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd38) {
            ctx->pc = 0x4FDD5Cu;
            goto label_4fdd5c;
        }
    }
    ctx->pc = 0x4FDD40u;
label_4fdd40:
    // 0x4fdd40: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4fdd44:
    if (ctx->pc == 0x4FDD44u) {
        ctx->pc = 0x4FDD48u;
        goto label_4fdd48;
    }
    ctx->pc = 0x4FDD40u;
    {
        const bool branch_taken_0x4fdd40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd40) {
            ctx->pc = 0x4FDD5Cu;
            goto label_4fdd5c;
        }
    }
    ctx->pc = 0x4FDD48u;
label_4fdd48:
    // 0x4fdd48: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4fdd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4fdd4c:
    // 0x4fdd4c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4fdd50:
    if (ctx->pc == 0x4FDD50u) {
        ctx->pc = 0x4FDD54u;
        goto label_4fdd54;
    }
    ctx->pc = 0x4FDD4Cu;
    {
        const bool branch_taken_0x4fdd4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd4c) {
            ctx->pc = 0x4FDD5Cu;
            goto label_4fdd5c;
        }
    }
    ctx->pc = 0x4FDD54u;
label_4fdd54:
    // 0x4fdd54: 0xc0400a8  jal         func_1002A0
label_4fdd58:
    if (ctx->pc == 0x4FDD58u) {
        ctx->pc = 0x4FDD5Cu;
        goto label_4fdd5c;
    }
    ctx->pc = 0x4FDD54u;
    SET_GPR_U32(ctx, 31, 0x4FDD5Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD5Cu; }
        if (ctx->pc != 0x4FDD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD5Cu; }
        if (ctx->pc != 0x4FDD5Cu) { return; }
    }
    ctx->pc = 0x4FDD5Cu;
label_4fdd5c:
    // 0x4fdd5c: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4fdd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4fdd60:
    // 0x4fdd60: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4fdd64:
    if (ctx->pc == 0x4FDD64u) {
        ctx->pc = 0x4FDD64u;
            // 0x4fdd64: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4FDD68u;
        goto label_4fdd68;
    }
    ctx->pc = 0x4FDD60u;
    {
        const bool branch_taken_0x4fdd60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd60) {
            ctx->pc = 0x4FDD64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDD60u;
            // 0x4fdd64: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDD90u;
            goto label_4fdd90;
        }
    }
    ctx->pc = 0x4FDD68u;
label_4fdd68:
    // 0x4fdd68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4fdd6c:
    if (ctx->pc == 0x4FDD6Cu) {
        ctx->pc = 0x4FDD70u;
        goto label_4fdd70;
    }
    ctx->pc = 0x4FDD68u;
    {
        const bool branch_taken_0x4fdd68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd68) {
            ctx->pc = 0x4FDD8Cu;
            goto label_4fdd8c;
        }
    }
    ctx->pc = 0x4FDD70u;
label_4fdd70:
    // 0x4fdd70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4fdd74:
    if (ctx->pc == 0x4FDD74u) {
        ctx->pc = 0x4FDD78u;
        goto label_4fdd78;
    }
    ctx->pc = 0x4FDD70u;
    {
        const bool branch_taken_0x4fdd70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd70) {
            ctx->pc = 0x4FDD8Cu;
            goto label_4fdd8c;
        }
    }
    ctx->pc = 0x4FDD78u;
label_4fdd78:
    // 0x4fdd78: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4fdd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4fdd7c:
    // 0x4fdd7c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4fdd80:
    if (ctx->pc == 0x4FDD80u) {
        ctx->pc = 0x4FDD84u;
        goto label_4fdd84;
    }
    ctx->pc = 0x4FDD7Cu;
    {
        const bool branch_taken_0x4fdd7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd7c) {
            ctx->pc = 0x4FDD8Cu;
            goto label_4fdd8c;
        }
    }
    ctx->pc = 0x4FDD84u;
label_4fdd84:
    // 0x4fdd84: 0xc0400a8  jal         func_1002A0
label_4fdd88:
    if (ctx->pc == 0x4FDD88u) {
        ctx->pc = 0x4FDD8Cu;
        goto label_4fdd8c;
    }
    ctx->pc = 0x4FDD84u;
    SET_GPR_U32(ctx, 31, 0x4FDD8Cu);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD8Cu; }
        if (ctx->pc != 0x4FDD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDD8Cu; }
        if (ctx->pc != 0x4FDD8Cu) { return; }
    }
    ctx->pc = 0x4FDD8Cu;
label_4fdd8c:
    // 0x4fdd8c: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4fdd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4fdd90:
    // 0x4fdd90: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4fdd94:
    if (ctx->pc == 0x4FDD94u) {
        ctx->pc = 0x4FDD98u;
        goto label_4fdd98;
    }
    ctx->pc = 0x4FDD90u;
    {
        const bool branch_taken_0x4fdd90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdd90) {
            ctx->pc = 0x4FDDACu;
            goto label_4fddac;
        }
    }
    ctx->pc = 0x4FDD98u;
label_4fdd98:
    // 0x4fdd98: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4fdd98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4fdd9c:
    // 0x4fdd9c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4fdd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4fdda0:
    // 0x4fdda0: 0x24634630  addiu       $v1, $v1, 0x4630
    ctx->pc = 0x4fdda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17968));
label_4fdda4:
    // 0x4fdda4: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4fdda4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4fdda8:
    // 0x4fdda8: 0xac40a9d8  sw          $zero, -0x5628($v0)
    ctx->pc = 0x4fdda8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945240), GPR_U32(ctx, 0));
label_4fddac:
    // 0x4fddac: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4fddb0:
    if (ctx->pc == 0x4FDDB0u) {
        ctx->pc = 0x4FDDB0u;
            // 0x4fddb0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4FDDB4u;
        goto label_4fddb4;
    }
    ctx->pc = 0x4FDDACu;
    {
        const bool branch_taken_0x4fddac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fddac) {
            ctx->pc = 0x4FDDB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDDACu;
            // 0x4fddb0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDE08u;
            goto label_4fde08;
        }
    }
    ctx->pc = 0x4FDDB4u;
label_4fddb4:
    // 0x4fddb4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4fddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4fddb8:
    // 0x4fddb8: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4fddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4fddbc:
    // 0x4fddbc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4fddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4fddc0:
    // 0x4fddc0: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4fddc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4fddc4:
    // 0x4fddc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4fddc8:
    if (ctx->pc == 0x4FDDC8u) {
        ctx->pc = 0x4FDDC8u;
            // 0x4fddc8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4FDDCCu;
        goto label_4fddcc;
    }
    ctx->pc = 0x4FDDC4u;
    {
        const bool branch_taken_0x4fddc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fddc4) {
            ctx->pc = 0x4FDDC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDDC4u;
            // 0x4fddc8: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDDE0u;
            goto label_4fdde0;
        }
    }
    ctx->pc = 0x4FDDCCu;
label_4fddcc:
    // 0x4fddcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fddccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fddd0:
    // 0x4fddd0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4fddd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4fddd4:
    // 0x4fddd4: 0x320f809  jalr        $t9
label_4fddd8:
    if (ctx->pc == 0x4FDDD8u) {
        ctx->pc = 0x4FDDD8u;
            // 0x4fddd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FDDDCu;
        goto label_4fdddc;
    }
    ctx->pc = 0x4FDDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FDDDCu);
        ctx->pc = 0x4FDDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDDD4u;
            // 0x4fddd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FDDDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FDDDCu; }
            if (ctx->pc != 0x4FDDDCu) { return; }
        }
        }
    }
    ctx->pc = 0x4FDDDCu;
label_4fdddc:
    // 0x4fdddc: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4fdddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4fdde0:
    // 0x4fdde0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4fdde4:
    if (ctx->pc == 0x4FDDE4u) {
        ctx->pc = 0x4FDDE4u;
            // 0x4fdde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDDE8u;
        goto label_4fdde8;
    }
    ctx->pc = 0x4FDDE0u;
    {
        const bool branch_taken_0x4fdde0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4fdde0) {
            ctx->pc = 0x4FDDE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDDE0u;
            // 0x4fdde4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDDFCu;
            goto label_4fddfc;
        }
    }
    ctx->pc = 0x4FDDE8u;
label_4fdde8:
    // 0x4fdde8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4fdde8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4fddec:
    // 0x4fddec: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4fddecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4fddf0:
    // 0x4fddf0: 0x320f809  jalr        $t9
label_4fddf4:
    if (ctx->pc == 0x4FDDF4u) {
        ctx->pc = 0x4FDDF4u;
            // 0x4fddf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4FDDF8u;
        goto label_4fddf8;
    }
    ctx->pc = 0x4FDDF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4FDDF8u);
        ctx->pc = 0x4FDDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDDF0u;
            // 0x4fddf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4FDDF8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4FDDF8u; }
            if (ctx->pc != 0x4FDDF8u) { return; }
        }
        }
    }
    ctx->pc = 0x4FDDF8u;
label_4fddf8:
    // 0x4fddf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4fddf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fddfc:
    // 0x4fddfc: 0xc075bf8  jal         func_1D6FE0
label_4fde00:
    if (ctx->pc == 0x4FDE00u) {
        ctx->pc = 0x4FDE00u;
            // 0x4fde00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDE04u;
        goto label_4fde04;
    }
    ctx->pc = 0x4FDDFCu;
    SET_GPR_U32(ctx, 31, 0x4FDE04u);
    ctx->pc = 0x4FDE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDDFCu;
            // 0x4fde00: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDE04u; }
        if (ctx->pc != 0x4FDE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDE04u; }
        if (ctx->pc != 0x4FDE04u) { return; }
    }
    ctx->pc = 0x4FDE04u;
label_4fde04:
    // 0x4fde04: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4fde04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4fde08:
    // 0x4fde08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4fde08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4fde0c:
    // 0x4fde0c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4fde10:
    if (ctx->pc == 0x4FDE10u) {
        ctx->pc = 0x4FDE10u;
            // 0x4fde10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDE14u;
        goto label_4fde14;
    }
    ctx->pc = 0x4FDE0Cu;
    {
        const bool branch_taken_0x4fde0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4fde0c) {
            ctx->pc = 0x4FDE10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDE0Cu;
            // 0x4fde10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4FDE20u;
            goto label_4fde20;
        }
    }
    ctx->pc = 0x4FDE14u;
label_4fde14:
    // 0x4fde14: 0xc0400a8  jal         func_1002A0
label_4fde18:
    if (ctx->pc == 0x4FDE18u) {
        ctx->pc = 0x4FDE18u;
            // 0x4fde18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4FDE1Cu;
        goto label_4fde1c;
    }
    ctx->pc = 0x4FDE14u;
    SET_GPR_U32(ctx, 31, 0x4FDE1Cu);
    ctx->pc = 0x4FDE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDE14u;
            // 0x4fde18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDE1Cu; }
        if (ctx->pc != 0x4FDE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4FDE1Cu; }
        if (ctx->pc != 0x4FDE1Cu) { return; }
    }
    ctx->pc = 0x4FDE1Cu;
label_4fde1c:
    // 0x4fde1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4fde1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4fde20:
    // 0x4fde20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4fde20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4fde24:
    // 0x4fde24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4fde24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4fde28:
    // 0x4fde28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4fde28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4fde2c:
    // 0x4fde2c: 0x3e00008  jr          $ra
label_4fde30:
    if (ctx->pc == 0x4FDE30u) {
        ctx->pc = 0x4FDE30u;
            // 0x4fde30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4FDE34u;
        goto label_4fde34;
    }
    ctx->pc = 0x4FDE2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4FDE30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4FDE2Cu;
            // 0x4fde30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4FDE34u;
label_4fde34:
    // 0x4fde34: 0x0  nop
    ctx->pc = 0x4fde34u;
    // NOP
label_4fde38:
    // 0x4fde38: 0x0  nop
    ctx->pc = 0x4fde38u;
    // NOP
label_4fde3c:
    // 0x4fde3c: 0x0  nop
    ctx->pc = 0x4fde3cu;
    // NOP
}
