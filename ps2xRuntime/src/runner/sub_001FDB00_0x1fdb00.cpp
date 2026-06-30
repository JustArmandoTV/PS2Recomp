#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FDB00
// Address: 0x1fdb00 - 0x1fddd0
void sub_001FDB00_0x1fdb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDB00_0x1fdb00");
#endif

    switch (ctx->pc) {
        case 0x1fdb00u: goto label_1fdb00;
        case 0x1fdb04u: goto label_1fdb04;
        case 0x1fdb08u: goto label_1fdb08;
        case 0x1fdb0cu: goto label_1fdb0c;
        case 0x1fdb10u: goto label_1fdb10;
        case 0x1fdb14u: goto label_1fdb14;
        case 0x1fdb18u: goto label_1fdb18;
        case 0x1fdb1cu: goto label_1fdb1c;
        case 0x1fdb20u: goto label_1fdb20;
        case 0x1fdb24u: goto label_1fdb24;
        case 0x1fdb28u: goto label_1fdb28;
        case 0x1fdb2cu: goto label_1fdb2c;
        case 0x1fdb30u: goto label_1fdb30;
        case 0x1fdb34u: goto label_1fdb34;
        case 0x1fdb38u: goto label_1fdb38;
        case 0x1fdb3cu: goto label_1fdb3c;
        case 0x1fdb40u: goto label_1fdb40;
        case 0x1fdb44u: goto label_1fdb44;
        case 0x1fdb48u: goto label_1fdb48;
        case 0x1fdb4cu: goto label_1fdb4c;
        case 0x1fdb50u: goto label_1fdb50;
        case 0x1fdb54u: goto label_1fdb54;
        case 0x1fdb58u: goto label_1fdb58;
        case 0x1fdb5cu: goto label_1fdb5c;
        case 0x1fdb60u: goto label_1fdb60;
        case 0x1fdb64u: goto label_1fdb64;
        case 0x1fdb68u: goto label_1fdb68;
        case 0x1fdb6cu: goto label_1fdb6c;
        case 0x1fdb70u: goto label_1fdb70;
        case 0x1fdb74u: goto label_1fdb74;
        case 0x1fdb78u: goto label_1fdb78;
        case 0x1fdb7cu: goto label_1fdb7c;
        case 0x1fdb80u: goto label_1fdb80;
        case 0x1fdb84u: goto label_1fdb84;
        case 0x1fdb88u: goto label_1fdb88;
        case 0x1fdb8cu: goto label_1fdb8c;
        case 0x1fdb90u: goto label_1fdb90;
        case 0x1fdb94u: goto label_1fdb94;
        case 0x1fdb98u: goto label_1fdb98;
        case 0x1fdb9cu: goto label_1fdb9c;
        case 0x1fdba0u: goto label_1fdba0;
        case 0x1fdba4u: goto label_1fdba4;
        case 0x1fdba8u: goto label_1fdba8;
        case 0x1fdbacu: goto label_1fdbac;
        case 0x1fdbb0u: goto label_1fdbb0;
        case 0x1fdbb4u: goto label_1fdbb4;
        case 0x1fdbb8u: goto label_1fdbb8;
        case 0x1fdbbcu: goto label_1fdbbc;
        case 0x1fdbc0u: goto label_1fdbc0;
        case 0x1fdbc4u: goto label_1fdbc4;
        case 0x1fdbc8u: goto label_1fdbc8;
        case 0x1fdbccu: goto label_1fdbcc;
        case 0x1fdbd0u: goto label_1fdbd0;
        case 0x1fdbd4u: goto label_1fdbd4;
        case 0x1fdbd8u: goto label_1fdbd8;
        case 0x1fdbdcu: goto label_1fdbdc;
        case 0x1fdbe0u: goto label_1fdbe0;
        case 0x1fdbe4u: goto label_1fdbe4;
        case 0x1fdbe8u: goto label_1fdbe8;
        case 0x1fdbecu: goto label_1fdbec;
        case 0x1fdbf0u: goto label_1fdbf0;
        case 0x1fdbf4u: goto label_1fdbf4;
        case 0x1fdbf8u: goto label_1fdbf8;
        case 0x1fdbfcu: goto label_1fdbfc;
        case 0x1fdc00u: goto label_1fdc00;
        case 0x1fdc04u: goto label_1fdc04;
        case 0x1fdc08u: goto label_1fdc08;
        case 0x1fdc0cu: goto label_1fdc0c;
        case 0x1fdc10u: goto label_1fdc10;
        case 0x1fdc14u: goto label_1fdc14;
        case 0x1fdc18u: goto label_1fdc18;
        case 0x1fdc1cu: goto label_1fdc1c;
        case 0x1fdc20u: goto label_1fdc20;
        case 0x1fdc24u: goto label_1fdc24;
        case 0x1fdc28u: goto label_1fdc28;
        case 0x1fdc2cu: goto label_1fdc2c;
        case 0x1fdc30u: goto label_1fdc30;
        case 0x1fdc34u: goto label_1fdc34;
        case 0x1fdc38u: goto label_1fdc38;
        case 0x1fdc3cu: goto label_1fdc3c;
        case 0x1fdc40u: goto label_1fdc40;
        case 0x1fdc44u: goto label_1fdc44;
        case 0x1fdc48u: goto label_1fdc48;
        case 0x1fdc4cu: goto label_1fdc4c;
        case 0x1fdc50u: goto label_1fdc50;
        case 0x1fdc54u: goto label_1fdc54;
        case 0x1fdc58u: goto label_1fdc58;
        case 0x1fdc5cu: goto label_1fdc5c;
        case 0x1fdc60u: goto label_1fdc60;
        case 0x1fdc64u: goto label_1fdc64;
        case 0x1fdc68u: goto label_1fdc68;
        case 0x1fdc6cu: goto label_1fdc6c;
        case 0x1fdc70u: goto label_1fdc70;
        case 0x1fdc74u: goto label_1fdc74;
        case 0x1fdc78u: goto label_1fdc78;
        case 0x1fdc7cu: goto label_1fdc7c;
        case 0x1fdc80u: goto label_1fdc80;
        case 0x1fdc84u: goto label_1fdc84;
        case 0x1fdc88u: goto label_1fdc88;
        case 0x1fdc8cu: goto label_1fdc8c;
        case 0x1fdc90u: goto label_1fdc90;
        case 0x1fdc94u: goto label_1fdc94;
        case 0x1fdc98u: goto label_1fdc98;
        case 0x1fdc9cu: goto label_1fdc9c;
        case 0x1fdca0u: goto label_1fdca0;
        case 0x1fdca4u: goto label_1fdca4;
        case 0x1fdca8u: goto label_1fdca8;
        case 0x1fdcacu: goto label_1fdcac;
        case 0x1fdcb0u: goto label_1fdcb0;
        case 0x1fdcb4u: goto label_1fdcb4;
        case 0x1fdcb8u: goto label_1fdcb8;
        case 0x1fdcbcu: goto label_1fdcbc;
        case 0x1fdcc0u: goto label_1fdcc0;
        case 0x1fdcc4u: goto label_1fdcc4;
        case 0x1fdcc8u: goto label_1fdcc8;
        case 0x1fdcccu: goto label_1fdccc;
        case 0x1fdcd0u: goto label_1fdcd0;
        case 0x1fdcd4u: goto label_1fdcd4;
        case 0x1fdcd8u: goto label_1fdcd8;
        case 0x1fdcdcu: goto label_1fdcdc;
        case 0x1fdce0u: goto label_1fdce0;
        case 0x1fdce4u: goto label_1fdce4;
        case 0x1fdce8u: goto label_1fdce8;
        case 0x1fdcecu: goto label_1fdcec;
        case 0x1fdcf0u: goto label_1fdcf0;
        case 0x1fdcf4u: goto label_1fdcf4;
        case 0x1fdcf8u: goto label_1fdcf8;
        case 0x1fdcfcu: goto label_1fdcfc;
        case 0x1fdd00u: goto label_1fdd00;
        case 0x1fdd04u: goto label_1fdd04;
        case 0x1fdd08u: goto label_1fdd08;
        case 0x1fdd0cu: goto label_1fdd0c;
        case 0x1fdd10u: goto label_1fdd10;
        case 0x1fdd14u: goto label_1fdd14;
        case 0x1fdd18u: goto label_1fdd18;
        case 0x1fdd1cu: goto label_1fdd1c;
        case 0x1fdd20u: goto label_1fdd20;
        case 0x1fdd24u: goto label_1fdd24;
        case 0x1fdd28u: goto label_1fdd28;
        case 0x1fdd2cu: goto label_1fdd2c;
        case 0x1fdd30u: goto label_1fdd30;
        case 0x1fdd34u: goto label_1fdd34;
        case 0x1fdd38u: goto label_1fdd38;
        case 0x1fdd3cu: goto label_1fdd3c;
        case 0x1fdd40u: goto label_1fdd40;
        case 0x1fdd44u: goto label_1fdd44;
        case 0x1fdd48u: goto label_1fdd48;
        case 0x1fdd4cu: goto label_1fdd4c;
        case 0x1fdd50u: goto label_1fdd50;
        case 0x1fdd54u: goto label_1fdd54;
        case 0x1fdd58u: goto label_1fdd58;
        case 0x1fdd5cu: goto label_1fdd5c;
        case 0x1fdd60u: goto label_1fdd60;
        case 0x1fdd64u: goto label_1fdd64;
        case 0x1fdd68u: goto label_1fdd68;
        case 0x1fdd6cu: goto label_1fdd6c;
        case 0x1fdd70u: goto label_1fdd70;
        case 0x1fdd74u: goto label_1fdd74;
        case 0x1fdd78u: goto label_1fdd78;
        case 0x1fdd7cu: goto label_1fdd7c;
        case 0x1fdd80u: goto label_1fdd80;
        case 0x1fdd84u: goto label_1fdd84;
        case 0x1fdd88u: goto label_1fdd88;
        case 0x1fdd8cu: goto label_1fdd8c;
        case 0x1fdd90u: goto label_1fdd90;
        case 0x1fdd94u: goto label_1fdd94;
        case 0x1fdd98u: goto label_1fdd98;
        case 0x1fdd9cu: goto label_1fdd9c;
        case 0x1fdda0u: goto label_1fdda0;
        case 0x1fdda4u: goto label_1fdda4;
        case 0x1fdda8u: goto label_1fdda8;
        case 0x1fddacu: goto label_1fddac;
        case 0x1fddb0u: goto label_1fddb0;
        case 0x1fddb4u: goto label_1fddb4;
        case 0x1fddb8u: goto label_1fddb8;
        case 0x1fddbcu: goto label_1fddbc;
        case 0x1fddc0u: goto label_1fddc0;
        case 0x1fddc4u: goto label_1fddc4;
        case 0x1fddc8u: goto label_1fddc8;
        case 0x1fddccu: goto label_1fddcc;
        default: break;
    }

    ctx->pc = 0x1fdb00u;

