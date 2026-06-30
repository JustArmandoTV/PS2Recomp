#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E17A0
// Address: 0x2e17a0 - 0x2e1c10
void sub_002E17A0_0x2e17a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E17A0_0x2e17a0");
#endif

    switch (ctx->pc) {
        case 0x2e1808u: goto label_2e1808;
        case 0x2e1824u: goto label_2e1824;
        case 0x2e1850u: goto label_2e1850;
        case 0x2e1860u: goto label_2e1860;
        case 0x2e1894u: goto label_2e1894;
        case 0x2e18ccu: goto label_2e18cc;
        case 0x2e18d8u: goto label_2e18d8;
        case 0x2e1900u: goto label_2e1900;
        case 0x2e190cu: goto label_2e190c;
        case 0x2e1924u: goto label_2e1924;
        case 0x2e1954u: goto label_2e1954;
        case 0x2e1964u: goto label_2e1964;
        case 0x2e19b4u: goto label_2e19b4;
        case 0x2e19c0u: goto label_2e19c0;
        case 0x2e19ccu: goto label_2e19cc;
        case 0x2e1a08u: goto label_2e1a08;
        case 0x2e1a24u: goto label_2e1a24;
        case 0x2e1a5cu: goto label_2e1a5c;
        case 0x2e1a68u: goto label_2e1a68;
        case 0x2e1a84u: goto label_2e1a84;
        case 0x2e1ab8u: goto label_2e1ab8;
        case 0x2e1b0cu: goto label_2e1b0c;
        case 0x2e1b60u: goto label_2e1b60;
        case 0x2e1b6cu: goto label_2e1b6c;
        case 0x2e1b78u: goto label_2e1b78;
        default: break;
    }

    ctx->pc = 0x2e17a0u;

    // 0x2e17a0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2e17a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x2e17a4: 0x3c024974  lui         $v0, 0x4974
    ctx->pc = 0x2e17a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18804 << 16));
    // 0x2e17a8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2e17a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2e17ac: 0x344323f0  ori         $v1, $v0, 0x23F0
    ctx->pc = 0x2e17acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9200);
    // 0x2e17b0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2e17b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2e17b4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e17b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e17b8: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2e17b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2e17bc: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e17bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e17c0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2e17c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2e17c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e17c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e17c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2e17c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2e17cc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e17ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e17d0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e17d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e17d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e17d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e17d8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e17d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e17dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e17e0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e17e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17e4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e17e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e17e8: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2e17e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17ec: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e17ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e17f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2e17f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e17f4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e17f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e17f8: 0xafa700d0  sw          $a3, 0xD0($sp)
    ctx->pc = 0x2e17f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 7));
    // 0x2e17fc: 0xafa900cc  sw          $t1, 0xCC($sp)
    ctx->pc = 0x2e17fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 9));
    // 0x2e1800: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E1800u;
    SET_GPR_U32(ctx, 31, 0x2E1808u);
    ctx->pc = 0x2E1804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1800u;
            // 0x2e1804: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1808u; }
        if (ctx->pc != 0x2E1808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1808u; }
        if (ctx->pc != 0x2E1808u) { return; }
    }
    ctx->pc = 0x2E1808u;
label_2e1808:
    // 0x2e1808: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2e1808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x2e180c: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2e180cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x2e1810: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e1810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e1814: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2e1814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e1818: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2e1818u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e181c: 0xc04781c  jal         func_11E070
    ctx->pc = 0x2E181Cu;
    SET_GPR_U32(ctx, 31, 0x2E1824u);
    ctx->pc = 0x2E1820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E181Cu;
            // 0x2e1820: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E070u;
    if (runtime->hasFunction(0x11E070u)) {
        auto targetFn = runtime->lookupFunction(0x11E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1824u; }
        if (ctx->pc != 0x2E1824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E070_0x11e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1824u; }
        if (ctx->pc != 0x2E1824u) { return; }
    }
    ctx->pc = 0x2E1824u;
