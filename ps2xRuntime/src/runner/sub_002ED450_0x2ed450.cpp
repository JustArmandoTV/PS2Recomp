#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ED450
// Address: 0x2ed450 - 0x2ed700
void sub_002ED450_0x2ed450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED450_0x2ed450");
#endif

    switch (ctx->pc) {
        case 0x2ed4f4u: goto label_2ed4f4;
        case 0x2ed544u: goto label_2ed544;
        case 0x2ed564u: goto label_2ed564;
        case 0x2ed5b4u: goto label_2ed5b4;
        case 0x2ed5d4u: goto label_2ed5d4;
        case 0x2ed624u: goto label_2ed624;
        case 0x2ed648u: goto label_2ed648;
        case 0x2ed698u: goto label_2ed698;
        case 0x2ed6d0u: goto label_2ed6d0;
        default: break;
    }

    ctx->pc = 0x2ed450u;

    // 0x2ed450: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x2ed450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x2ed454: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2ed454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2ed458: 0x7fbe00b0  sq          $fp, 0xB0($sp)
    ctx->pc = 0x2ed458u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 30));
    // 0x2ed45c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x2ed45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x2ed460: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x2ed460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x2ed464: 0x160b82d  daddu       $s7, $t3, $zero
    ctx->pc = 0x2ed464u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed468: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x2ed468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x2ed46c: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x2ed46cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed470: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2ed470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2ed474: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2ed474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2ed478: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ed478u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed47c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2ed47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2ed480: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ed480u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed484: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2ed484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2ed488: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ed488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed48c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2ed48cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2ed490: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2ed490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed494: 0x94e30006  lhu         $v1, 0x6($a3)
    ctx->pc = 0x2ed494u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x2ed498: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x2ed498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed49c: 0x8fbe00d0  lw          $fp, 0xD0($sp)
    ctx->pc = 0x2ed49cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2ed4a0: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ED4A0u;
    {
        const bool branch_taken_0x2ed4a0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4A0u;
            // 0x2ed4a4: 0x339c0  sll         $a3, $v1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4a0) {
            ctx->pc = 0x2ED4B4u;
            goto label_2ed4b4;
        }
    }
    ctx->pc = 0x2ED4A8u;
    // 0x2ed4a8: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x2ed4a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ed4ac: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x2ed4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x2ed4b0: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x2ed4b0u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
label_2ed4b4:
    // 0x2ed4b4: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x2ed4b4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
    // 0x2ed4b8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2ed4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ed4bc: 0x5083005f  beql        $a0, $v1, . + 4 + (0x5F << 2)
    ctx->pc = 0x2ED4BCu;
    {
        const bool branch_taken_0x2ed4bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed4bc) {
            ctx->pc = 0x2ED4C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4BCu;
            // 0x2ed4c0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED63Cu;
            goto label_2ed63c;
        }
    }
    ctx->pc = 0x2ED4C4u;
    // 0x2ed4c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2ed4c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2ed4c8: 0x50860040  beql        $a0, $a2, . + 4 + (0x40 << 2)
    ctx->pc = 0x2ED4C8u;
    {
        const bool branch_taken_0x2ed4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ed4c8) {
            ctx->pc = 0x2ED4CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4C8u;
            // 0x2ed4cc: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED5CCu;
            goto label_2ed5cc;
        }
    }
    ctx->pc = 0x2ED4D0u;
    // 0x2ed4d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2ed4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ed4d4: 0x50830021  beql        $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x2ED4D4u;
    {
        const bool branch_taken_0x2ed4d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ed4d4) {
            ctx->pc = 0x2ED4D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4D4u;
            // 0x2ed4d8: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED55Cu;
            goto label_2ed55c;
        }
    }
    ctx->pc = 0x2ED4DCu;
    // 0x2ed4dc: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED4DCu;
    {
        const bool branch_taken_0x2ed4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed4dc) {
            ctx->pc = 0x2ED4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4DCu;
            // 0x2ed4e0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2ED4ECu;
            goto label_2ed4ec;
        }
    }
    ctx->pc = 0x2ED4E4u;
    // 0x2ed4e4: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x2ED4E4u;
    {
        const bool branch_taken_0x2ed4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed4e4) {
            ctx->pc = 0x2ED6B0u;
            goto label_2ed6b0;
        }
    }
    ctx->pc = 0x2ED4ECu;
