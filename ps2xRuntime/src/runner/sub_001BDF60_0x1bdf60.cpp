#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BDF60
// Address: 0x1bdf60 - 0x1be250
void sub_001BDF60_0x1bdf60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDF60_0x1bdf60");
#endif

    switch (ctx->pc) {
        case 0x1bdf60u: goto label_1bdf60;
        case 0x1bdf64u: goto label_1bdf64;
        case 0x1bdf68u: goto label_1bdf68;
        case 0x1bdf6cu: goto label_1bdf6c;
        case 0x1bdf70u: goto label_1bdf70;
        case 0x1bdf74u: goto label_1bdf74;
        case 0x1bdf78u: goto label_1bdf78;
        case 0x1bdf7cu: goto label_1bdf7c;
        case 0x1bdf80u: goto label_1bdf80;
        case 0x1bdf84u: goto label_1bdf84;
        case 0x1bdf88u: goto label_1bdf88;
        case 0x1bdf8cu: goto label_1bdf8c;
        case 0x1bdf90u: goto label_1bdf90;
        case 0x1bdf94u: goto label_1bdf94;
        case 0x1bdf98u: goto label_1bdf98;
        case 0x1bdf9cu: goto label_1bdf9c;
        case 0x1bdfa0u: goto label_1bdfa0;
        case 0x1bdfa4u: goto label_1bdfa4;
        case 0x1bdfa8u: goto label_1bdfa8;
        case 0x1bdfacu: goto label_1bdfac;
        case 0x1bdfb0u: goto label_1bdfb0;
        case 0x1bdfb4u: goto label_1bdfb4;
        case 0x1bdfb8u: goto label_1bdfb8;
        case 0x1bdfbcu: goto label_1bdfbc;
        case 0x1bdfc0u: goto label_1bdfc0;
        case 0x1bdfc4u: goto label_1bdfc4;
        case 0x1bdfc8u: goto label_1bdfc8;
        case 0x1bdfccu: goto label_1bdfcc;
        case 0x1bdfd0u: goto label_1bdfd0;
        case 0x1bdfd4u: goto label_1bdfd4;
        case 0x1bdfd8u: goto label_1bdfd8;
        case 0x1bdfdcu: goto label_1bdfdc;
        case 0x1bdfe0u: goto label_1bdfe0;
        case 0x1bdfe4u: goto label_1bdfe4;
        case 0x1bdfe8u: goto label_1bdfe8;
        case 0x1bdfecu: goto label_1bdfec;
        case 0x1bdff0u: goto label_1bdff0;
        case 0x1bdff4u: goto label_1bdff4;
        case 0x1bdff8u: goto label_1bdff8;
        case 0x1bdffcu: goto label_1bdffc;
        case 0x1be000u: goto label_1be000;
        case 0x1be004u: goto label_1be004;
        case 0x1be008u: goto label_1be008;
        case 0x1be00cu: goto label_1be00c;
        case 0x1be010u: goto label_1be010;
        case 0x1be014u: goto label_1be014;
        case 0x1be018u: goto label_1be018;
        case 0x1be01cu: goto label_1be01c;
        case 0x1be020u: goto label_1be020;
        case 0x1be024u: goto label_1be024;
        case 0x1be028u: goto label_1be028;
        case 0x1be02cu: goto label_1be02c;
        case 0x1be030u: goto label_1be030;
        case 0x1be034u: goto label_1be034;
        case 0x1be038u: goto label_1be038;
        case 0x1be03cu: goto label_1be03c;
        case 0x1be040u: goto label_1be040;
        case 0x1be044u: goto label_1be044;
        case 0x1be048u: goto label_1be048;
        case 0x1be04cu: goto label_1be04c;
        case 0x1be050u: goto label_1be050;
        case 0x1be054u: goto label_1be054;
        case 0x1be058u: goto label_1be058;
        case 0x1be05cu: goto label_1be05c;
        case 0x1be060u: goto label_1be060;
        case 0x1be064u: goto label_1be064;
        case 0x1be068u: goto label_1be068;
        case 0x1be06cu: goto label_1be06c;
        case 0x1be070u: goto label_1be070;
        case 0x1be074u: goto label_1be074;
        case 0x1be078u: goto label_1be078;
        case 0x1be07cu: goto label_1be07c;
        case 0x1be080u: goto label_1be080;
        case 0x1be084u: goto label_1be084;
        case 0x1be088u: goto label_1be088;
        case 0x1be08cu: goto label_1be08c;
        case 0x1be090u: goto label_1be090;
        case 0x1be094u: goto label_1be094;
        case 0x1be098u: goto label_1be098;
        case 0x1be09cu: goto label_1be09c;
        case 0x1be0a0u: goto label_1be0a0;
        case 0x1be0a4u: goto label_1be0a4;
        case 0x1be0a8u: goto label_1be0a8;
        case 0x1be0acu: goto label_1be0ac;
        case 0x1be0b0u: goto label_1be0b0;
        case 0x1be0b4u: goto label_1be0b4;
        case 0x1be0b8u: goto label_1be0b8;
        case 0x1be0bcu: goto label_1be0bc;
        case 0x1be0c0u: goto label_1be0c0;
        case 0x1be0c4u: goto label_1be0c4;
        case 0x1be0c8u: goto label_1be0c8;
        case 0x1be0ccu: goto label_1be0cc;
        case 0x1be0d0u: goto label_1be0d0;
        case 0x1be0d4u: goto label_1be0d4;
        case 0x1be0d8u: goto label_1be0d8;
        case 0x1be0dcu: goto label_1be0dc;
        case 0x1be0e0u: goto label_1be0e0;
        case 0x1be0e4u: goto label_1be0e4;
        case 0x1be0e8u: goto label_1be0e8;
        case 0x1be0ecu: goto label_1be0ec;
        case 0x1be0f0u: goto label_1be0f0;
        case 0x1be0f4u: goto label_1be0f4;
        case 0x1be0f8u: goto label_1be0f8;
        case 0x1be0fcu: goto label_1be0fc;
        case 0x1be100u: goto label_1be100;
        case 0x1be104u: goto label_1be104;
        case 0x1be108u: goto label_1be108;
        case 0x1be10cu: goto label_1be10c;
        case 0x1be110u: goto label_1be110;
        case 0x1be114u: goto label_1be114;
        case 0x1be118u: goto label_1be118;
        case 0x1be11cu: goto label_1be11c;
        case 0x1be120u: goto label_1be120;
        case 0x1be124u: goto label_1be124;
        case 0x1be128u: goto label_1be128;
        case 0x1be12cu: goto label_1be12c;
        case 0x1be130u: goto label_1be130;
        case 0x1be134u: goto label_1be134;
        case 0x1be138u: goto label_1be138;
        case 0x1be13cu: goto label_1be13c;
        case 0x1be140u: goto label_1be140;
        case 0x1be144u: goto label_1be144;
        case 0x1be148u: goto label_1be148;
        case 0x1be14cu: goto label_1be14c;
        case 0x1be150u: goto label_1be150;
        case 0x1be154u: goto label_1be154;
        case 0x1be158u: goto label_1be158;
        case 0x1be15cu: goto label_1be15c;
        case 0x1be160u: goto label_1be160;
        case 0x1be164u: goto label_1be164;
        case 0x1be168u: goto label_1be168;
        case 0x1be16cu: goto label_1be16c;
        case 0x1be170u: goto label_1be170;
        case 0x1be174u: goto label_1be174;
        case 0x1be178u: goto label_1be178;
        case 0x1be17cu: goto label_1be17c;
        case 0x1be180u: goto label_1be180;
        case 0x1be184u: goto label_1be184;
        case 0x1be188u: goto label_1be188;
        case 0x1be18cu: goto label_1be18c;
        case 0x1be190u: goto label_1be190;
        case 0x1be194u: goto label_1be194;
        case 0x1be198u: goto label_1be198;
        case 0x1be19cu: goto label_1be19c;
        case 0x1be1a0u: goto label_1be1a0;
        case 0x1be1a4u: goto label_1be1a4;
        case 0x1be1a8u: goto label_1be1a8;
        case 0x1be1acu: goto label_1be1ac;
        case 0x1be1b0u: goto label_1be1b0;
        case 0x1be1b4u: goto label_1be1b4;
        case 0x1be1b8u: goto label_1be1b8;
        case 0x1be1bcu: goto label_1be1bc;
        case 0x1be1c0u: goto label_1be1c0;
        case 0x1be1c4u: goto label_1be1c4;
        case 0x1be1c8u: goto label_1be1c8;
        case 0x1be1ccu: goto label_1be1cc;
        case 0x1be1d0u: goto label_1be1d0;
        case 0x1be1d4u: goto label_1be1d4;
        case 0x1be1d8u: goto label_1be1d8;
        case 0x1be1dcu: goto label_1be1dc;
        case 0x1be1e0u: goto label_1be1e0;
        case 0x1be1e4u: goto label_1be1e4;
        case 0x1be1e8u: goto label_1be1e8;
        case 0x1be1ecu: goto label_1be1ec;
        case 0x1be1f0u: goto label_1be1f0;
        case 0x1be1f4u: goto label_1be1f4;
        case 0x1be1f8u: goto label_1be1f8;
        case 0x1be1fcu: goto label_1be1fc;
        case 0x1be200u: goto label_1be200;
        case 0x1be204u: goto label_1be204;
        case 0x1be208u: goto label_1be208;
        case 0x1be20cu: goto label_1be20c;
        case 0x1be210u: goto label_1be210;
        case 0x1be214u: goto label_1be214;
        case 0x1be218u: goto label_1be218;
        case 0x1be21cu: goto label_1be21c;
        case 0x1be220u: goto label_1be220;
        case 0x1be224u: goto label_1be224;
        case 0x1be228u: goto label_1be228;
        case 0x1be22cu: goto label_1be22c;
        case 0x1be230u: goto label_1be230;
        case 0x1be234u: goto label_1be234;
        case 0x1be238u: goto label_1be238;
        case 0x1be23cu: goto label_1be23c;
        case 0x1be240u: goto label_1be240;
        case 0x1be244u: goto label_1be244;
        case 0x1be248u: goto label_1be248;
        case 0x1be24cu: goto label_1be24c;
        default: break;
    }

    ctx->pc = 0x1bdf60u;