label_1fdb00:
    // 0x1fdb00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fdb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1fdb04:
    // 0x1fdb04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fdb04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb08:
    // 0x1fdb08: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fdb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb0c:
    // 0x1fdb0c: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x1fdb0cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
label_1fdb10:
    // 0x1fdb10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fdb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1fdb14:
    // 0x1fdb14: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fdb14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fdb18:
    // 0x1fdb18: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fdb18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fdb1c:
    // 0x1fdb1c: 0x8ca5ea64  lw          $a1, -0x159C($a1)
    ctx->pc = 0x1fdb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294961764)));
label_1fdb20:
    // 0x1fdb20: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fdb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fdb24:
    // 0x1fdb24: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x1fdb24u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fdb28:
    // 0x1fdb28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fdb2c:
    if (ctx->pc == 0x1FDB2Cu) {
        ctx->pc = 0x1FDB2Cu;
            // 0x1fdb2c: 0x254aea60  addiu       $t2, $t2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961760));
        ctx->pc = 0x1FDB30u;
        goto label_1fdb30;
    }
    ctx->pc = 0x1FDB28u;
    {
        const bool branch_taken_0x1fdb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB28u;
            // 0x1fdb2c: 0x254aea60  addiu       $t2, $t2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb28) {
            ctx->pc = 0x1FDB58u;
            goto label_1fdb58;
        }
    }
    ctx->pc = 0x1FDB30u;