label_2e1824:
    // 0x2e1824: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2e1824u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2e1828: 0x120000ea  beqz        $s0, . + 4 + (0xEA << 2)
    ctx->pc = 0x2E1828u;
    {
        const bool branch_taken_0x2e1828 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E182Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1828u;
            // 0x2e182c: 0xa6600056  sh          $zero, 0x56($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1828) {
            ctx->pc = 0x2E1BD4u;
            goto label_2e1bd4;
        }
    }
    ctx->pc = 0x2E1830u;
    // 0x2e1830: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2e1830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e1834: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2e1834u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2e1838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2e183c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2e183cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2e1840: 0x8c57000c  lw          $s7, 0xC($v0)
    ctx->pc = 0x2e1840u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e1844: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x2e1844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2e1848: 0x8ef00004  lw          $s0, 0x4($s7)
    ctx->pc = 0x2e1848u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x2e184c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2e184cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2e1850:
    // 0x2e1850: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2e1850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2e1854: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x2e1854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2e1858: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E1858u;
    SET_GPR_U32(ctx, 31, 0x2E1860u);
    ctx->pc = 0x2E185Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1858u;
            // 0x2e185c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1860u; }
        if (ctx->pc != 0x2E1860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1860u; }
        if (ctx->pc != 0x2E1860u) { return; }
    }
    ctx->pc = 0x2E1860u;
label_2e1860:
    // 0x2e1860: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2e1860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e1864: 0x1222001e  beq         $s1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2E1864u;
    {
        const bool branch_taken_0x2e1864 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1864) {
            ctx->pc = 0x2E18E0u;
            goto label_2e18e0;
        }
    }
    ctx->pc = 0x2E186Cu;
    // 0x2e186c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1870: 0x1222001b  beq         $s1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2E1870u;
    {
        const bool branch_taken_0x2e1870 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e1870) {
            ctx->pc = 0x2E18E0u;
            goto label_2e18e0;
        }
    }
    ctx->pc = 0x2E1878u;
    // 0x2e1878: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1878u;
    {
        const bool branch_taken_0x2e1878 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1878) {
            ctx->pc = 0x2E1888u;
            goto label_2e1888;
        }
    }
    ctx->pc = 0x2E1880u;
    // 0x2e1880: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x2E1880u;
    {
        const bool branch_taken_0x2e1880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1880) {
            ctx->pc = 0x2E1918u;
            goto label_2e1918;
        }
    }
    ctx->pc = 0x2E1888u;
label_2e1888:
    // 0x2e1888: 0x8fa500d0  lw          $a1, 0xD0($sp)
    ctx->pc = 0x2e1888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2e188c: 0xc04cc08  jal         func_133020
    ctx->pc = 0x2E188Cu;
    SET_GPR_U32(ctx, 31, 0x2E1894u);
    ctx->pc = 0x2E1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E188Cu;
            // 0x2e1890: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1894u; }
        if (ctx->pc != 0x2E1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1894u; }
        if (ctx->pc != 0x2E1894u) { return; }
    }
    ctx->pc = 0x2E1894u;
label_2e1894:
    // 0x2e1894: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e1894u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1898: 0x0  nop
    ctx->pc = 0x2e1898u;
    // NOP
    // 0x2e189c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2e189cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e18a0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E18A0u;
    {
        const bool branch_taken_0x2e18a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E18A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E18A0u;
            // 0x2e18a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18a0) {
            ctx->pc = 0x2E18ACu;
            goto label_2e18ac;
        }
    }
    ctx->pc = 0x2E18A8u;
    // 0x2e18a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e18a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e18ac:
    // 0x2e18ac: 0x305400ff  andi        $s4, $v0, 0xFF
    ctx->pc = 0x2e18acu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2e18b0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e18b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e18b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e18b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e18b8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e18b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18bc: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2e18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e18c0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e18c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e18c4: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E18C4u;
    SET_GPR_U32(ctx, 31, 0x2E18CCu);
    ctx->pc = 0x2E18C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E18C4u;
            // 0x2e18c8: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E18CCu; }
        if (ctx->pc != 0x2E18CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E18CCu; }
        if (ctx->pc != 0x2E18CCu) { return; }
    }
    ctx->pc = 0x2E18CCu;