label_1bdf60:
    // 0x1bdf60: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1bdf60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1bdf64:
    // 0x1bdf64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bdf64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bdf68:
    // 0x1bdf68: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bdf68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bdf6c:
    // 0x1bdf6c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_1bdf70:
    if (ctx->pc == 0x1BDF70u) {
        ctx->pc = 0x1BDF70u;
            // 0x1bdf70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1BDF74u;
        goto label_1bdf74;
    }
    ctx->pc = 0x1BDF6Cu;
    {
        const bool branch_taken_0x1bdf6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BDF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF6Cu;
            // 0x1bdf70: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf6c) {
            ctx->pc = 0x1BDFD0u;
            goto label_1bdfd0;
        }
    }
    ctx->pc = 0x1BDF74u;
label_1bdf74:
    // 0x1bdf74: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1bdf74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1bdf78:
    // 0x1bdf78: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1bdf7c:
    if (ctx->pc == 0x1BDF7Cu) {
        ctx->pc = 0x1BDF7Cu;
            // 0x1bdf7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BDF80u;
        goto label_1bdf80;
    }
    ctx->pc = 0x1BDF78u;
    {
        const bool branch_taken_0x1bdf78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF78u;
            // 0x1bdf7c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf78) {
            ctx->pc = 0x1BDF98u;
            goto label_1bdf98;
        }
    }
    ctx->pc = 0x1BDF80u;