label_1fdb30:
    // 0x1fdb30: 0x8d450004  lw          $a1, 0x4($t2)
    ctx->pc = 0x1fdb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_1fdb34:
    // 0x1fdb34: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fdb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fdb38:
    // 0x1fdb38: 0x2463b248  addiu       $v1, $v1, -0x4DB8
    ctx->pc = 0x1fdb38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947400));
label_1fdb3c:
    // 0x1fdb3c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1fdb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1fdb40:
    // 0x1fdb40: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fdb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fdb44:
    // 0x1fdb44: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fdb44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fdb48:
    // 0x1fdb48: 0x400bc803  .word       0x400BC803                   # mfc0        $t3, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fdb48u;
    SET_GPR_S32(ctx, 11, (int32_t)ctx->cop0_perf);
label_1fdb4c:
    // 0x1fdb4c: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x1fdb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_1fdb50:
    // 0x1fdb50: 0xacab0008  sw          $t3, 0x8($a1)
    ctx->pc = 0x1fdb50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 11));
label_1fdb54:
    // 0x1fdb54: 0xad430004  sw          $v1, 0x4($t2)
    ctx->pc = 0x1fdb54u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 3));
label_1fdb58:
    // 0x1fdb58: 0xac460004  sw          $a2, 0x4($v0)
    ctx->pc = 0x1fdb58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 6));
