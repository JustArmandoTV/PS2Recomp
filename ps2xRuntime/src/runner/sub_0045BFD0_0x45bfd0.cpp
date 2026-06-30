#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0045BFD0
// Address: 0x45bfd0 - 0x45c170
void sub_0045BFD0_0x45bfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045BFD0_0x45bfd0");
#endif

    switch (ctx->pc) {
        case 0x45bfd0u: goto label_45bfd0;
        case 0x45bfd4u: goto label_45bfd4;
        case 0x45bfd8u: goto label_45bfd8;
        case 0x45bfdcu: goto label_45bfdc;
        case 0x45bfe0u: goto label_45bfe0;
        case 0x45bfe4u: goto label_45bfe4;
        case 0x45bfe8u: goto label_45bfe8;
        case 0x45bfecu: goto label_45bfec;
        case 0x45bff0u: goto label_45bff0;
        case 0x45bff4u: goto label_45bff4;
        case 0x45bff8u: goto label_45bff8;
        case 0x45bffcu: goto label_45bffc;
        case 0x45c000u: goto label_45c000;
        case 0x45c004u: goto label_45c004;
        case 0x45c008u: goto label_45c008;
        case 0x45c00cu: goto label_45c00c;
        case 0x45c010u: goto label_45c010;
        case 0x45c014u: goto label_45c014;
        case 0x45c018u: goto label_45c018;
        case 0x45c01cu: goto label_45c01c;
        case 0x45c020u: goto label_45c020;
        case 0x45c024u: goto label_45c024;
        case 0x45c028u: goto label_45c028;
        case 0x45c02cu: goto label_45c02c;
        case 0x45c030u: goto label_45c030;
        case 0x45c034u: goto label_45c034;
        case 0x45c038u: goto label_45c038;
        case 0x45c03cu: goto label_45c03c;
        case 0x45c040u: goto label_45c040;
        case 0x45c044u: goto label_45c044;
        case 0x45c048u: goto label_45c048;
        case 0x45c04cu: goto label_45c04c;
        case 0x45c050u: goto label_45c050;
        case 0x45c054u: goto label_45c054;
        case 0x45c058u: goto label_45c058;
        case 0x45c05cu: goto label_45c05c;
        case 0x45c060u: goto label_45c060;
        case 0x45c064u: goto label_45c064;
        case 0x45c068u: goto label_45c068;
        case 0x45c06cu: goto label_45c06c;
        case 0x45c070u: goto label_45c070;
        case 0x45c074u: goto label_45c074;
        case 0x45c078u: goto label_45c078;
        case 0x45c07cu: goto label_45c07c;
        case 0x45c080u: goto label_45c080;
        case 0x45c084u: goto label_45c084;
        case 0x45c088u: goto label_45c088;
        case 0x45c08cu: goto label_45c08c;
        case 0x45c090u: goto label_45c090;
        case 0x45c094u: goto label_45c094;
        case 0x45c098u: goto label_45c098;
        case 0x45c09cu: goto label_45c09c;
        case 0x45c0a0u: goto label_45c0a0;
        case 0x45c0a4u: goto label_45c0a4;
        case 0x45c0a8u: goto label_45c0a8;
        case 0x45c0acu: goto label_45c0ac;
        case 0x45c0b0u: goto label_45c0b0;
        case 0x45c0b4u: goto label_45c0b4;
        case 0x45c0b8u: goto label_45c0b8;
        case 0x45c0bcu: goto label_45c0bc;
        case 0x45c0c0u: goto label_45c0c0;
        case 0x45c0c4u: goto label_45c0c4;
        case 0x45c0c8u: goto label_45c0c8;
        case 0x45c0ccu: goto label_45c0cc;
        case 0x45c0d0u: goto label_45c0d0;
        case 0x45c0d4u: goto label_45c0d4;
        case 0x45c0d8u: goto label_45c0d8;
        case 0x45c0dcu: goto label_45c0dc;
        case 0x45c0e0u: goto label_45c0e0;
        case 0x45c0e4u: goto label_45c0e4;
        case 0x45c0e8u: goto label_45c0e8;
        case 0x45c0ecu: goto label_45c0ec;
        case 0x45c0f0u: goto label_45c0f0;
        case 0x45c0f4u: goto label_45c0f4;
        case 0x45c0f8u: goto label_45c0f8;
        case 0x45c0fcu: goto label_45c0fc;
        case 0x45c100u: goto label_45c100;
        case 0x45c104u: goto label_45c104;
        case 0x45c108u: goto label_45c108;
        case 0x45c10cu: goto label_45c10c;
        case 0x45c110u: goto label_45c110;
        case 0x45c114u: goto label_45c114;
        case 0x45c118u: goto label_45c118;
        case 0x45c11cu: goto label_45c11c;
        case 0x45c120u: goto label_45c120;
        case 0x45c124u: goto label_45c124;
        case 0x45c128u: goto label_45c128;
        case 0x45c12cu: goto label_45c12c;
        case 0x45c130u: goto label_45c130;
        case 0x45c134u: goto label_45c134;
        case 0x45c138u: goto label_45c138;
        case 0x45c13cu: goto label_45c13c;
        case 0x45c140u: goto label_45c140;
        case 0x45c144u: goto label_45c144;
        case 0x45c148u: goto label_45c148;
        case 0x45c14cu: goto label_45c14c;
        case 0x45c150u: goto label_45c150;
        case 0x45c154u: goto label_45c154;
        case 0x45c158u: goto label_45c158;
        case 0x45c15cu: goto label_45c15c;
        case 0x45c160u: goto label_45c160;
        case 0x45c164u: goto label_45c164;
        case 0x45c168u: goto label_45c168;
        case 0x45c16cu: goto label_45c16c;
        default: break;
    }

    ctx->pc = 0x45bfd0u;