label_1bdf80:
    // 0x1bdf80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdf84:
    // 0x1bdf84: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
label_1bdf88:
    if (ctx->pc == 0x1BDF88u) {
        ctx->pc = 0x1BDF88u;
            // 0x1bdf88: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1BDF8Cu;
        goto label_1bdf8c;
    }
    ctx->pc = 0x1BDF84u;
    {
        const bool branch_taken_0x1bdf84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bdf84) {
            ctx->pc = 0x1BDF88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF84u;
            // 0x1bdf88: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BDFA8u;
            goto label_1bdfa8;
        }
    }
    ctx->pc = 0x1BDF8Cu;
label_1bdf8c:
    // 0x1bdf8c: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1bdf90:
    if (ctx->pc == 0x1BDF90u) {
        ctx->pc = 0x1BDF90u;
            // 0x1bdf90: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1BDF94u;
        goto label_1bdf94;
    }
    ctx->pc = 0x1BDF8Cu;
    {
        const bool branch_taken_0x1bdf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF8Cu;
            // 0x1bdf90: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdf8c) {
            ctx->pc = 0x1BE080u;
            goto label_1be080;
        }
    }
    ctx->pc = 0x1BDF94u;
label_1bdf94:
    // 0x1bdf94: 0x0  nop
    ctx->pc = 0x1bdf94u;
    // NOP
label_1bdf98:
    // 0x1bdf98: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
label_1bdf9c:
    if (ctx->pc == 0x1BDF9Cu) {
        ctx->pc = 0x1BDF9Cu;
            // 0x1bdf9c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1BDFA0u;
        goto label_1bdfa0;
    }
    ctx->pc = 0x1BDF98u;
    {
        const bool branch_taken_0x1bdf98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bdf98) {
            ctx->pc = 0x1BDF9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDF98u;
            // 0x1bdf9c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE000u;
            goto label_1be000;
        }
    }
    ctx->pc = 0x1BDFA0u;
label_1bdfa0:
    // 0x1bdfa0: 0x10000037  b           . + 4 + (0x37 << 2)
label_1bdfa4:
    if (ctx->pc == 0x1BDFA4u) {
        ctx->pc = 0x1BDFA4u;
            // 0x1bdfa4: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1BDFA8u;
        goto label_1bdfa8;
    }
    ctx->pc = 0x1BDFA0u;
    {
        const bool branch_taken_0x1bdfa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFA0u;
            // 0x1bdfa4: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfa0) {
            ctx->pc = 0x1BE080u;
            goto label_1be080;
        }
    }
    ctx->pc = 0x1BDFA8u;