label_2e18cc:
    // 0x2e18cc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e18ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e18d0: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E18D0u;
    SET_GPR_U32(ctx, 31, 0x2E18D8u);
    ctx->pc = 0x2E18D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E18D0u;
            // 0x2e18d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E18D8u; }
        if (ctx->pc != 0x2E18D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E18D8u; }
        if (ctx->pc != 0x2E18D8u) { return; }
    }
    ctx->pc = 0x2E18D8u;
label_2e18d8:
    // 0x2e18d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x2E18D8u;
    {
        const bool branch_taken_0x2e18d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E18DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E18D8u;
            // 0x2e18dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e18d8) {
            ctx->pc = 0x2E1928u;
            goto label_2e1928;
        }
    }
    ctx->pc = 0x2E18E0u;
label_2e18e0:
    // 0x2e18e0: 0x2634ffff  addiu       $s4, $s1, -0x1
    ctx->pc = 0x2e18e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x2e18e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e18e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e18e8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e18ec: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x2e18ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2e18f0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2e18f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e18f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e18f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e18f8: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E18F8u;
    SET_GPR_U32(ctx, 31, 0x2E1900u);
    ctx->pc = 0x2E18FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E18F8u;
            // 0x2e18fc: 0x2022821  addu        $a1, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1900u; }
        if (ctx->pc != 0x2E1900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1900u; }
        if (ctx->pc != 0x2E1900u) { return; }
    }
    ctx->pc = 0x2E1900u;
label_2e1900:
    // 0x2e1900: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e1900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e1904: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E1904u;
    SET_GPR_U32(ctx, 31, 0x2E190Cu);
    ctx->pc = 0x2E1908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1904u;
            // 0x2e1908: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E190Cu; }
        if (ctx->pc != 0x2E190Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E190Cu; }
        if (ctx->pc != 0x2E190Cu) { return; }
    }
    ctx->pc = 0x2E190Cu;
label_2e190c:
    // 0x2e190c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2E190Cu;
    {
        const bool branch_taken_0x2e190c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E190Cu;
            // 0x2e1910: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e190c) {
            ctx->pc = 0x2E1928u;
            goto label_2e1928;
        }
    }
    ctx->pc = 0x2E1914u;
    // 0x2e1914: 0x0  nop
    ctx->pc = 0x2e1914u;
    // NOP
label_2e1918:
    // 0x2e1918: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2e1918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2e191c: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E191Cu;
    SET_GPR_U32(ctx, 31, 0x2E1924u);
    ctx->pc = 0x2E1920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E191Cu;
            // 0x2e1920: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1924u; }
        if (ctx->pc != 0x2E1924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1924u; }
        if (ctx->pc != 0x2E1924u) { return; }
    }
    ctx->pc = 0x2E1924u;
label_2e1924:
    // 0x2e1924: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x2e1924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e1928:
    // 0x2e1928: 0x3a820002  xori        $v0, $s4, 0x2
    ctx->pc = 0x2e1928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
    // 0x2e192c: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2e192cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1930: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e1930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e1934: 0x3a820001  xori        $v0, $s4, 0x1
    ctx->pc = 0x2e1934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)1);
    // 0x2e1938: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2e1938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2e193c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2e193cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e1940: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x2e1940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x2e1944: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1948: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2e1948u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e194c: 0xc0bc5b0  jal         func_2F16C0
    ctx->pc = 0x2E194Cu;
    SET_GPR_U32(ctx, 31, 0x2E1954u);
    ctx->pc = 0x2E1950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E194Cu;
            // 0x2e1950: 0x2023021  addu        $a2, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F16C0u;
    if (runtime->hasFunction(0x2F16C0u)) {
        auto targetFn = runtime->lookupFunction(0x2F16C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1954u; }
        if (ctx->pc != 0x2E1954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F16C0_0x2f16c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1954u; }
        if (ctx->pc != 0x2E1954u) { return; }
    }
    ctx->pc = 0x2E1954u;