label_2ed4ec:
    // 0x2ed4ec: 0xc040140  jal         func_100500
    ctx->pc = 0x2ED4ECu;
    SET_GPR_U32(ctx, 31, 0x2ED4F4u);
    ctx->pc = 0x2ED4F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4ECu;
            // 0x2ed4f0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4F4u; }
        if (ctx->pc != 0x2ED4F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED4F4u; }
        if (ctx->pc != 0x2ED4F4u) { return; }
    }
    ctx->pc = 0x2ED4F4u;
label_2ed4f4:
    // 0x2ed4f4: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
    ctx->pc = 0x2ED4F4u;
    {
        const bool branch_taken_0x2ed4f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED4F4u;
            // 0x2ed4f8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed4f4) {
            ctx->pc = 0x2ED6B8u;
            goto label_2ed6b8;
        }
    }
    ctx->pc = 0x2ED4FCu;
    // 0x2ed4fc: 0x264200ac  addiu       $v0, $s2, 0xAC
    ctx->pc = 0x2ed4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
    // 0x2ed500: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ed500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed504: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ed504u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ed508: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ed508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed50c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed50cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed510: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ed510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed514: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ed514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ed518: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ed518u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed51c: 0xffb60018  sd          $s6, 0x18($sp)
    ctx->pc = 0x2ed51cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 22));
    // 0x2ed520: 0x26480080  addiu       $t0, $s2, 0x80
    ctx->pc = 0x2ed520u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x2ed524: 0xffb70020  sd          $s7, 0x20($sp)
    ctx->pc = 0x2ed524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 23));
    // 0x2ed528: 0x26490090  addiu       $t1, $s2, 0x90
    ctx->pc = 0x2ed528u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2ed52c: 0xffbe0028  sd          $fp, 0x28($sp)
    ctx->pc = 0x2ed52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 30));
    // 0x2ed530: 0x264a00a0  addiu       $t2, $s2, 0xA0
    ctx->pc = 0x2ed530u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2ed534: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x2ed534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed538: 0xc64d00cc  lwc1        $f13, 0xCC($s2)
    ctx->pc = 0x2ed538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ed53c: 0xc0bb5c0  jal         func_2ED700
    ctx->pc = 0x2ED53Cu;
    SET_GPR_U32(ctx, 31, 0x2ED544u);
    ctx->pc = 0x2ED540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED53Cu;
            // 0x2ed540: 0x264b00b8  addiu       $t3, $s2, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED700u;
    if (runtime->hasFunction(0x2ED700u)) {
        auto targetFn = runtime->lookupFunction(0x2ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED544u; }
        if (ctx->pc != 0x2ED544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED700_0x2ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED544u; }
        if (ctx->pc != 0x2ED544u) { return; }
    }
    ctx->pc = 0x2ED544u;
label_2ed544:
    // 0x2ed544: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ed544u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ed548: 0x26a20130  addiu       $v0, $s5, 0x130
    ctx->pc = 0x2ed548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
    // 0x2ed54c: 0x246330d0  addiu       $v1, $v1, 0x30D0
    ctx->pc = 0x2ed54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12496));
    // 0x2ed550: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ed550u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2ed554: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x2ED554u;
    {
        const bool branch_taken_0x2ed554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED554u;
            // 0x2ed558: 0xaea200f0  sw          $v0, 0xF0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed554) {
            ctx->pc = 0x2ED6B8u;
            goto label_2ed6b8;
        }
    }
    ctx->pc = 0x2ED55Cu;
label_2ed55c:
    // 0x2ed55c: 0xc040140  jal         func_100500
    ctx->pc = 0x2ED55Cu;
    SET_GPR_U32(ctx, 31, 0x2ED564u);
    ctx->pc = 0x2ED560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED55Cu;
            // 0x2ed560: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED564u; }
        if (ctx->pc != 0x2ED564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED564u; }
        if (ctx->pc != 0x2ED564u) { return; }
    }
    ctx->pc = 0x2ED564u;