label_1bdfa8:
    // 0x1bdfa8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1bdfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1bdfac:
    // 0x1bdfac: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x1bdfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_1bdfb0:
    // 0x1bdfb0: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1bdfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1bdfb4:
    // 0x1bdfb4: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1bdfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1bdfb8:
    // 0x1bdfb8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1bdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1bdfbc:
    // 0x1bdfbc: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x1bdfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_1bdfc0:
    // 0x1bdfc0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1bdfc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bdfc4:
    // 0x1bdfc4: 0x10000032  b           . + 4 + (0x32 << 2)
label_1bdfc8:
    if (ctx->pc == 0x1BDFC8u) {
        ctx->pc = 0x1BDFC8u;
            // 0x1bdfc8: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x1BDFCCu;
        goto label_1bdfcc;
    }
    ctx->pc = 0x1BDFC4u;
    {
        const bool branch_taken_0x1bdfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFC4u;
            // 0x1bdfc8: 0xacc30010  sw          $v1, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdfc4) {
            ctx->pc = 0x1BE090u;
            goto label_1be090;
        }
    }
    ctx->pc = 0x1BDFCCu;
label_1bdfcc:
    // 0x1bdfcc: 0x0  nop
    ctx->pc = 0x1bdfccu;
    // NOP
label_1bdfd0:
    // 0x1bdfd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bdfd4:
    // 0x1bdfd4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1bdfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1bdfd8:
    // 0x1bdfd8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x1bdfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_1bdfdc:
    // 0x1bdfdc: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x1bdfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_1bdfe0:
    // 0x1bdfe0: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1bdfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_1bdfe4:
    // 0x1bdfe4: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x1bdfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_1bdfe8:
    // 0x1bdfe8: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1bdfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1bdfec:
    // 0x1bdfec: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1bdfecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_1bdff0:
    // 0x1bdff0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1bdff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1bdff4:
    // 0x1bdff4: 0x10000026  b           . + 4 + (0x26 << 2)
label_1bdff8:
    if (ctx->pc == 0x1BDFF8u) {
        ctx->pc = 0x1BDFF8u;
            // 0x1bdff8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1BDFFCu;
        goto label_1bdffc;
    }
    ctx->pc = 0x1BDFF4u;
    {
        const bool branch_taken_0x1bdff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BDFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BDFF4u;
            // 0x1bdff8: 0xacc20010  sw          $v0, 0x10($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bdff4) {
            ctx->pc = 0x1BE090u;
            goto label_1be090;
        }
    }
    ctx->pc = 0x1BDFFCu;
label_1bdffc:
    // 0x1bdffc: 0x0  nop
    ctx->pc = 0x1bdffcu;
    // NOP
label_1be000:
    // 0x1be000: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1be000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1be004:
    // 0x1be004: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x1be004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_1be008:
    // 0x1be008: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1be008u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1be00c:
    // 0x1be00c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x1be00cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_1be010:
    // 0x1be010: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1be010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1be014:
    // 0x1be014: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x1be014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_1be018:
    // 0x1be018: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x1be018u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_1be01c:
    // 0x1be01c: 0xacc3000c  sw          $v1, 0xC($a2)
    ctx->pc = 0x1be01cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 3));
label_1be020:
    // 0x1be020: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x1be020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_1be024:
    // 0x1be024: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1be024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1be028:
    // 0x1be028: 0xacc20024  sw          $v0, 0x24($a2)
    ctx->pc = 0x1be028u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 2));
label_1be02c:
    // 0x1be02c: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x1be02cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
label_1be030:
    // 0x1be030: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1be030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_1be034:
    // 0x1be034: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1be034u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1be038:
    // 0x1be038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be03c:
    // 0x1be03c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1be03cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1be040:
    // 0x1be040: 0xacc20018  sw          $v0, 0x18($a2)
    ctx->pc = 0x1be040u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
label_1be044:
    // 0x1be044: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x1be044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1be048:
    // 0x1be048: 0xacc3001c  sw          $v1, 0x1C($a2)
    ctx->pc = 0x1be048u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 3));
label_1be04c:
    // 0x1be04c: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x1be04cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_1be050:
    // 0x1be050: 0xacc40020  sw          $a0, 0x20($a2)
    ctx->pc = 0x1be050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 4));
label_1be054:
    // 0x1be054: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x1be054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
label_1be058:
    // 0x1be058: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1be058u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1be05c:
    // 0x1be05c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be060:
    // 0x1be060: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1be060u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1be064:
    // 0x1be064: 0xacc20028  sw          $v0, 0x28($a2)
    ctx->pc = 0x1be064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 2));