label_45bfd0:
    // 0x45bfd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x45bfd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_45bfd4:
    // 0x45bfd4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45bfd8:
    // 0x45bfd8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x45bfd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_45bfdc:
    // 0x45bfdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45bfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_45bfe0:
    // 0x45bfe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x45bfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_45bfe4:
    // 0x45bfe4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x45bfe4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45bfe8:
    // 0x45bfe8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45bfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45bfec:
    // 0x45bfec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45bfecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45bff0:
    // 0x45bff0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x45bff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_45bff4:
    // 0x45bff4: 0x8c840054  lw          $a0, 0x54($a0)
    ctx->pc = 0x45bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_45bff8:
    // 0x45bff8: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x45bff8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_45bffc:
    // 0x45bffc: 0xc0c9a58  jal         func_326960
label_45c000:
    if (ctx->pc == 0x45C000u) {
        ctx->pc = 0x45C000u;
            // 0x45c000: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x45C004u;
        goto label_45c004;
    }
    ctx->pc = 0x45BFFCu;
    SET_GPR_U32(ctx, 31, 0x45C004u);
    ctx->pc = 0x45C000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45BFFCu;
            // 0x45c000: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x326960u;
    if (runtime->hasFunction(0x326960u)) {
        auto targetFn = runtime->lookupFunction(0x326960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C004u; }
        if (ctx->pc != 0x45C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00326960_0x326960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C004u; }
        if (ctx->pc != 0x45C004u) { return; }
    }
    ctx->pc = 0x45C004u;
label_45c004:
    // 0x45c004: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45c004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45c008:
    // 0x45c008: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c00c:
    // 0x45c00c: 0xc123328  jal         func_48CCA0
label_45c010:
    if (ctx->pc == 0x45C010u) {
        ctx->pc = 0x45C010u;
            // 0x45c010: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x45C014u;
        goto label_45c014;
    }
    ctx->pc = 0x45C00Cu;
    SET_GPR_U32(ctx, 31, 0x45C014u);
    ctx->pc = 0x45C010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C00Cu;
            // 0x45c010: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CCA0u;
    if (runtime->hasFunction(0x48CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x48CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C014u; }
        if (ctx->pc != 0x45C014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CCA0_0x48cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C014u; }
        if (ctx->pc != 0x45C014u) { return; }
    }
    ctx->pc = 0x45C014u;
label_45c014:
    // 0x45c014: 0x8e630090  lw          $v1, 0x90($s3)
    ctx->pc = 0x45c014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
label_45c018:
    // 0x45c018: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45c018u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c01c:
    // 0x45c01c: 0x5070004a  beql        $v1, $s0, . + 4 + (0x4A << 2)
