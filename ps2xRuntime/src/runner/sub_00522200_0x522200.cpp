#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00522200
// Address: 0x522200 - 0x522400
void sub_00522200_0x522200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00522200_0x522200");
#endif

    switch (ctx->pc) {
        case 0x5222b4u: goto label_5222b4;
        case 0x5222c0u: goto label_5222c0;
        case 0x522370u: goto label_522370;
        case 0x5223c8u: goto label_5223c8;
        case 0x5223e0u: goto label_5223e0;
        default: break;
    }

    ctx->pc = 0x522200u;

    // 0x522200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x522200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x522204: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x522204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x522208: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x522208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x52220c: 0x244255c0  addiu       $v0, $v0, 0x55C0
    ctx->pc = 0x52220cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21952));
    // 0x522210: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x522210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x522214: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x522214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x522218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x52221c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x52221cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x522220: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x522220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x522224: 0x8c6589f0  lw          $a1, -0x7610($v1)
    ctx->pc = 0x522224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x522228: 0x8c5089d8  lw          $s0, -0x7628($v0)
    ctx->pc = 0x522228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937048)));
    // 0x52222c: 0x90a2002a  lbu         $v0, 0x2A($a1)
    ctx->pc = 0x52222cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 42)));
    // 0x522230: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x522230u;
    {
        const bool branch_taken_0x522230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x522234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522230u;
            // 0x522234: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522230) {
            ctx->pc = 0x522274u;
            goto label_522274;
        }
    }
    ctx->pc = 0x522238u;
    // 0x522238: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x522238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x52223c: 0x24030272  addiu       $v1, $zero, 0x272
    ctx->pc = 0x52223cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 626));
    // 0x522240: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x522240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x522244: 0x240201a1  addiu       $v0, $zero, 0x1A1
    ctx->pc = 0x522244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 417));
    // 0x522248: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x522248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x52224c: 0xae24000c  sw          $a0, 0xC($s1)
    ctx->pc = 0x52224cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 4));
    // 0x522250: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x522250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x522254: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x522254u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x522258: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x522258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x52225c: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x52225cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x522260: 0x8ca4001c  lw          $a0, 0x1C($a1)
    ctx->pc = 0x522260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x522264: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x522264u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x522268: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x522268u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x52226c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x52226Cu;
    {
        const bool branch_taken_0x52226c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x522270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52226Cu;
            // 0x522270: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x52226c) {
            ctx->pc = 0x5222C4u;
            goto label_5222c4;
        }
    }
    ctx->pc = 0x522274u;
label_522274:
    // 0x522274: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x522274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x522278: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x522278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x52227c: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x52227cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x522280: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x522280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x522284: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x522284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x522288: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x522288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x52228c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x52228cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x522290: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x522290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x522294: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x522294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x522298: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x522298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x52229c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x52229cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x5222a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x5222a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x5222a4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x5222a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x5222a8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x5222a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x5222ac: 0xc0bc0e0  jal         func_2F0380
    ctx->pc = 0x5222ACu;
    SET_GPR_U32(ctx, 31, 0x5222B4u);
    ctx->pc = 0x5222B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5222ACu;
            // 0x5222b0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0380u;
    if (runtime->hasFunction(0x2F0380u)) {
        auto targetFn = runtime->lookupFunction(0x2F0380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5222B4u; }
        if (ctx->pc != 0x5222B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0380_0x2f0380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5222B4u; }
        if (ctx->pc != 0x5222B4u) { return; }
    }
    ctx->pc = 0x5222B4u;
label_5222b4:
    // 0x5222b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5222b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5222b8: 0xc0bc0cc  jal         func_2F0330
    ctx->pc = 0x5222B8u;
    SET_GPR_U32(ctx, 31, 0x5222C0u);
    ctx->pc = 0x5222BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5222B8u;
            // 0x5222bc: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0330u;
    if (runtime->hasFunction(0x2F0330u)) {
        auto targetFn = runtime->lookupFunction(0x2F0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5222C0u; }
        if (ctx->pc != 0x5222C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0330_0x2f0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5222C0u; }
        if (ctx->pc != 0x5222C0u) { return; }
    }
    ctx->pc = 0x5222C0u;