label_2ed564:
    // 0x2ed564: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x2ED564u;
    {
        const bool branch_taken_0x2ed564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED564u;
            // 0x2ed568: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed564) {
            ctx->pc = 0x2ED6B8u;
            goto label_2ed6b8;
        }
    }
    ctx->pc = 0x2ED56Cu;
    // 0x2ed56c: 0x264200ac  addiu       $v0, $s2, 0xAC
    ctx->pc = 0x2ed56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
    // 0x2ed570: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ed570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed574: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ed574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ed578: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ed578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed57c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed57cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed580: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ed580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed584: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ed584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ed588: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ed588u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed58c: 0xffb60018  sd          $s6, 0x18($sp)
    ctx->pc = 0x2ed58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 22));
    // 0x2ed590: 0x26480080  addiu       $t0, $s2, 0x80
    ctx->pc = 0x2ed590u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x2ed594: 0xffb70020  sd          $s7, 0x20($sp)
    ctx->pc = 0x2ed594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 23));
    // 0x2ed598: 0x26490090  addiu       $t1, $s2, 0x90
    ctx->pc = 0x2ed598u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2ed59c: 0xffbe0028  sd          $fp, 0x28($sp)
    ctx->pc = 0x2ed59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 30));
    // 0x2ed5a0: 0x264a00a0  addiu       $t2, $s2, 0xA0
    ctx->pc = 0x2ed5a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2ed5a4: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x2ed5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed5a8: 0xc64d00cc  lwc1        $f13, 0xCC($s2)
    ctx->pc = 0x2ed5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ed5ac: 0xc0bb5c0  jal         func_2ED700
    ctx->pc = 0x2ED5ACu;
    SET_GPR_U32(ctx, 31, 0x2ED5B4u);
    ctx->pc = 0x2ED5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5ACu;
            // 0x2ed5b0: 0x264b00b8  addiu       $t3, $s2, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED700u;
    if (runtime->hasFunction(0x2ED700u)) {
        auto targetFn = runtime->lookupFunction(0x2ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5B4u; }
        if (ctx->pc != 0x2ED5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED700_0x2ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5B4u; }
        if (ctx->pc != 0x2ED5B4u) { return; }
    }
    ctx->pc = 0x2ED5B4u;
label_2ed5b4:
    // 0x2ed5b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ed5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ed5b8: 0x26a20130  addiu       $v0, $s5, 0x130
    ctx->pc = 0x2ed5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
    // 0x2ed5bc: 0x24633020  addiu       $v1, $v1, 0x3020
    ctx->pc = 0x2ed5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12320));
    // 0x2ed5c0: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ed5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2ed5c4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x2ED5C4u;
    {
        const bool branch_taken_0x2ed5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5C4u;
            // 0x2ed5c8: 0xaea200f0  sw          $v0, 0xF0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5c4) {
            ctx->pc = 0x2ED6B8u;
            goto label_2ed6b8;
        }
    }
    ctx->pc = 0x2ED5CCu;
label_2ed5cc:
    // 0x2ed5cc: 0xc040140  jal         func_100500
    ctx->pc = 0x2ED5CCu;
    SET_GPR_U32(ctx, 31, 0x2ED5D4u);
    ctx->pc = 0x2ED5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5CCu;
            // 0x2ed5d0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5D4u; }
        if (ctx->pc != 0x2ED5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED5D4u; }
        if (ctx->pc != 0x2ED5D4u) { return; }
    }
    ctx->pc = 0x2ED5D4u;