label_2e1954:
    // 0x2e1954: 0x46000582  mul.s       $f22, $f0, $f0
    ctx->pc = 0x2e1954u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2e1958: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x2e1958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e195c: 0xc04cc34  jal         func_1330D0
    ctx->pc = 0x2E195Cu;
    SET_GPR_U32(ctx, 31, 0x2E1964u);
    ctx->pc = 0x2E1960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E195Cu;
            // 0x2e1960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1964u; }
        if (ctx->pc != 0x2E1964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1964u; }
        if (ctx->pc != 0x2E1964u) { return; }
    }
    ctx->pc = 0x2E1964u;
label_2e1964:
    // 0x2e1964: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x2e1964u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1968: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1968u;
    {
        const bool branch_taken_0x2e1968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1968) {
            ctx->pc = 0x2E1980u;
            goto label_2e1980;
        }
    }
    ctx->pc = 0x2E1970u;
    // 0x2e1970: 0x4614b036  c.le.s      $f22, $f20
    ctx->pc = 0x2e1970u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1974: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x2E1974u;
    {
        const bool branch_taken_0x2e1974 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1974) {
            ctx->pc = 0x2E19A0u;
            goto label_2e19a0;
        }
    }
    ctx->pc = 0x2E197Cu;
    // 0x2e197c: 0x0  nop
    ctx->pc = 0x2e197cu;
    // NOP
label_2e1980:
    // 0x2e1980: 0x4614b034  c.lt.s      $f22, $f20
    ctx->pc = 0x2e1980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1984: 0x4500007c  bc1f        . + 4 + (0x7C << 2)
    ctx->pc = 0x2E1984u;
    {
        const bool branch_taken_0x2e1984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1984) {
            ctx->pc = 0x2E1B78u;
            goto label_2e1b78;
        }
    }
    ctx->pc = 0x2E198Cu;
    // 0x2e198c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e198cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1990: 0x0  nop
    ctx->pc = 0x2e1990u;
    // NOP
    // 0x2e1994: 0x46160832  c.eq.s      $f1, $f22
    ctx->pc = 0x2e1994u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1998: 0x45000077  bc1f        . + 4 + (0x77 << 2)
    ctx->pc = 0x2E1998u;
    {
        const bool branch_taken_0x2e1998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1998) {
            ctx->pc = 0x2E1B78u;
            goto label_2e1b78;
        }
    }
    ctx->pc = 0x2E19A0u;
label_2e19a0:
    // 0x2e19a0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x2e19a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e19a4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2e19a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2e19a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2e19a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19ac: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E19ACu;
    SET_GPR_U32(ctx, 31, 0x2E19B4u);
    ctx->pc = 0x2E19B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E19ACu;
            // 0x2e19b0: 0x4600b506  mov.s       $f20, $f22 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E19B4u; }
        if (ctx->pc != 0x2E19B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E19B4u; }
        if (ctx->pc != 0x2E19B4u) { return; }
    }
    ctx->pc = 0x2E19B4u;
label_2e19b4:
    // 0x2e19b4: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x2e19b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x2e19b8: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E19B8u;
    SET_GPR_U32(ctx, 31, 0x2E19C0u);
    ctx->pc = 0x2E19BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E19B8u;
            // 0x2e19bc: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E19C0u; }
        if (ctx->pc != 0x2E19C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E19C0u; }
        if (ctx->pc != 0x2E19C0u) { return; }
    }
    ctx->pc = 0x2E19C0u;