label_1be068:
    // 0x1be068: 0x8ca3002c  lw          $v1, 0x2C($a1)
    ctx->pc = 0x1be068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_1be06c:
    // 0x1be06c: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x1be06cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
label_1be070:
    // 0x1be070: 0x8ca20028  lw          $v0, 0x28($a1)
    ctx->pc = 0x1be070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_1be074:
    // 0x1be074: 0x10000006  b           . + 4 + (0x6 << 2)
label_1be078:
    if (ctx->pc == 0x1BE078u) {
        ctx->pc = 0x1BE078u;
            // 0x1be078: 0xacc20030  sw          $v0, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x1BE07Cu;
        goto label_1be07c;
    }
    ctx->pc = 0x1BE074u;
    {
        const bool branch_taken_0x1be074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE074u;
            // 0x1be078: 0xacc20030  sw          $v0, 0x30($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be074) {
            ctx->pc = 0x1BE090u;
            goto label_1be090;
        }
    }
    ctx->pc = 0x1BE07Cu;
label_1be07c:
    // 0x1be07c: 0x0  nop
    ctx->pc = 0x1be07cu;
    // NOP
label_1be080:
    // 0x1be080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be084:
    // 0x1be084: 0x24c6b4c0  addiu       $a2, $a2, -0x4B40
    ctx->pc = 0x1be084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948032));
label_1be088:
    // 0x1be088: 0x806f9cc  j           func_1BE730
label_1be08c:
    if (ctx->pc == 0x1BE08Cu) {
        ctx->pc = 0x1BE08Cu;
            // 0x1be08c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BE090u;
        goto label_1be090;
    }
    ctx->pc = 0x1BE088u;
    ctx->pc = 0x1BE08Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE088u;
            // 0x1be08c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001BE730_0x1be730(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1BE090u;
label_1be090:
    // 0x1be090: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1be090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be094:
    // 0x1be094: 0x3e00008  jr          $ra
label_1be098:
    if (ctx->pc == 0x1BE098u) {
        ctx->pc = 0x1BE098u;
            // 0x1be098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1BE09Cu;
        goto label_1be09c;
    }
    ctx->pc = 0x1BE094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE094u;
            // 0x1be098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BE09Cu;
label_1be09c:
    // 0x1be09c: 0x0  nop
    ctx->pc = 0x1be09cu;
    // NOP
label_1be0a0:
    // 0x1be0a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1be0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1be0a4:
    // 0x1be0a4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1be0a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1be0a8:
    // 0x1be0a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1be0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1be0ac:
    // 0x1be0ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1be0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1be0b0:
    // 0x1be0b0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1be0b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1be0b4:
    // 0x1be0b4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1be0b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1be0b8:
    // 0x1be0b8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1be0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1be0bc:
    // 0x1be0bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1be0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1be0c0:
    // 0x1be0c0: 0xc06f7aa  jal         func_1BDEA8
label_1be0c4:
    if (ctx->pc == 0x1BE0C4u) {
        ctx->pc = 0x1BE0C4u;
            // 0x1be0c4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BE0C8u;
        goto label_1be0c8;
    }
    ctx->pc = 0x1BE0C0u;
    SET_GPR_U32(ctx, 31, 0x1BE0C8u);
    ctx->pc = 0x1BE0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0C0u;
            // 0x1be0c4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDEA8u;
    if (runtime->hasFunction(0x1BDEA8u)) {
        auto targetFn = runtime->lookupFunction(0x1BDEA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0C8u; }
        if (ctx->pc != 0x1BE0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BDEA8_0x1bdea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE0C8u; }
        if (ctx->pc != 0x1BE0C8u) { return; }
    }
    ctx->pc = 0x1BE0C8u;
label_1be0c8:
    // 0x1be0c8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1be0c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1be0cc:
    // 0x1be0cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1be0ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1be0d0:
    // 0x1be0d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be0d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be0d4:
    // 0x1be0d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1be0d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1be0d8:
    // 0x1be0d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1be0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1be0dc:
    // 0x1be0dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1be0dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1be0e0:
    // 0x1be0e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1be0e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1be0e4:
    // 0x1be0e4: 0x806f83c  j           func_1BE0F0
label_1be0e8:
    if (ctx->pc == 0x1BE0E8u) {
        ctx->pc = 0x1BE0E8u;
            // 0x1be0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1BE0ECu;
        goto label_1be0ec;
    }
    ctx->pc = 0x1BE0E4u;
    ctx->pc = 0x1BE0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE0E4u;
            // 0x1be0e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0F0u;
    goto label_1be0f0;
    ctx->pc = 0x1BE0ECu;
label_1be0ec:
    // 0x1be0ec: 0x0  nop
    ctx->pc = 0x1be0ecu;
    // NOP
label_1be0f0:
    // 0x1be0f0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x1be0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_1be0f4:
    // 0x1be0f4: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x1be0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