label_1fdb5c:
    // 0x1fdb5c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x1fdb5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1fdb60:
    // 0x1fdb60: 0x10e00002  beqz        $a3, . + 4 + (0x2 << 2)
label_1fdb64:
    if (ctx->pc == 0x1FDB64u) {
        ctx->pc = 0x1FDB64u;
            // 0x1fdb64: 0xac49000c  sw          $t1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
        ctx->pc = 0x1FDB68u;
        goto label_1fdb68;
    }
    ctx->pc = 0x1FDB60u;
    {
        const bool branch_taken_0x1fdb60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB60u;
            // 0x1fdb64: 0xac49000c  sw          $t1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdb60) {
            ctx->pc = 0x1FDB6Cu;
            goto label_1fdb6c;
        }
    }
    ctx->pc = 0x1FDB68u;
label_1fdb68:
    // 0x1fdb68: 0x24e30014  addiu       $v1, $a3, 0x14
    ctx->pc = 0x1fdb68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
label_1fdb6c:
    // 0x1fdb6c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1fdb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1fdb70:
    // 0x1fdb70: 0x80c30020  lb          $v1, 0x20($a2)
    ctx->pc = 0x1fdb70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
label_1fdb74:
    // 0x1fdb74: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1fdb78:
    if (ctx->pc == 0x1FDB78u) {
        ctx->pc = 0x1FDB78u;
            // 0x1fdb78: 0xac400034  sw          $zero, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
        ctx->pc = 0x1FDB7Cu;
        goto label_1fdb7c;
    }
    ctx->pc = 0x1FDB74u;
    {
        const bool branch_taken_0x1fdb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb74) {
            ctx->pc = 0x1FDB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB74u;
            // 0x1fdb78: 0xac400034  sw          $zero, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB8Cu;
            goto label_1fdb8c;
        }
    }
    ctx->pc = 0x1FDB7Cu;
label_1fdb7c:
    // 0x1fdb7c: 0x50e00003  beql        $a3, $zero, . + 4 + (0x3 << 2)
label_1fdb80:
    if (ctx->pc == 0x1FDB80u) {
        ctx->pc = 0x1FDB80u;
            // 0x1fdb80: 0xac470034  sw          $a3, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 7));
        ctx->pc = 0x1FDB84u;
        goto label_1fdb84;
    }
    ctx->pc = 0x1FDB7Cu;
    {
        const bool branch_taken_0x1fdb7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdb7c) {
            ctx->pc = 0x1FDB80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDB7Cu;
            // 0x1fdb80: 0xac470034  sw          $a3, 0x34($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDB8Cu;
            goto label_1fdb8c;
        }
    }
    ctx->pc = 0x1FDB84u;
label_1fdb84:
    // 0x1fdb84: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x1fdb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_1fdb88:
    // 0x1fdb88: 0xac470034  sw          $a3, 0x34($v0)
    ctx->pc = 0x1fdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 7));
label_1fdb8c:
    // 0x1fdb8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1fdb90:
    // 0x1fdb90: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x1fdb90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
label_1fdb94:
    // 0x1fdb94: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1fdb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1fdb98:
    // 0x1fdb98: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1fdb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1fdb9c:
    // 0x1fdb9c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1fdb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1fdba0:
    // 0x1fdba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1fdba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fdba4:
    // 0x1fdba4: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1fdba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_1fdba8:
    // 0x1fdba8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1fdba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fdbac:
    // 0x1fdbac: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x1fdbacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_1fdbb0:
    // 0x1fdbb0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1fdbb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1fdbb4:
    // 0x1fdbb4: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x1fdbb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fdbb8:
    // 0x1fdbb8: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1fdbb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1fdbbc:
    // 0x1fdbbc: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x1fdbbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fdbc0:
    // 0x1fdbc0: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1fdbc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1fdbc4:
    // 0x1fdbc4: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x1fdbc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1fdbc8:
    // 0x1fdbc8: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1fdbc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1fdbcc:
    // 0x1fdbcc: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1fdbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_1fdbd0:
    // 0x1fdbd0: 0xafa8002c  sw          $t0, 0x2C($sp)
    ctx->pc = 0x1fdbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 8));