label_2e19c0:
    // 0x2e19c0: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e19c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e19c4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E19C4u;
    SET_GPR_U32(ctx, 31, 0x2E19CCu);
    ctx->pc = 0x2E19C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E19C4u;
            // 0x2e19c8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E19CCu; }
        if (ctx->pc != 0x2E19CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E19CCu; }
        if (ctx->pc != 0x2E19CCu) { return; }
    }
    ctx->pc = 0x2E19CCu;
label_2e19cc:
    // 0x2e19cc: 0x3a820002  xori        $v0, $s4, 0x2
    ctx->pc = 0x2e19ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)2);
    // 0x2e19d0: 0xae770040  sw          $s7, 0x40($s3)
    ctx->pc = 0x2e19d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 64), GPR_U32(ctx, 23));
    // 0x2e19d4: 0x2c5e0001  sltiu       $fp, $v0, 0x1
    ctx->pc = 0x2e19d4u;
    SET_GPR_U64(ctx, 30, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2e19d8: 0x2de1021  addu        $v0, $s6, $fp
    ctx->pc = 0x2e19d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x2e19dc: 0xa6620052  sh          $v0, 0x52($s3)
    ctx->pc = 0x2e19dcu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e19e0: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x2e19e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x2e19e4: 0xa6620054  sh          $v0, 0x54($s3)
    ctx->pc = 0x2e19e4u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 84), (uint16_t)GPR_U32(ctx, 2));
    // 0x2e19e8: 0xa6740056  sh          $s4, 0x56($s3)
    ctx->pc = 0x2e19e8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 20));
    // 0x2e19ec: 0xa6740050  sh          $s4, 0x50($s3)
    ctx->pc = 0x2e19ecu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 20));
    // 0x2e19f0: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e19f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e19f4: 0x9442001c  lhu         $v0, 0x1C($v0)
    ctx->pc = 0x2e19f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e19f8: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x2e19f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2e19fc: 0xae600048  sw          $zero, 0x48($s3)
    ctx->pc = 0x2e19fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 72), GPR_U32(ctx, 0));
    // 0x2e1a00: 0x15a100  sll         $s4, $s5, 4
    ctx->pc = 0x2e1a00u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x2e1a04: 0x0  nop
    ctx->pc = 0x2e1a04u;
    // NOP
label_2e1a08:
    // 0x2e1a08: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2e1a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1a0c: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x2e1a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e1a10: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1a14: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e1a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e1a18: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e1a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1a1c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E1A1Cu;
    SET_GPR_U32(ctx, 31, 0x2E1A24u);
    ctx->pc = 0x2E1A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A1Cu;
            // 0x2e1a20: 0x742021  addu        $a0, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A24u; }
        if (ctx->pc != 0x2E1A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A24u; }
        if (ctx->pc != 0x2E1A24u) { return; }
    }
    ctx->pc = 0x2E1A24u;
label_2e1a24:
    // 0x2e1a24: 0xc6610048  lwc1        $f1, 0x48($s3)
    ctx->pc = 0x2e1a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1a28: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2e1a28u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x2e1a2c: 0x2694fff0  addiu       $s4, $s4, -0x10
    ctx->pc = 0x2e1a2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967280));
    // 0x2e1a30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e1a30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e1a34: 0x16a0fff4  bnez        $s5, . + 4 + (-0xC << 2)
    ctx->pc = 0x2E1A34u;
    {
        const bool branch_taken_0x2e1a34 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A34u;
            // 0x2e1a38: 0xe6600048  swc1        $f0, 0x48($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a34) {
            ctx->pc = 0x2E1A08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1a08;
        }
    }
    ctx->pc = 0x2E1A3Cu;
    // 0x2e1a3c: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e1a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1a40: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e1a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e1a44: 0x96630052  lhu         $v1, 0x52($s3)
    ctx->pc = 0x2e1a44u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 82)));
    // 0x2e1a48: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2e1a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e1a4c: 0x7ea023  subu        $s4, $v1, $fp
    ctx->pc = 0x2e1a4cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x2e1a50: 0x14a900  sll         $s5, $s4, 4
    ctx->pc = 0x2e1a50u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x2e1a54: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E1A54u;
    SET_GPR_U32(ctx, 31, 0x2E1A5Cu);
    ctx->pc = 0x2E1A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A54u;
            // 0x2e1a58: 0x552021  addu        $a0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A5Cu; }
        if (ctx->pc != 0x2E1A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A5Cu; }
        if (ctx->pc != 0x2E1A5Cu) { return; }
    }
    ctx->pc = 0x2E1A5Cu;