label_1be0f8:
    // 0x1be0f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1be0f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1be0fc:
    // 0x1be0fc: 0xffb10108  sd          $s1, 0x108($sp)
    ctx->pc = 0x1be0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 17));
label_1be100:
    // 0x1be100: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1be100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1be104:
    // 0x1be104: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1be104u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1be108:
    // 0x1be108: 0xffb20110  sd          $s2, 0x110($sp)
    ctx->pc = 0x1be108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 18));
label_1be10c:
    // 0x1be10c: 0xffbf0118  sd          $ra, 0x118($sp)
    ctx->pc = 0x1be10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 31));
label_1be110:
    // 0x1be110: 0xc06f7d8  jal         func_1BDF60
label_1be114:
    if (ctx->pc == 0x1BE114u) {
        ctx->pc = 0x1BE114u;
            // 0x1be114: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BE118u;
        goto label_1be118;
    }
    ctx->pc = 0x1BE110u;
    SET_GPR_U32(ctx, 31, 0x1BE118u);
    ctx->pc = 0x1BE114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE110u;
            // 0x1be114: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BDF60u;
    goto label_1bdf60;
    ctx->pc = 0x1BE118u;
label_1be118:
    // 0x1be118: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1be118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1be11c:
    // 0x1be11c: 0x27a90004  addiu       $t1, $sp, 0x4
    ctx->pc = 0x1be11cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1be120:
    // 0x1be120: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x1be120u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1be124:
    // 0x1be124: 0x27ab0024  addiu       $t3, $sp, 0x24
    ctx->pc = 0x1be124u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_1be128:
    // 0x1be128: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_1be12c:
    if (ctx->pc == 0x1BE12Cu) {
        ctx->pc = 0x1BE12Cu;
            // 0x1be12c: 0x27ac0074  addiu       $t4, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->pc = 0x1BE130u;
        goto label_1be130;
    }
    ctx->pc = 0x1BE128u;
    {
        const bool branch_taken_0x1be128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE128u;
            // 0x1be12c: 0x27ac0074  addiu       $t4, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be128) {
            ctx->pc = 0x1BE1F0u;
            goto label_1be1f0;
        }
    }
    ctx->pc = 0x1BE130u;
label_1be130:
    // 0x1be130: 0x2c620003  sltiu       $v0, $v1, 0x3
    ctx->pc = 0x1be130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_1be134:
    // 0x1be134: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_1be138:
    if (ctx->pc == 0x1BE138u) {
        ctx->pc = 0x1BE138u;
            // 0x1be138: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1BE13Cu;
        goto label_1be13c;
    }
    ctx->pc = 0x1BE134u;
    {
        const bool branch_taken_0x1be134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1be134) {
            ctx->pc = 0x1BE138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE134u;
            // 0x1be138: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE1B8u;
            goto label_1be1b8;
        }
    }
    ctx->pc = 0x1BE13Cu;
label_1be13c:
    // 0x1be13c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1be13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1be140:
    // 0x1be140: 0x1462002c  bne         $v1, $v0, . + 4 + (0x2C << 2)
label_1be144:
    if (ctx->pc == 0x1BE144u) {
        ctx->pc = 0x1BE144u;
            // 0x1be144: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->pc = 0x1BE148u;
        goto label_1be148;
    }
    ctx->pc = 0x1BE140u;
    {
        const bool branch_taken_0x1be140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BE144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE140u;
            // 0x1be144: 0x3c060064  lui         $a2, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be140) {
            ctx->pc = 0x1BE1F4u;
            goto label_1be1f4;
        }
    }
    ctx->pc = 0x1BE148u;
label_1be148:
    // 0x1be148: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1be148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1be14c:
    // 0x1be14c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1be14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_1be150:
    // 0x1be150: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1be150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1be154:
    // 0x1be154: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1be154u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1be158:
    // 0x1be158: 0x8d250000  lw          $a1, 0x0($t1)
    ctx->pc = 0x1be158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_1be15c:
    // 0x1be15c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x1be15cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1be160:
    // 0x1be160: 0x8e480008  lw          $t0, 0x8($s2)
    ctx->pc = 0x1be160u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1be164:
    // 0x1be164: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1be164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_1be168:
    // 0x1be168: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x1be168u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1be16c:
    // 0x1be16c: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x1be16cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1be170:
    // 0x1be170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1be170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1be174:
    // 0x1be174: 0xafa6007c  sw          $a2, 0x7C($sp)
    ctx->pc = 0x1be174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
label_1be178:
    // 0x1be178: 0x22043  sra         $a0, $v0, 1
    ctx->pc = 0x1be178u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 1));