label_2ed5d4:
    // 0x2ed5d4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2ED5D4u;
    {
        const bool branch_taken_0x2ed5d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED5D4u;
            // 0x2ed5d8: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed5d4) {
            ctx->pc = 0x2ED6B8u;
            goto label_2ed6b8;
        }
    }
    ctx->pc = 0x2ED5DCu;
    // 0x2ed5dc: 0x264200ac  addiu       $v0, $s2, 0xAC
    ctx->pc = 0x2ed5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
    // 0x2ed5e0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ed5e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5e4: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ed5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ed5e8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ed5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5ec: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed5f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ed5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ed5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ed5f8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ed5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed5fc: 0xffb60018  sd          $s6, 0x18($sp)
    ctx->pc = 0x2ed5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 22));
    // 0x2ed600: 0x26480080  addiu       $t0, $s2, 0x80
    ctx->pc = 0x2ed600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x2ed604: 0xffb70020  sd          $s7, 0x20($sp)
    ctx->pc = 0x2ed604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 23));
    // 0x2ed608: 0x26490090  addiu       $t1, $s2, 0x90
    ctx->pc = 0x2ed608u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2ed60c: 0xffbe0028  sd          $fp, 0x28($sp)
    ctx->pc = 0x2ed60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 30));
    // 0x2ed610: 0x264a00a0  addiu       $t2, $s2, 0xA0
    ctx->pc = 0x2ed610u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2ed614: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x2ed614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed618: 0xc64d00cc  lwc1        $f13, 0xCC($s2)
    ctx->pc = 0x2ed618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ed61c: 0xc0bb5c0  jal         func_2ED700
    ctx->pc = 0x2ED61Cu;
    SET_GPR_U32(ctx, 31, 0x2ED624u);
    ctx->pc = 0x2ED620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED61Cu;
            // 0x2ed620: 0x264b00b8  addiu       $t3, $s2, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED700u;
    if (runtime->hasFunction(0x2ED700u)) {
        auto targetFn = runtime->lookupFunction(0x2ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED624u; }
        if (ctx->pc != 0x2ED624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED700_0x2ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED624u; }
        if (ctx->pc != 0x2ED624u) { return; }
    }
    ctx->pc = 0x2ED624u;
label_2ed624:
    // 0x2ed624: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ed624u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ed628: 0x26a20130  addiu       $v0, $s5, 0x130
    ctx->pc = 0x2ed628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
    // 0x2ed62c: 0x24633180  addiu       $v1, $v1, 0x3180
    ctx->pc = 0x2ed62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12672));
    // 0x2ed630: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ed630u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2ed634: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2ED634u;
    {
        const bool branch_taken_0x2ed634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED634u;
            // 0x2ed638: 0xaea200f0  sw          $v0, 0xF0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed634) {
            ctx->pc = 0x2ED6B8u;
            goto label_2ed6b8;
        }
    }
    ctx->pc = 0x2ED63Cu;
label_2ed63c:
    // 0x2ed63c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2ed63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2ed640: 0xc040140  jal         func_100500
    ctx->pc = 0x2ED640u;
    SET_GPR_U32(ctx, 31, 0x2ED648u);
    ctx->pc = 0x2ED644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED640u;
            // 0x2ed644: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED648u; }
        if (ctx->pc != 0x2ED648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED648u; }
        if (ctx->pc != 0x2ED648u) { return; }
    }
    ctx->pc = 0x2ED648u;