label_1fdbd4:
    // 0x1fdbd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1fdbd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1fdbd8:
    // 0x1fdbd8: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x1fdbd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_1fdbdc:
    // 0x1fdbdc: 0x320f809  jalr        $t9
label_1fdbe0:
    if (ctx->pc == 0x1FDBE0u) {
        ctx->pc = 0x1FDBE0u;
            // 0x1fdbe0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDBE4u;
        goto label_1fdbe4;
    }
    ctx->pc = 0x1FDBDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1FDBE4u);
        ctx->pc = 0x1FDBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBDCu;
            // 0x1fdbe0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FDBE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FDBE4u; }
            if (ctx->pc != 0x1FDBE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1FDBE4u;
label_1fdbe4:
    // 0x1fdbe4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fdbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fdbe8:
    // 0x1fdbe8: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1fdbe8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1fdbec:
    // 0x1fdbec: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1fdbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1fdbf0:
    // 0x1fdbf0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1fdbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1fdbf4:
    // 0x1fdbf4: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1fdbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1fdbf8:
    // 0x1fdbf8: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1fdbf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1fdbfc:
    // 0x1fdbfc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1fdc00:
    if (ctx->pc == 0x1FDC00u) {
        ctx->pc = 0x1FDC00u;
            // 0x1fdc00: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1FDC04u;
        goto label_1fdc04;
    }
    ctx->pc = 0x1FDBFCu;
    {
        const bool branch_taken_0x1fdbfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDBFCu;
            // 0x1fdc00: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdbfc) {
            ctx->pc = 0x1FDC2Cu;
            goto label_1fdc2c;
        }
    }
    ctx->pc = 0x1FDC04u;
label_1fdc04:
    // 0x1fdc04: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1fdc04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1fdc08:
    // 0x1fdc08: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1fdc08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1fdc0c:
    // 0x1fdc0c: 0x2463b240  addiu       $v1, $v1, -0x4DC0
    ctx->pc = 0x1fdc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947392));
label_1fdc10:
    // 0x1fdc10: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1fdc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1fdc14:
    // 0x1fdc14: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fdc14u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1fdc18:
    // 0x1fdc18: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fdc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fdc1c:
    // 0x1fdc1c: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1fdc1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1fdc20:
    // 0x1fdc20: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1fdc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1fdc24:
    // 0x1fdc24: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fdc24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1fdc28:
    // 0x1fdc28: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1fdc28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1fdc2c:
    // 0x1fdc2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fdc2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdc30:
    // 0x1fdc30: 0x3e00008  jr          $ra
label_1fdc34:
    if (ctx->pc == 0x1FDC34u) {
        ctx->pc = 0x1FDC34u;
            // 0x1fdc34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1FDC38u;
        goto label_1fdc38;
    }
    ctx->pc = 0x1FDC30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC30u;
            // 0x1fdc34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDC38u;
label_1fdc38:
    // 0x1fdc38: 0x0  nop
    ctx->pc = 0x1fdc38u;
    // NOP
label_1fdc3c:
    // 0x1fdc3c: 0x0  nop
    ctx->pc = 0x1fdc3cu;
    // NOP
label_1fdc40:
    // 0x1fdc40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fdc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fdc44:
    // 0x1fdc44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fdc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fdc48:
    // 0x1fdc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fdc4c:
    // 0x1fdc4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdc4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc50:
    // 0x1fdc50: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_1fdc54:
    if (ctx->pc == 0x1FDC54u) {
        ctx->pc = 0x1FDC54u;
            // 0x1fdc54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC58u;
        goto label_1fdc58;
    }
    ctx->pc = 0x1FDC50u;
    {
        const bool branch_taken_0x1fdc50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdc50) {
            ctx->pc = 0x1FDC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC50u;
            // 0x1fdc54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDC90u;
            goto label_1fdc90;
        }
    }
    ctx->pc = 0x1FDC58u;
label_1fdc58:
    // 0x1fdc58: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fdc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fdc5c:
    // 0x1fdc5c: 0x2442df80  addiu       $v0, $v0, -0x2080
    ctx->pc = 0x1fdc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958976));