label_45c020:
    if (ctx->pc == 0x45C020u) {
        ctx->pc = 0x45C020u;
            // 0x45c020: 0xae700090  sw          $s0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 16));
        ctx->pc = 0x45C024u;
        goto label_45c024;
    }
    ctx->pc = 0x45C01Cu;
    {
        const bool branch_taken_0x45c01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x45c01c) {
            ctx->pc = 0x45C020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C01Cu;
            // 0x45c020: 0xae700090  sw          $s0, 0x90($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C148u;
            goto label_45c148;
        }
    }
    ctx->pc = 0x45C024u;
label_45c024:
    // 0x45c024: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x45c024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_45c028:
    // 0x45c028: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x45c028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_45c02c:
    // 0x45c02c: 0xc1232d8  jal         func_48CB60
label_45c030:
    if (ctx->pc == 0x45C030u) {
        ctx->pc = 0x45C030u;
            // 0x45c030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45C034u;
        goto label_45c034;
    }
    ctx->pc = 0x45C02Cu;
    SET_GPR_U32(ctx, 31, 0x45C034u);
    ctx->pc = 0x45C030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C02Cu;
            // 0x45c030: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48CB60u;
    if (runtime->hasFunction(0x48CB60u)) {
        auto targetFn = runtime->lookupFunction(0x48CB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C034u; }
        if (ctx->pc != 0x45C034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048CB60_0x48cb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C034u; }
        if (ctx->pc != 0x45C034u) { return; }
    }
    ctx->pc = 0x45C034u;
label_45c034:
    // 0x45c034: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45c034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45c038:
    // 0x45c038: 0x52030035  beql        $s0, $v1, . + 4 + (0x35 << 2)
label_45c03c:
    if (ctx->pc == 0x45C03Cu) {
        ctx->pc = 0x45C03Cu;
            // 0x45c03c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x45C040u;
        goto label_45c040;
    }
    ctx->pc = 0x45C038u;
    {
        const bool branch_taken_0x45c038 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x45c038) {
            ctx->pc = 0x45C03Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C038u;
            // 0x45c03c: 0x8e790000  lw          $t9, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C110u;
            goto label_45c110;
        }
    }
    ctx->pc = 0x45C040u;
label_45c040:
    // 0x45c040: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45c040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45c044:
    // 0x45c044: 0x52030003  beql        $s0, $v1, . + 4 + (0x3 << 2)
label_45c048:
    if (ctx->pc == 0x45C048u) {
        ctx->pc = 0x45C048u;
            // 0x45c048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45C04Cu;
        goto label_45c04c;
    }
    ctx->pc = 0x45C044u;
    {
        const bool branch_taken_0x45c044 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x45c044) {
            ctx->pc = 0x45C048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45C044u;
            // 0x45c048: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45C054u;
            goto label_45c054;
        }
    }
    ctx->pc = 0x45C04Cu;
label_45c04c:
    // 0x45c04c: 0x1000003d  b           . + 4 + (0x3D << 2)
label_45c050:
    if (ctx->pc == 0x45C050u) {
        ctx->pc = 0x45C054u;
        goto label_45c054;
    }
    ctx->pc = 0x45C04Cu;
    {
        const bool branch_taken_0x45c04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c04c) {
            ctx->pc = 0x45C144u;
            goto label_45c144;
        }
    }
    ctx->pc = 0x45C054u;
label_45c054:
    // 0x45c054: 0xc1206fc  jal         func_481BF0
label_45c058:
    if (ctx->pc == 0x45C058u) {
        ctx->pc = 0x45C05Cu;
        goto label_45c05c;
    }
    ctx->pc = 0x45C054u;
    SET_GPR_U32(ctx, 31, 0x45C05Cu);
    ctx->pc = 0x481BF0u;
    if (runtime->hasFunction(0x481BF0u)) {
        auto targetFn = runtime->lookupFunction(0x481BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C05Cu; }
        if (ctx->pc != 0x45C05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481BF0_0x481bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C05Cu; }
        if (ctx->pc != 0x45C05Cu) { return; }
    }
    ctx->pc = 0x45C05Cu;
label_45c05c:
    // 0x45c05c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x45c05cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_45c060:
    // 0x45c060: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c060u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45c064:
    // 0x45c064: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x45c064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_45c068:
    // 0x45c068: 0x320f809  jalr        $t9
label_45c06c:
    if (ctx->pc == 0x45C06Cu) {
        ctx->pc = 0x45C06Cu;
            // 0x45c06c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x45C070u;
        goto label_45c070;
    }
    ctx->pc = 0x45C068u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45C070u);
        ctx->pc = 0x45C06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C068u;
            // 0x45c06c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45C070u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45C070u; }
            if (ctx->pc != 0x45C070u) { return; }
        }
        }
    }
    ctx->pc = 0x45C070u;