label_2e1a5c:
    // 0x2e1a5c: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x2E1A5Cu;
    {
        const bool branch_taken_0x2e1a5c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A5Cu;
            // 0x2e1a60: 0x46000586  mov.s       $f22, $f0 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a5c) {
            ctx->pc = 0x2E1A98u;
            goto label_2e1a98;
        }
    }
    ctx->pc = 0x2E1A64u;
    // 0x2e1a64: 0x0  nop
    ctx->pc = 0x2e1a64u;
    // NOP
label_2e1a68:
    // 0x2e1a68: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x2e1a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1a6c: 0x2682ffff  addiu       $v0, $s4, -0x1
    ctx->pc = 0x2e1a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e1a70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2e1a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2e1a74: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2e1a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e1a78: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x2e1a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e1a7c: 0xc04cc1c  jal         func_133070
    ctx->pc = 0x2E1A7Cu;
    SET_GPR_U32(ctx, 31, 0x2E1A84u);
    ctx->pc = 0x2E1A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A7Cu;
            // 0x2e1a80: 0x752021  addu        $a0, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133070u;
    if (runtime->hasFunction(0x133070u)) {
        auto targetFn = runtime->lookupFunction(0x133070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A84u; }
        if (ctx->pc != 0x2E1A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133070_0x133070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1A84u; }
        if (ctx->pc != 0x2E1A84u) { return; }
    }
    ctx->pc = 0x2E1A84u;
label_2e1a84:
    // 0x2e1a84: 0x4600b580  add.s       $f22, $f22, $f0
    ctx->pc = 0x2e1a84u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x2e1a88: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x2e1a88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x2e1a8c: 0x1680fff6  bnez        $s4, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E1A8Cu;
    {
        const bool branch_taken_0x2e1a8c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1A8Cu;
            // 0x2e1a90: 0x26b5fff0  addiu       $s5, $s5, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1a8c) {
            ctx->pc = 0x2E1A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1a68;
        }
    }
    ctx->pc = 0x2E1A94u;
    // 0x2e1a94: 0x0  nop
    ctx->pc = 0x2e1a94u;
    // NOP
label_2e1a98:
    // 0x2e1a98: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2e1a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2e1a9c: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2e1a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e1aa0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2e1aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2e1aa4: 0x4600b003  div.s       $f0, $f22, $f0
    ctx->pc = 0x2e1aa4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[0] = ctx->f[22] / ctx->f[0];
    // 0x2e1aa8: 0x0  nop
    ctx->pc = 0x2e1aa8u;
    // NOP
    // 0x2e1aac: 0x0  nop
    ctx->pc = 0x2e1aacu;
    // NOP
    // 0x2e1ab0: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E1AB0u;
    SET_GPR_U32(ctx, 31, 0x2E1AB8u);
    ctx->pc = 0x2E1AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1AB0u;
            // 0x2e1ab4: 0xe6600044  swc1        $f0, 0x44($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 68), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1AB8u; }
        if (ctx->pc != 0x2E1AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1AB8u; }
        if (ctx->pc != 0x2E1AB8u) { return; }
    }
    ctx->pc = 0x2E1AB8u;