label_1fdc60:
    // 0x1fdc60: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1fdc64:
    if (ctx->pc == 0x1FDC64u) {
        ctx->pc = 0x1FDC64u;
            // 0x1fdc64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1FDC68u;
        goto label_1fdc68;
    }
    ctx->pc = 0x1FDC60u;
    {
        const bool branch_taken_0x1fdc60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC60u;
            // 0x1fdc64: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdc60) {
            ctx->pc = 0x1FDC74u;
            goto label_1fdc74;
        }
    }
    ctx->pc = 0x1FDC68u;
label_1fdc68:
    // 0x1fdc68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1fdc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1fdc6c:
    // 0x1fdc6c: 0x2442df90  addiu       $v0, $v0, -0x2070
    ctx->pc = 0x1fdc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958992));
label_1fdc70:
    // 0x1fdc70: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1fdc70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1fdc74:
    // 0x1fdc74: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1fdc74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1fdc78:
    // 0x1fdc78: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fdc78u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1fdc7c:
    // 0x1fdc7c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1fdc80:
    if (ctx->pc == 0x1FDC80u) {
        ctx->pc = 0x1FDC84u;
        goto label_1fdc84;
    }
    ctx->pc = 0x1FDC7Cu;
    {
        const bool branch_taken_0x1fdc7c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fdc7c) {
            ctx->pc = 0x1FDC8Cu;
            goto label_1fdc8c;
        }
    }
    ctx->pc = 0x1FDC84u;
label_1fdc84:
    // 0x1fdc84: 0xc0400a8  jal         func_1002A0
label_1fdc88:
    if (ctx->pc == 0x1FDC88u) {
        ctx->pc = 0x1FDC88u;
            // 0x1fdc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDC8Cu;
        goto label_1fdc8c;
    }
    ctx->pc = 0x1FDC84u;
    SET_GPR_U32(ctx, 31, 0x1FDC8Cu);
    ctx->pc = 0x1FDC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC84u;
            // 0x1fdc88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC8Cu; }
        if (ctx->pc != 0x1FDC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDC8Cu; }
        if (ctx->pc != 0x1FDC8Cu) { return; }
    }
    ctx->pc = 0x1FDC8Cu;
label_1fdc8c:
    // 0x1fdc8c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fdc8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fdc90:
    // 0x1fdc90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fdc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdc94:
    // 0x1fdc94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fdc94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdc98:
    // 0x1fdc98: 0x3e00008  jr          $ra
label_1fdc9c:
    if (ctx->pc == 0x1FDC9Cu) {
        ctx->pc = 0x1FDC9Cu;
            // 0x1fdc9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FDCA0u;
        goto label_1fdca0;
    }
    ctx->pc = 0x1FDC98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDC98u;
            // 0x1fdc9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDCA0u;
label_1fdca0:
    // 0x1fdca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1fdca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1fdca4:
    // 0x1fdca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fdca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1fdca8:
    // 0x1fdca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fdcac:
    // 0x1fdcac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdcacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdcb0:
    // 0x1fdcb0: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1fdcb4:
    if (ctx->pc == 0x1FDCB4u) {
        ctx->pc = 0x1FDCB4u;
            // 0x1fdcb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDCB8u;
        goto label_1fdcb8;
    }
    ctx->pc = 0x1FDCB0u;
    {
        const bool branch_taken_0x1fdcb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fdcb0) {
            ctx->pc = 0x1FDCB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCB0u;
            // 0x1fdcb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FDCDCu;
            goto label_1fdcdc;
        }
    }
    ctx->pc = 0x1FDCB8u;
label_1fdcb8:
    // 0x1fdcb8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1fdcb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1fdcbc:
    // 0x1fdcbc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fdcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1fdcc0:
    // 0x1fdcc0: 0x2463df90  addiu       $v1, $v1, -0x2070
    ctx->pc = 0x1fdcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958992));
label_1fdcc4:
    // 0x1fdcc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1fdcc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1fdcc8:
    // 0x1fdcc8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_1fdccc:
    if (ctx->pc == 0x1FDCCCu) {
        ctx->pc = 0x1FDCCCu;
            // 0x1fdccc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1FDCD0u;
        goto label_1fdcd0;
    }
    ctx->pc = 0x1FDCC8u;
    {
        const bool branch_taken_0x1fdcc8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1FDCCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCC8u;
            // 0x1fdccc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdcc8) {
            ctx->pc = 0x1FDCD8u;
            goto label_1fdcd8;
        }
    }
    ctx->pc = 0x1FDCD0u;