label_45c070:
    // 0x45c070: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x45c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_45c074:
    // 0x45c074: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45c074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45c078:
    // 0x45c078: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x45c078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_45c07c:
    // 0x45c07c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x45c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_45c080:
    // 0x45c080: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x45c080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_45c084:
    // 0x45c084: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x45c084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_45c088:
    // 0x45c088: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x45c088u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_45c08c:
    // 0x45c08c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x45c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_45c090:
    // 0x45c090: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x45c090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_45c094:
    // 0x45c094: 0xc040180  jal         func_100600
label_45c098:
    if (ctx->pc == 0x45C098u) {
        ctx->pc = 0x45C098u;
            // 0x45c098: 0xa4450046  sh          $a1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x45C09Cu;
        goto label_45c09c;
    }
    ctx->pc = 0x45C094u;
    SET_GPR_U32(ctx, 31, 0x45C09Cu);
    ctx->pc = 0x45C098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C094u;
            // 0x45c098: 0xa4450046  sh          $a1, 0x46($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 70), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C09Cu; }
        if (ctx->pc != 0x45C09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C09Cu; }
        if (ctx->pc != 0x45C09Cu) { return; }
    }
    ctx->pc = 0x45C09Cu;
label_45c09c:
    // 0x45c09c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c09cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c0a0:
    // 0x45c0a0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
label_45c0a4:
    if (ctx->pc == 0x45C0A4u) {
        ctx->pc = 0x45C0A8u;
        goto label_45c0a8;
    }
    ctx->pc = 0x45C0A0u;
    {
        const bool branch_taken_0x45c0a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c0a0) {
            ctx->pc = 0x45C0CCu;
            goto label_45c0cc;
        }
    }
    ctx->pc = 0x45C0A8u;
label_45c0a8:
    // 0x45c0a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45c0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45c0ac:
    // 0x45c0ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45c0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45c0b0:
    // 0x45c0b0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x45c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_45c0b4:
    // 0x45c0b4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x45c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_45c0b8:
    // 0x45c0b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45c0b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45c0bc:
    // 0x45c0bc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x45c0bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45c0c0:
    // 0x45c0c0: 0xc151190  jal         func_544640
label_45c0c4:
    if (ctx->pc == 0x45C0C4u) {
        ctx->pc = 0x45C0C4u;
            // 0x45c0c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45C0C8u;
        goto label_45c0c8;
    }
    ctx->pc = 0x45C0C0u;
    SET_GPR_U32(ctx, 31, 0x45C0C8u);
    ctx->pc = 0x45C0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C0C0u;
            // 0x45c0c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x544640u;
    if (runtime->hasFunction(0x544640u)) {
        auto targetFn = runtime->lookupFunction(0x544640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C0C8u; }
        if (ctx->pc != 0x45C0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00544640_0x544640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C0C8u; }
        if (ctx->pc != 0x45C0C8u) { return; }
    }
    ctx->pc = 0x45C0C8u;
label_45c0c8:
    // 0x45c0c8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45c0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c0cc:
    // 0x45c0cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x45c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_45c0d0:
    // 0x45c0d0: 0x8c420ec8  lw          $v0, 0xEC8($v0)
    ctx->pc = 0x45c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3784)));
label_45c0d4:
    // 0x45c0d4: 0xc1206b0  jal         func_481AC0
label_45c0d8:
    if (ctx->pc == 0x45C0D8u) {
        ctx->pc = 0x45C0D8u;
            // 0x45c0d8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->pc = 0x45C0DCu;
        goto label_45c0dc;
    }
    ctx->pc = 0x45C0D4u;
    SET_GPR_U32(ctx, 31, 0x45C0DCu);
    ctx->pc = 0x45C0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45C0D4u;
            // 0x45c0d8: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x481AC0u;
    if (runtime->hasFunction(0x481AC0u)) {
        auto targetFn = runtime->lookupFunction(0x481AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C0DCu; }
        if (ctx->pc != 0x45C0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00481AC0_0x481ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45C0DCu; }
        if (ctx->pc != 0x45C0DCu) { return; }
    }
    ctx->pc = 0x45C0DCu;
label_45c0dc:
    // 0x45c0dc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x45c0dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_45c0e0:
    // 0x45c0e0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x45c0e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45c0e4:
    // 0x45c0e4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x45c0e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_45c0e8:
    // 0x45c0e8: 0x320f809  jalr        $t9