label_2e1ab8:
    // 0x2e1ab8: 0xc66c0044  lwc1        $f12, 0x44($s3)
    ctx->pc = 0x2e1ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e1abc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e1abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1ac0: 0x96e5001e  lhu         $a1, 0x1E($s7)
    ctx->pc = 0x2e1ac0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 30)));
    // 0x2e1ac4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1ac4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1ac8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2e1ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e1acc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2e1accu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1ad0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2E1AD0u;
    {
        const bool branch_taken_0x2e1ad0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E1AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1AD0u;
            // 0x2e1ad4: 0x30a50001  andi        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1ad0) {
            ctx->pc = 0x2E1ADCu;
            goto label_2e1adc;
        }
    }
    ctx->pc = 0x2E1AD8u;
    // 0x2e1ad8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e1ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1adc:
    // 0x2e1adc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x2e1adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x2e1ae0: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2e1ae0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2e1ae4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x2E1AE4u;
    {
        const bool branch_taken_0x2e1ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e1ae4) {
            ctx->pc = 0x2E1B78u;
            goto label_2e1b78;
        }
    }
    ctx->pc = 0x2E1AECu;
    // 0x2e1aec: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x2e1aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x2e1af0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2e1af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e1af4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e1af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e1af8: 0x9448001c  lhu         $t0, 0x1C($v0)
    ctx->pc = 0x2e1af8u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2e1afc: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2e1afcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e1b00: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x2e1b00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2e1b04: 0xc0bc2a8  jal         func_2F0AA0
    ctx->pc = 0x2E1B04u;
    SET_GPR_U32(ctx, 31, 0x2E1B0Cu);
    ctx->pc = 0x2E1B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B04u;
            // 0x2e1b08: 0x24090003  addiu       $t1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0AA0u;
    if (runtime->hasFunction(0x2F0AA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F0AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B0Cu; }
        if (ctx->pc != 0x2E1B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0AA0_0x2f0aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B0Cu; }
        if (ctx->pc != 0x2E1B0Cu) { return; }
    }
    ctx->pc = 0x2E1B0Cu;
label_2e1b0c:
    // 0x2e1b0c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x2e1b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
    // 0x2e1b10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e1b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e1b14: 0x0  nop
    ctx->pc = 0x2e1b14u;
    // NOP
    // 0x2e1b18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e1b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1b1c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2E1B1Cu;
    {
        const bool branch_taken_0x2e1b1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1b1c) {
            ctx->pc = 0x2E1B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B1Cu;
            // 0x2e1b20: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1B34u;
            goto label_2e1b34;
        }
    }
    ctx->pc = 0x2E1B24u;
    // 0x2e1b24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1b24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e1b28: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e1b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e1b2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1B2Cu;
    {
        const bool branch_taken_0x2e1b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B2Cu;
            // 0x2e1b30: 0x3063ffff  andi        $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b2c) {
            ctx->pc = 0x2E1B4Cu;
            goto label_2e1b4c;
        }
    }
    ctx->pc = 0x2E1B34u;
label_2e1b34:
    // 0x2e1b34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x2e1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x2e1b38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2e1b38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x2e1b3c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x2e1b3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x2e1b40: 0x0  nop
    ctx->pc = 0x2e1b40u;
    // NOP
    // 0x2e1b44: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2e1b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2e1b48: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2e1b48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2e1b4c:
    // 0x2e1b4c: 0xa6630052  sh          $v1, 0x52($s3)
    ctx->pc = 0x2e1b4cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 82), (uint16_t)GPR_U32(ctx, 3));
    // 0x2e1b50: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e1b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e1b54: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2e1b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2e1b58: 0xc04cc90  jal         func_133240
    ctx->pc = 0x2E1B58u;
    SET_GPR_U32(ctx, 31, 0x2E1B60u);
    ctx->pc = 0x2E1B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B58u;
            // 0x2e1b5c: 0x26660030  addiu       $a2, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B60u; }
        if (ctx->pc != 0x2E1B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B60u; }
        if (ctx->pc != 0x2E1B60u) { return; }
    }
    ctx->pc = 0x2E1B60u;