label_1fdcd0:
    // 0x1fdcd0: 0xc0400a8  jal         func_1002A0
label_1fdcd4:
    if (ctx->pc == 0x1FDCD4u) {
        ctx->pc = 0x1FDCD8u;
        goto label_1fdcd8;
    }
    ctx->pc = 0x1FDCD0u;
    SET_GPR_U32(ctx, 31, 0x1FDCD8u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCD8u; }
        if (ctx->pc != 0x1FDCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDCD8u; }
        if (ctx->pc != 0x1FDCD8u) { return; }
    }
    ctx->pc = 0x1FDCD8u;
label_1fdcd8:
    // 0x1fdcd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fdcd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1fdcdc:
    // 0x1fdcdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fdcdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1fdce0:
    // 0x1fdce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fdce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fdce4:
    // 0x1fdce4: 0x3e00008  jr          $ra
label_1fdce8:
    if (ctx->pc == 0x1FDCE8u) {
        ctx->pc = 0x1FDCE8u;
            // 0x1fdce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1FDCECu;
        goto label_1fdcec;
    }
    ctx->pc = 0x1FDCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDCE4u;
            // 0x1fdce8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDCECu;
label_1fdcec:
    // 0x1fdcec: 0x0  nop
    ctx->pc = 0x1fdcecu;
    // NOP
label_1fdcf0:
    // 0x1fdcf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1fdcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1fdcf4:
    // 0x1fdcf4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1fdcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1fdcf8:
    // 0x1fdcf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1fdcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1fdcfc:
    // 0x1fdcfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fdcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1fdd00:
    // 0x1fdd00: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1fdd00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1fdd04:
    // 0x1fdd04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1fdd04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1fdd08:
    // 0x1fdd08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1fdd08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1fdd0c:
    // 0x1fdd0c: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x1fdd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1fdd10:
    // 0x1fdd10: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x1fdd10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1fdd14:
    // 0x1fdd14: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x1fdd14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_1fdd18:
    // 0x1fdd18: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x1fdd18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_1fdd1c:
    // 0x1fdd1c: 0x14a30004  bne         $a1, $v1, . + 4 + (0x4 << 2)
label_1fdd20:
    if (ctx->pc == 0x1FDD20u) {
        ctx->pc = 0x1FDD20u;
            // 0x1fdd20: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD24u;
        goto label_1fdd24;
    }
    ctx->pc = 0x1FDD1Cu;
    {
        const bool branch_taken_0x1fdd1c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1FDD20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD1Cu;
            // 0x1fdd20: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd1c) {
            ctx->pc = 0x1FDD30u;
            goto label_1fdd30;
        }
    }
    ctx->pc = 0x1FDD24u;
label_1fdd24:
    // 0x1fdd24: 0x26440008  addiu       $a0, $s2, 0x8
    ctx->pc = 0x1fdd24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1fdd28:
    // 0x1fdd28: 0xc0a728c  jal         func_29CA30
label_1fdd2c:
    if (ctx->pc == 0x1FDD2Cu) {
        ctx->pc = 0x1FDD2Cu;
            // 0x1fdd2c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1FDD30u;
        goto label_1fdd30;
    }
    ctx->pc = 0x1FDD28u;
    SET_GPR_U32(ctx, 31, 0x1FDD30u);
    ctx->pc = 0x1FDD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD28u;
            // 0x1fdd2c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD30u; }
        if (ctx->pc != 0x1FDD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FDD30u; }
        if (ctx->pc != 0x1FDD30u) { return; }
    }
    ctx->pc = 0x1FDD30u;
label_1fdd30:
    // 0x1fdd30: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x1fdd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1fdd34:
    // 0x1fdd34: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1fdd34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1fdd38:
    // 0x1fdd38: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1fdd38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1fdd3c:
    // 0x1fdd3c: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x1fdd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1fdd40:
    // 0x1fdd40: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1fdd40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_1fdd44:
    // 0x1fdd44: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1fdd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1fdd48:
    // 0x1fdd48: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1fdd48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1fdd4c:
    // 0x1fdd4c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1fdd50:
    if (ctx->pc == 0x1FDD50u) {
        ctx->pc = 0x1FDD50u;
            // 0x1fdd50: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x1FDD54u;
        goto label_1fdd54;
    }
    ctx->pc = 0x1FDD4Cu;
    {
        const bool branch_taken_0x1fdd4c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD4Cu;
            // 0x1fdd50: 0x852021  addu        $a0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd4c) {
            ctx->pc = 0x1FDD70u;
            goto label_1fdd70;
        }
    }
    ctx->pc = 0x1FDD54u;