label_2ed648:
    // 0x2ed648: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2ED648u;
    {
        const bool branch_taken_0x2ed648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED648u;
            // 0x2ed64c: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed648) {
            ctx->pc = 0x2ED6B8u;
            goto label_2ed6b8;
        }
    }
    ctx->pc = 0x2ED650u;
    // 0x2ed650: 0x264200ac  addiu       $v0, $s2, 0xAC
    ctx->pc = 0x2ed650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 172));
    // 0x2ed654: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2ed654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed658: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x2ed658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x2ed65c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2ed65cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed660: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2ed660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2ed664: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2ed664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed668: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2ed668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2ed66c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2ed66cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed670: 0xffb60018  sd          $s6, 0x18($sp)
    ctx->pc = 0x2ed670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 22));
    // 0x2ed674: 0x26480080  addiu       $t0, $s2, 0x80
    ctx->pc = 0x2ed674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x2ed678: 0xffb70020  sd          $s7, 0x20($sp)
    ctx->pc = 0x2ed678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 23));
    // 0x2ed67c: 0x26490090  addiu       $t1, $s2, 0x90
    ctx->pc = 0x2ed67cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
    // 0x2ed680: 0xffbe0028  sd          $fp, 0x28($sp)
    ctx->pc = 0x2ed680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 30));
    // 0x2ed684: 0x264a00a0  addiu       $t2, $s2, 0xA0
    ctx->pc = 0x2ed684u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
    // 0x2ed688: 0xc64c00c8  lwc1        $f12, 0xC8($s2)
    ctx->pc = 0x2ed688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ed68c: 0xc64d00cc  lwc1        $f13, 0xCC($s2)
    ctx->pc = 0x2ed68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2ed690: 0xc0bb5c0  jal         func_2ED700
    ctx->pc = 0x2ED690u;
    SET_GPR_U32(ctx, 31, 0x2ED698u);
    ctx->pc = 0x2ED694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED690u;
            // 0x2ed694: 0x264b00b8  addiu       $t3, $s2, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED700u;
    if (runtime->hasFunction(0x2ED700u)) {
        auto targetFn = runtime->lookupFunction(0x2ED700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED698u; }
        if (ctx->pc != 0x2ED698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ED700_0x2ed700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED698u; }
        if (ctx->pc != 0x2ED698u) { return; }
    }
    ctx->pc = 0x2ED698u;
label_2ed698:
    // 0x2ed698: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2ed698u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2ed69c: 0x26a20130  addiu       $v0, $s5, 0x130
    ctx->pc = 0x2ed69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 304));
    // 0x2ed6a0: 0x24633140  addiu       $v1, $v1, 0x3140
    ctx->pc = 0x2ed6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12608));
    // 0x2ed6a4: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x2ed6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x2ed6a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED6A8u;
    {
        const bool branch_taken_0x2ed6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED6A8u;
            // 0x2ed6ac: 0xaea200f0  sw          $v0, 0xF0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6a8) {
            ctx->pc = 0x2ED6B8u;
            goto label_2ed6b8;
        }
    }
    ctx->pc = 0x2ED6B0u;
label_2ed6b0:
    // 0x2ed6b0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2ED6B0u;
    {
        const bool branch_taken_0x2ed6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED6B0u;
            // 0x2ed6b4: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed6b0) {
            ctx->pc = 0x2ED6D4u;
            goto label_2ed6d4;
        }
    }
    ctx->pc = 0x2ED6B8u;
label_2ed6b8:
    // 0x2ed6b8: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x2ed6b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2ed6bc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2ed6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed6c0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2ed6c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2ed6c4: 0x38422000  xori        $v0, $v0, 0x2000
    ctx->pc = 0x2ed6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8192);
    // 0x2ed6c8: 0xc0bb810  jal         func_2EE040
    ctx->pc = 0x2ED6C8u;
    SET_GPR_U32(ctx, 31, 0x2ED6D0u);
    ctx->pc = 0x2ED6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED6C8u;
            // 0x2ed6cc: 0x2c440001  sltiu       $a0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EE040u;
    if (runtime->hasFunction(0x2EE040u)) {
        auto targetFn = runtime->lookupFunction(0x2EE040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED6D0u; }
        if (ctx->pc != 0x2ED6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EE040_0x2ee040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ED6D0u; }
        if (ctx->pc != 0x2ED6D0u) { return; }
    }
    ctx->pc = 0x2ED6D0u;
label_2ed6d0:
    // 0x2ed6d0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2ed6d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2ed6d4:
    // 0x2ed6d4: 0x7bbe00b0  lq          $fp, 0xB0($sp)
    ctx->pc = 0x2ed6d4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2ed6d8: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x2ed6d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2ed6dc: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x2ed6dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2ed6e0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x2ed6e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2ed6e4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2ed6e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2ed6e8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2ed6e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2ed6ec: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2ed6ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2ed6f0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2ed6f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2ed6f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ed6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2ed6f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED6F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ED6F8u;
            // 0x2ed6fc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ED700u;
}