label_2e1b60:
    // 0x2e1b60: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x2e1b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x2e1b64: 0xc04cc44  jal         func_133110
    ctx->pc = 0x2E1B64u;
    SET_GPR_U32(ctx, 31, 0x2E1B6Cu);
    ctx->pc = 0x2E1B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B64u;
            // 0x2e1b68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B6Cu; }
        if (ctx->pc != 0x2E1B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B6Cu; }
        if (ctx->pc != 0x2E1B6Cu) { return; }
    }
    ctx->pc = 0x2E1B6Cu;
label_2e1b6c:
    // 0x2e1b6c: 0x26640030  addiu       $a0, $s3, 0x30
    ctx->pc = 0x2e1b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x2e1b70: 0xc04cc04  jal         func_133010
    ctx->pc = 0x2E1B70u;
    SET_GPR_U32(ctx, 31, 0x2E1B78u);
    ctx->pc = 0x2E1B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B70u;
            // 0x2e1b74: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B78u; }
        if (ctx->pc != 0x2E1B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E1B78u; }
        if (ctx->pc != 0x2E1B78u) { return; }
    }
    ctx->pc = 0x2E1B78u;
label_2e1b78:
    // 0x2e1b78: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2e1b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2e1b7c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2e1b7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2e1b80: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2e1b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2e1b84: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2e1b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x2e1b88: 0x96e3001c  lhu         $v1, 0x1C($s7)
    ctx->pc = 0x2e1b88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x2e1b8c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2e1b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2e1b90: 0x2c3182a  slt         $v1, $s6, $v1
    ctx->pc = 0x2e1b90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2e1b94: 0x1460ff2e  bnez        $v1, . + 4 + (-0xD2 << 2)
    ctx->pc = 0x2E1B94u;
    {
        const bool branch_taken_0x2e1b94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E1B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1B94u;
            // 0x2e1b98: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1b94) {
            ctx->pc = 0x2E1850u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2e1850;
        }
    }
    ctx->pc = 0x2E1B9Cu;
    // 0x2e1b9c: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x2e1b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e1ba0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2e1ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2e1ba4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e1ba4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1ba8: 0x0  nop
    ctx->pc = 0x2e1ba8u;
    // NOP
    // 0x2e1bac: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e1bacu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1bb0: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1BB0u;
    {
        const bool branch_taken_0x2e1bb0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1bb0) {
            ctx->pc = 0x2E1BB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1BB0u;
            // 0x2e1bb4: 0xa6600056  sh          $zero, 0x56($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1BD0u;
            goto label_2e1bd0;
        }
    }
    ctx->pc = 0x2E1BB8u;
    // 0x2e1bb8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e1bb8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e1bbc: 0x0  nop
    ctx->pc = 0x2e1bbcu;
    // NOP
    // 0x2e1bc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e1bc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e1bc4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1BC4u;
    {
        const bool branch_taken_0x2e1bc4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e1bc4) {
            ctx->pc = 0x2E1BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1BC4u;
            // 0x2e1bc8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2E1BD8u;
            goto label_2e1bd8;
        }
    }
    ctx->pc = 0x2E1BCCu;
    // 0x2e1bcc: 0xa6600056  sh          $zero, 0x56($s3)
    ctx->pc = 0x2e1bccu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 86), (uint16_t)GPR_U32(ctx, 0));
label_2e1bd0:
    // 0x2e1bd0: 0xa6600050  sh          $zero, 0x50($s3)
    ctx->pc = 0x2e1bd0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 80), (uint16_t)GPR_U32(ctx, 0));
label_2e1bd4:
    // 0x2e1bd4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2e1bd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2e1bd8:
    // 0x2e1bd8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e1bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e1bdc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2e1bdcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e1be0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e1be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e1be4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2e1be4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e1be8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e1be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e1bec: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2e1becu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e1bf0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2e1bf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e1bf4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e1bf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e1bf8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e1bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e1bfc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e1bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e1c00: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e1c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e1c04: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1c08: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E1C08u;
            // 0x2e1c0c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E1C10u;
}