label_45c0ec:
    if (ctx->pc == 0x45C0ECu) {
        ctx->pc = 0x45C0ECu;
            // 0x45c0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45C0F0u;
        goto label_45c0f0;
    }
    ctx->pc = 0x45C0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45C0F0u);
        ctx->pc = 0x45C0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C0E8u;
            // 0x45c0ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45C0F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45C0F0u; }
            if (ctx->pc != 0x45C0F0u) { return; }
        }
        }
    }
    ctx->pc = 0x45C0F0u;
label_45c0f0:
    // 0x45c0f0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x45c0f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_45c0f4:
    // 0x45c0f4: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x45c0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_45c0f8:
    // 0x45c0f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45c0f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45c0fc:
    // 0x45c0fc: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x45c0fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_45c100:
    // 0x45c100: 0x320f809  jalr        $t9
label_45c104:
    if (ctx->pc == 0x45C104u) {
        ctx->pc = 0x45C104u;
            // 0x45c104: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->pc = 0x45C108u;
        goto label_45c108;
    }
    ctx->pc = 0x45C100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45C108u);
        ctx->pc = 0x45C104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C100u;
            // 0x45c104: 0x24a51a60  addiu       $a1, $a1, 0x1A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6752));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45C108u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45C108u; }
            if (ctx->pc != 0x45C108u) { return; }
        }
        }
    }
    ctx->pc = 0x45C108u;
label_45c108:
    // 0x45c108: 0x1000000e  b           . + 4 + (0xE << 2)
label_45c10c:
    if (ctx->pc == 0x45C10Cu) {
        ctx->pc = 0x45C110u;
        goto label_45c110;
    }
    ctx->pc = 0x45C108u;
    {
        const bool branch_taken_0x45c108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x45c108) {
            ctx->pc = 0x45C144u;
            goto label_45c144;
        }
    }
    ctx->pc = 0x45C110u;
label_45c110:
    // 0x45c110: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x45c110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45c114:
    // 0x45c114: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x45c114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_45c118:
    // 0x45c118: 0x320f809  jalr        $t9
label_45c11c:
    if (ctx->pc == 0x45C11Cu) {
        ctx->pc = 0x45C11Cu;
            // 0x45c11c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x45C120u;
        goto label_45c120;
    }
    ctx->pc = 0x45C118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45C120u);
        ctx->pc = 0x45C11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C118u;
            // 0x45c11c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45C120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45C120u; }
            if (ctx->pc != 0x45C120u) { return; }
        }
        }
    }
    ctx->pc = 0x45C120u;
label_45c120:
    // 0x45c120: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x45c120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_45c124:
    // 0x45c124: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x45c124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45c128:
    // 0x45c128: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x45c128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_45c12c:
    // 0x45c12c: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x45c12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_45c130:
    // 0x45c130: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x45c130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_45c134:
    // 0x45c134: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x45c134u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_45c138:
    // 0x45c138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x45c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_45c13c:
    // 0x45c13c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x45c13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_45c140:
    // 0x45c140: 0xa4650046  sh          $a1, 0x46($v1)
    ctx->pc = 0x45c140u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 5));
label_45c144:
    // 0x45c144: 0xae700090  sw          $s0, 0x90($s3)
    ctx->pc = 0x45c144u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 16));
label_45c148:
    // 0x45c148: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x45c148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_45c14c:
    // 0x45c14c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x45c14cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_45c150:
    // 0x45c150: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45c150u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45c154:
    // 0x45c154: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45c154u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45c158:
    // 0x45c158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45c158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45c15c:
    // 0x45c15c: 0x3e00008  jr          $ra
label_45c160:
    if (ctx->pc == 0x45C160u) {
        ctx->pc = 0x45C160u;
            // 0x45c160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x45C164u;
        goto label_45c164;
    }
    ctx->pc = 0x45C15Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45C160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45C15Cu;
            // 0x45c160: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45C164u;
label_45c164:
    // 0x45c164: 0x0  nop
    ctx->pc = 0x45c164u;
    // NOP
label_45c168:
    // 0x45c168: 0x0  nop
    ctx->pc = 0x45c168u;
    // NOP
label_45c16c:
    // 0x45c16c: 0x0  nop
    ctx->pc = 0x45c16cu;
    // NOP
}