label_1fdd54:
    // 0x1fdd54: 0x8cc6000c  lw          $a2, 0xC($a2)
    ctx->pc = 0x1fdd54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1fdd58:
    // 0x1fdd58: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x1fdd58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1fdd5c:
    // 0x1fdd5c: 0x0  nop
    ctx->pc = 0x1fdd5cu;
    // NOP
label_1fdd60:
    // 0x1fdd60: 0x0  nop
    ctx->pc = 0x1fdd60u;
    // NOP
label_1fdd64:
    // 0x1fdd64: 0x0  nop
    ctx->pc = 0x1fdd64u;
    // NOP
label_1fdd68:
    // 0x1fdd68: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1fdd6c:
    if (ctx->pc == 0x1FDD6Cu) {
        ctx->pc = 0x1FDD70u;
        goto label_1fdd70;
    }
    ctx->pc = 0x1FDD68u;
    {
        const bool branch_taken_0x1fdd68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd68) {
            ctx->pc = 0x1FDD54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fdd54;
        }
    }
    ctx->pc = 0x1FDD70u;
label_1fdd70:
    // 0x1fdd70: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1fdd70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_1fdd74:
    // 0x1fdd74: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1fdd74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1fdd78:
    // 0x1fdd78: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1fdd78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1fdd7c:
    // 0x1fdd7c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1fdd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1fdd80:
    // 0x1fdd80: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1fdd84:
    if (ctx->pc == 0x1FDD84u) {
        ctx->pc = 0x1FDD84u;
            // 0x1fdd84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD88u;
        goto label_1fdd88;
    }
    ctx->pc = 0x1FDD80u;
    {
        const bool branch_taken_0x1fdd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FDD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDD80u;
            // 0x1fdd84: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdd80) {
            ctx->pc = 0x1FDDA8u;
            goto label_1fdda8;
        }
    }
    ctx->pc = 0x1FDD88u;
label_1fdd88:
    // 0x1fdd88: 0x8ca5000c  lw          $a1, 0xC($a1)
    ctx->pc = 0x1fdd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1fdd8c:
    // 0x1fdd8c: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1fdd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1fdd90:
    // 0x1fdd90: 0x0  nop
    ctx->pc = 0x1fdd90u;
    // NOP
label_1fdd94:
    // 0x1fdd94: 0x0  nop
    ctx->pc = 0x1fdd94u;
    // NOP
label_1fdd98:
    // 0x1fdd98: 0x0  nop
    ctx->pc = 0x1fdd98u;
    // NOP
label_1fdd9c:
    // 0x1fdd9c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_1fdda0:
    if (ctx->pc == 0x1FDDA0u) {
        ctx->pc = 0x1FDDA4u;
        goto label_1fdda4;
    }
    ctx->pc = 0x1FDD9Cu;
    {
        const bool branch_taken_0x1fdd9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fdd9c) {
            ctx->pc = 0x1FDD88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1fdd88;
        }
    }
    ctx->pc = 0x1FDDA4u;
label_1fdda4:
    // 0x1fdda4: 0x0  nop
    ctx->pc = 0x1fdda4u;
    // NOP
label_1fdda8:
    // 0x1fdda8: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x1fdda8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_1fddac:
    // 0x1fddac: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1fddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1fddb0:
    // 0x1fddb0: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x1fddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_1fddb4:
    // 0x1fddb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1fddb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1fddb8:
    // 0x1fddb8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1fddb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fddbc:
    // 0x1fddbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fddbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1fddc0:
    // 0x1fddc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1fddc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1fddc4:
    // 0x1fddc4: 0x3e00008  jr          $ra
label_1fddc8:
    if (ctx->pc == 0x1FDDC8u) {
        ctx->pc = 0x1FDDC8u;
            // 0x1fddc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1FDDCCu;
        goto label_1fddcc;
    }
    ctx->pc = 0x1FDDC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FDDC4u;
            // 0x1fddc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FDDCCu;
label_1fddcc:
    // 0x1fddcc: 0x0  nop
    ctx->pc = 0x1fddccu;
    // NOP
}