label_1be17c:
    // 0x1be17c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1be17cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1be180:
    // 0x1be180: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x1be180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1be184:
    // 0x1be184: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1be184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1be188:
    // 0x1be188: 0xad250000  sw          $a1, 0x0($t1)
    ctx->pc = 0x1be188u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 5));
label_1be18c:
    // 0x1be18c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x1be18cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_1be190:
    // 0x1be190: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x1be190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_1be194:
    // 0x1be194: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1be194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1be198:
    // 0x1be198: 0xad420000  sw          $v0, 0x0($t2)
    ctx->pc = 0x1be198u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 2));
label_1be19c:
    // 0x1be19c: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x1be19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_1be1a0:
    // 0x1be1a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1be1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1be1a4:
    // 0x1be1a4: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x1be1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
label_1be1a8:
    // 0x1be1a8: 0x1100000a  beqz        $t0, . + 4 + (0xA << 2)
label_1be1ac:
    if (ctx->pc == 0x1BE1ACu) {
        ctx->pc = 0x1BE1ACu;
            // 0x1be1ac: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->pc = 0x1BE1B0u;
        goto label_1be1b0;
    }
    ctx->pc = 0x1BE1A8u;
    {
        const bool branch_taken_0x1be1a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1A8u;
            // 0x1be1ac: 0xad870000  sw          $a3, 0x0($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1a8) {
            ctx->pc = 0x1BE1D4u;
            goto label_1be1d4;
        }
    }
    ctx->pc = 0x1BE1B0u;
label_1be1b0:
    // 0x1be1b0: 0x10000014  b           . + 4 + (0x14 << 2)
label_1be1b4:
    if (ctx->pc == 0x1BE1B4u) {
        ctx->pc = 0x1BE1B4u;
            // 0x1be1b4: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->pc = 0x1BE1B8u;
        goto label_1be1b8;
    }
    ctx->pc = 0x1BE1B0u;
    {
        const bool branch_taken_0x1be1b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1B0u;
            // 0x1be1b4: 0xafa80080  sw          $t0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1b0) {
            ctx->pc = 0x1BE204u;
            goto label_1be204;
        }
    }
    ctx->pc = 0x1BE1B8u;
label_1be1b8:
    // 0x1be1b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1be1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1be1bc:
    // 0x1be1bc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x1be1bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1be1c0:
    // 0x1be1c0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1be1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1be1c4:
    // 0x1be1c4: 0xafa40078  sw          $a0, 0x78($sp)
    ctx->pc = 0x1be1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
label_1be1c8:
    // 0x1be1c8: 0xad830000  sw          $v1, 0x0($t4)
    ctx->pc = 0x1be1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 3));
label_1be1cc:
    // 0x1be1cc: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_1be1d0:
    if (ctx->pc == 0x1BE1D0u) {
        ctx->pc = 0x1BE1D0u;
            // 0x1be1d0: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->pc = 0x1BE1D4u;
        goto label_1be1d4;
    }
    ctx->pc = 0x1BE1CCu;
    {
        const bool branch_taken_0x1be1cc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1CCu;
            // 0x1be1d0: 0xafa2007c  sw          $v0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1cc) {
            ctx->pc = 0x1BE1E8u;
            goto label_1be1e8;
        }
    }
    ctx->pc = 0x1BE1D4u;
label_1be1d4:
    // 0x1be1d4: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x1be1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1be1d8:
    // 0x1be1d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1be1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1be1dc:
    // 0x1be1dc: 0x10000009  b           . + 4 + (0x9 << 2)
label_1be1e0:
    if (ctx->pc == 0x1BE1E0u) {
        ctx->pc = 0x1BE1E0u;
            // 0x1be1e0: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->pc = 0x1BE1E4u;
        goto label_1be1e4;
    }
    ctx->pc = 0x1BE1DCu;
    {
        const bool branch_taken_0x1be1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1DCu;
            // 0x1be1e0: 0xafa20080  sw          $v0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1dc) {
            ctx->pc = 0x1BE204u;
            goto label_1be204;
        }
    }
    ctx->pc = 0x1BE1E4u;
label_1be1e4:
    // 0x1be1e4: 0x0  nop
    ctx->pc = 0x1be1e4u;
    // NOP
label_1be1e8:
    // 0x1be1e8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1be1ec:
    if (ctx->pc == 0x1BE1ECu) {
        ctx->pc = 0x1BE1ECu;
            // 0x1be1ec: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->pc = 0x1BE1F0u;
        goto label_1be1f0;
    }
    ctx->pc = 0x1BE1E8u;
    {
        const bool branch_taken_0x1be1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1E8u;
            // 0x1be1ec: 0xafa50080  sw          $a1, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be1e8) {
            ctx->pc = 0x1BE204u;
            goto label_1be204;
        }
    }
    ctx->pc = 0x1BE1F0u;