label_5222c0:
    // 0x5222c0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x5222c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_5222c4:
    // 0x5222c4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x5222c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x5222c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x5222c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5222cc: 0xa223003c  sb          $v1, 0x3C($s1)
    ctx->pc = 0x5222ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 60), (uint8_t)GPR_U32(ctx, 3));
    // 0x5222d0: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x5222d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x5222d4: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x5222d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x5222d8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x5222d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x5222dc: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x5222dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x5222e0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x5222e0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x5222e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5222e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x5222e8: 0xae230024  sw          $v1, 0x24($s1)
    ctx->pc = 0x5222e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 3));
    // 0x5222ec: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x5222ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x5222f0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x5222f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x5222f4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x5222f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x5222f8: 0xa42023  subu        $a0, $a1, $a0
    ctx->pc = 0x5222f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x5222fc: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x5222fcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x522300: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x522300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x522304: 0xae230028  sw          $v1, 0x28($s1)
    ctx->pc = 0x522304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 3));
    // 0x522308: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x522308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x52230c: 0x8e23001c  lw          $v1, 0x1C($s1)
    ctx->pc = 0x52230cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x522310: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x522310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x522314: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x522314u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x522318: 0x8e240028  lw          $a0, 0x28($s1)
    ctx->pc = 0x522318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x52231c: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x52231cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x522320: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x522320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x522324: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x522324u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
    // 0x522328: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x522328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x52232c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x52232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x522330: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x522330u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x522334: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x522334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x522338: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x522338u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x52233c: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x52233cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x522340: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x522340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x522344: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x522344u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x522348: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x522348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x52234c: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x52234cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x522350: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x522350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x522354: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x522358: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x52235c: 0x3e00008  jr          $ra
    ctx->pc = 0x52235Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52235Cu;
            // 0x522360: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522364u;
    // 0x522364: 0x0  nop
    ctx->pc = 0x522364u;
    // NOP
    // 0x522368: 0x0  nop
    ctx->pc = 0x522368u;
    // NOP
    // 0x52236c: 0x0  nop
    ctx->pc = 0x52236cu;
    // NOP
label_522370:
    // 0x522370: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x522370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x522374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x522374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x522378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x522378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x52237c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52237cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x522380: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x522380u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x522384: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x522384u;
    {
        const bool branch_taken_0x522384 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x522388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522384u;
            // 0x522388: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522384) {
            ctx->pc = 0x5223E0u;
            goto label_5223e0;
        }
    }
    ctx->pc = 0x52238Cu;
    // 0x52238c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x52238cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x522390: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x522390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x522394: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x522394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
    // 0x522398: 0x24425f98  addiu       $v0, $v0, 0x5F98
    ctx->pc = 0x522398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24472));
    // 0x52239c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x52239cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5223a0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x5223A0u;
    {
        const bool branch_taken_0x5223a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5223A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5223A0u;
            // 0x5223a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5223a0) {
            ctx->pc = 0x5223C8u;
            goto label_5223c8;
        }
    }
    ctx->pc = 0x5223A8u;
    // 0x5223a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5223a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x5223ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5223acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x5223b0: 0x24636010  addiu       $v1, $v1, 0x6010
    ctx->pc = 0x5223b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24592));
    // 0x5223b4: 0x24426048  addiu       $v0, $v0, 0x6048
    ctx->pc = 0x5223b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24648));
    // 0x5223b8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5223b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x5223bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x5223bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x5223c0: 0xc148900  jal         func_522400
    ctx->pc = 0x5223C0u;
    SET_GPR_U32(ctx, 31, 0x5223C8u);
    ctx->pc = 0x5223C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5223C0u;
            // 0x5223c4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522400u;
    if (runtime->hasFunction(0x522400u)) {
        auto targetFn = runtime->lookupFunction(0x522400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5223C8u; }
        if (ctx->pc != 0x5223C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522400_0x522400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5223C8u; }
        if (ctx->pc != 0x5223C8u) { return; }
    }
    ctx->pc = 0x5223C8u;
label_5223c8:
    // 0x5223c8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x5223c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x5223cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x5223ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x5223d0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x5223D0u;
    {
        const bool branch_taken_0x5223d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x5223d0) {
            ctx->pc = 0x5223D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5223D0u;
            // 0x5223d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5223E4u;
            goto label_5223e4;
        }
    }
    ctx->pc = 0x5223D8u;
    // 0x5223d8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x5223D8u;
    SET_GPR_U32(ctx, 31, 0x5223E0u);
    ctx->pc = 0x5223DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5223D8u;
            // 0x5223dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5223E0u; }
        if (ctx->pc != 0x5223E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5223E0u; }
        if (ctx->pc != 0x5223E0u) { return; }
    }
    ctx->pc = 0x5223E0u;
label_5223e0:
    // 0x5223e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x5223e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5223e4:
    // 0x5223e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5223e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5223e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5223e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5223ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5223ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5223f0: 0x3e00008  jr          $ra
    ctx->pc = 0x5223F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5223F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5223F0u;
            // 0x5223f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5223F8u;
    // 0x5223f8: 0x0  nop
    ctx->pc = 0x5223f8u;
    // NOP
    // 0x5223fc: 0x0  nop
    ctx->pc = 0x5223fcu;
    // NOP
}