label_1be1f0:
    // 0x1be1f0: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x1be1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_1be1f4:
    // 0x1be1f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1be1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1be1f8:
    // 0x1be1f8: 0x24c6b500  addiu       $a2, $a2, -0x4B00
    ctx->pc = 0x1be1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294948096));
label_1be1fc:
    // 0x1be1fc: 0xc06f9cc  jal         func_1BE730
label_1be200:
    if (ctx->pc == 0x1BE200u) {
        ctx->pc = 0x1BE200u;
            // 0x1be200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BE204u;
        goto label_1be204;
    }
    ctx->pc = 0x1BE1FCu;
    SET_GPR_U32(ctx, 31, 0x1BE204u);
    ctx->pc = 0x1BE200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE1FCu;
            // 0x1be200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE730u;
    if (runtime->hasFunction(0x1BE730u)) {
        auto targetFn = runtime->lookupFunction(0x1BE730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE204u; }
        if (ctx->pc != 0x1BE204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE730_0x1be730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE204u; }
        if (ctx->pc != 0x1BE204u) { return; }
    }
    ctx->pc = 0x1BE204u;
label_1be204:
    // 0x1be204: 0xc06f9e0  jal         func_1BE780
label_1be208:
    if (ctx->pc == 0x1BE208u) {
        ctx->pc = 0x1BE20Cu;
        goto label_1be20c;
    }
    ctx->pc = 0x1BE204u;
    SET_GPR_U32(ctx, 31, 0x1BE20Cu);
    ctx->pc = 0x1BE780u;
    if (runtime->hasFunction(0x1BE780u)) {
        auto targetFn = runtime->lookupFunction(0x1BE780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE20Cu; }
        if (ctx->pc != 0x1BE20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001BE780_0x1be780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BE20Cu; }
        if (ctx->pc != 0x1BE20Cu) { return; }
    }
    ctx->pc = 0x1BE20Cu;
label_1be20c:
    // 0x1be20c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1be20cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1be210:
    // 0x1be210: 0x54430003  bnel        $v0, $v1, . + 4 + (0x3 << 2)
label_1be214:
    if (ctx->pc == 0x1BE214u) {
        ctx->pc = 0x1BE214u;
            // 0x1be214: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->pc = 0x1BE218u;
        goto label_1be218;
    }
    ctx->pc = 0x1BE210u;
    {
        const bool branch_taken_0x1be210 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1be210) {
            ctx->pc = 0x1BE214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE210u;
            // 0x1be214: 0xafa000e0  sw          $zero, 0xE0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BE220u;
            goto label_1be220;
        }
    }
    ctx->pc = 0x1BE218u;
label_1be218:
    // 0x1be218: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x1be218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_1be21c:
    // 0x1be21c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x1be21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_1be220:
    // 0x1be220: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x1be220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_1be224:
    // 0x1be224: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1be228:
    if (ctx->pc == 0x1BE228u) {
        ctx->pc = 0x1BE228u;
            // 0x1be228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BE22Cu;
        goto label_1be22c;
    }
    ctx->pc = 0x1BE224u;
    {
        const bool branch_taken_0x1be224 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BE228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE224u;
            // 0x1be228: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1be224) {
            ctx->pc = 0x1BE238u;
            goto label_1be238;
        }
    }
    ctx->pc = 0x1BE22Cu;
label_1be22c:
    // 0x1be22c: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1be22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_1be230:
    // 0x1be230: 0x40f809  jalr        $v0
label_1be234:
    if (ctx->pc == 0x1BE234u) {
        ctx->pc = 0x1BE234u;
            // 0x1be234: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1BE238u;
        goto label_1be238;
    }
    ctx->pc = 0x1BE230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BE238u);
        ctx->pc = 0x1BE234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE230u;
            // 0x1be234: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BE238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BE238u; }
            if (ctx->pc != 0x1BE238u) { return; }
        }
        }
    }
    ctx->pc = 0x1BE238u;
label_1be238:
    // 0x1be238: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x1be238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_1be23c:
    // 0x1be23c: 0xdfb10108  ld          $s1, 0x108($sp)
    ctx->pc = 0x1be23cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_1be240:
    // 0x1be240: 0xdfb20110  ld          $s2, 0x110($sp)
    ctx->pc = 0x1be240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1be244:
    // 0x1be244: 0xdfbf0118  ld          $ra, 0x118($sp)
    ctx->pc = 0x1be244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_1be248:
    // 0x1be248: 0x3e00008  jr          $ra
label_1be24c:
    if (ctx->pc == 0x1BE24Cu) {
        ctx->pc = 0x1BE24Cu;
            // 0x1be24c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1BE250u;
        goto label_fallthrough_0x1be248;
    }
    ctx->pc = 0x1BE248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BE248u;
            // 0x1be24c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1be248:
    ctx->pc = 0x1BE250u;
}
