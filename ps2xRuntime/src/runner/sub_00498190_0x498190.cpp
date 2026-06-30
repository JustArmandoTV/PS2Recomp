#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00498190
// Address: 0x498190 - 0x498370
void sub_00498190_0x498190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00498190_0x498190");
#endif

    switch (ctx->pc) {
        case 0x4981c4u: goto label_4981c4;
        case 0x4981d4u: goto label_4981d4;
        case 0x498224u: goto label_498224;
        case 0x498238u: goto label_498238;
        case 0x498258u: goto label_498258;
        case 0x498294u: goto label_498294;
        case 0x4982a8u: goto label_4982a8;
        case 0x4982d0u: goto label_4982d0;
        case 0x498314u: goto label_498314;
        case 0x498330u: goto label_498330;
        default: break;
    }

    ctx->pc = 0x498190u;

    // 0x498190: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x498190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x498194: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x498194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x498198: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x498198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x49819c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49819cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4981a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4981a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4981a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4981a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4981a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4981a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4981ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4981acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4981b0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x4981b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4981b4: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x4981b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x4981b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4981b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4981bc: 0xc04a508  jal         func_129420
    ctx->pc = 0x4981BCu;
    SET_GPR_U32(ctx, 31, 0x4981C4u);
    ctx->pc = 0x4981C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4981BCu;
            // 0x4981c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4981C4u; }
        if (ctx->pc != 0x4981C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4981C4u; }
        if (ctx->pc != 0x4981C4u) { return; }
    }
    ctx->pc = 0x4981C4u;
label_4981c4:
    // 0x4981c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4981c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4981c8: 0x26450004  addiu       $a1, $s2, 0x4
    ctx->pc = 0x4981c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x4981cc: 0xc04a508  jal         func_129420
    ctx->pc = 0x4981CCu;
    SET_GPR_U32(ctx, 31, 0x4981D4u);
    ctx->pc = 0x4981D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4981CCu;
            // 0x4981d0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4981D4u; }
        if (ctx->pc != 0x4981D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4981D4u; }
        if (ctx->pc != 0x4981D4u) { return; }
    }
    ctx->pc = 0x4981D4u;
label_4981d4:
    // 0x4981d4: 0x97a4005e  lhu         $a0, 0x5E($sp)
    ctx->pc = 0x4981d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 94)));
    // 0x4981d8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4981d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4981dc: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x4981DCu;
    {
        const bool branch_taken_0x4981dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x4981dc) {
            ctx->pc = 0x4981E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4981DCu;
            // 0x4981e0: 0x97a2005c  lhu         $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x498204u;
            goto label_498204;
        }
    }
    ctx->pc = 0x4981E4u;
    // 0x4981e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4981e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4981e8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4981e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4981ec: 0xac407bb8  sw          $zero, 0x7BB8($v0)
    ctx->pc = 0x4981ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31672), GPR_U32(ctx, 0));
    // 0x4981f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4981f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4981f4: 0xac607bc8  sw          $zero, 0x7BC8($v1)
    ctx->pc = 0x4981f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31688), GPR_U32(ctx, 0));
    // 0x4981f8: 0xac407bc0  sw          $zero, 0x7BC0($v0)
    ctx->pc = 0x4981f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31680), GPR_U32(ctx, 0));
    // 0x4981fc: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x4981fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
    // 0x498200: 0x97a2005c  lhu         $v0, 0x5C($sp)
    ctx->pc = 0x498200u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
label_498204:
    // 0x498204: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x498204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x498208: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x498208u;
    {
        const bool branch_taken_0x498208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498208) {
            ctx->pc = 0x498260u;
            goto label_498260;
        }
    }
    ctx->pc = 0x498210u;
    // 0x498210: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x498210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x498214: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498218: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x498218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49821c: 0xc0400c4  jal         func_100310
    ctx->pc = 0x49821Cu;
    SET_GPR_U32(ctx, 31, 0x498224u);
    ctx->pc = 0x498220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49821Cu;
            // 0x498220: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498224u; }
        if (ctx->pc != 0x498224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498224u; }
        if (ctx->pc != 0x498224u) { return; }
    }
    ctx->pc = 0x498224u;
label_498224:
    // 0x498224: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x498224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498228: 0x26450008  addiu       $a1, $s2, 0x8
    ctx->pc = 0x498228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x49822c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x49822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498230: 0xc04a508  jal         func_129420
    ctx->pc = 0x498230u;
    SET_GPR_U32(ctx, 31, 0x498238u);
    ctx->pc = 0x498234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498230u;
            // 0x498234: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498238u; }
        if (ctx->pc != 0x498238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498238u; }
        if (ctx->pc != 0x498238u) { return; }
    }
    ctx->pc = 0x498238u;
label_498238:
    // 0x498238: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x498238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x49823c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x49823cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x498240: 0xac507bb8  sw          $s0, 0x7BB8($v0)
    ctx->pc = 0x498240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31672), GPR_U32(ctx, 16));
    // 0x498244: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x498244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x498248: 0x26500020  addiu       $s0, $s2, 0x20
    ctx->pc = 0x498248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x49824c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x49824cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x498250: 0xc04a508  jal         func_129420
    ctx->pc = 0x498250u;
    SET_GPR_U32(ctx, 31, 0x498258u);
    ctx->pc = 0x498254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498250u;
            // 0x498254: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498258u; }
        if (ctx->pc != 0x498258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498258u; }
        if (ctx->pc != 0x498258u) { return; }
    }
    ctx->pc = 0x498258u;
label_498258:
    // 0x498258: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x498258u;
    {
        const bool branch_taken_0x498258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49825Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498258u;
            // 0x49825c: 0x97a2005c  lhu         $v0, 0x5C($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x498258) {
            ctx->pc = 0x498274u;
            goto label_498274;
        }
    }
    ctx->pc = 0x498260u;
label_498260:
    // 0x498260: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x498260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x498264: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x498264u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x498268: 0x8c427bb8  lw          $v0, 0x7BB8($v0)
    ctx->pc = 0x498268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31672)));
    // 0x49826c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x49826cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x498270: 0x97a2005c  lhu         $v0, 0x5C($sp)
    ctx->pc = 0x498270u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 92)));
label_498274:
    // 0x498274: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x498274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x498278: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x498278u;
    {
        const bool branch_taken_0x498278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x498278) {
            ctx->pc = 0x4982D8u;
            goto label_4982d8;
        }
    }
    ctx->pc = 0x498280u;
    // 0x498280: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x498280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x498284: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498288: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x498288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49828c: 0xc040140  jal         func_100500
    ctx->pc = 0x49828Cu;
    SET_GPR_U32(ctx, 31, 0x498294u);
    ctx->pc = 0x498290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49828Cu;
            // 0x498290: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498294u; }
        if (ctx->pc != 0x498294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498294u; }
        if (ctx->pc != 0x498294u) { return; }
    }
    ctx->pc = 0x498294u;
label_498294:
    // 0x498294: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x498294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x498298: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x498298u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49829c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x49829cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4982a0: 0xc04a508  jal         func_129420
    ctx->pc = 0x4982A0u;
    SET_GPR_U32(ctx, 31, 0x4982A8u);
    ctx->pc = 0x4982A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4982A0u;
            // 0x4982a4: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4982A8u; }
        if (ctx->pc != 0x4982A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4982A8u; }
        if (ctx->pc != 0x4982A8u) { return; }
    }
    ctx->pc = 0x4982A8u;
label_4982a8:
    // 0x4982a8: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x4982a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x4982ac: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x4982acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
    // 0x4982b0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4982b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4982b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4982b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4982b8: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x4982b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x4982bc: 0xac737bc8  sw          $s3, 0x7BC8($v1)
    ctx->pc = 0x4982bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31688), GPR_U32(ctx, 19));
    // 0x4982c0: 0xac537bc0  sw          $s3, 0x7BC0($v0)
    ctx->pc = 0x4982c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31680), GPR_U32(ctx, 19));
    // 0x4982c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4982c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4982c8: 0xc04a508  jal         func_129420
    ctx->pc = 0x4982C8u;
    SET_GPR_U32(ctx, 31, 0x4982D0u);
    ctx->pc = 0x4982CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4982C8u;
            // 0x4982cc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4982D0u; }
        if (ctx->pc != 0x4982D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4982D0u; }
        if (ctx->pc != 0x4982D0u) { return; }
    }
    ctx->pc = 0x4982D0u;
label_4982d0:
    // 0x4982d0: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x4982D0u;
    {
        const bool branch_taken_0x4982d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4982D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4982D0u;
            // 0x4982d4: 0x2121023  subu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4982d0) {
            ctx->pc = 0x498354u;
            goto label_498354;
        }
    }
    ctx->pc = 0x4982D8u;
label_4982d8:
    // 0x4982d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4982d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4982dc: 0x8c427bc8  lw          $v0, 0x7BC8($v0)
    ctx->pc = 0x4982dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31688)));
    // 0x4982e0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x4982E0u;
    {
        const bool branch_taken_0x4982e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4982e0) {
            ctx->pc = 0x4982E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4982E0u;
            // 0x4982e4: 0x90420001  lbu         $v0, 0x1($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4982F8u;
            goto label_4982f8;
        }
    }
    ctx->pc = 0x4982E8u;
    // 0x4982e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4982e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x4982ec: 0x24427bf0  addiu       $v0, $v0, 0x7BF0
    ctx->pc = 0x4982ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31728));
    // 0x4982f0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x4982F0u;
    {
        const bool branch_taken_0x4982f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4982F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4982F0u;
            // 0x4982f4: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4982f0) {
            ctx->pc = 0x49834Cu;
            goto label_49834c;
        }
    }
    ctx->pc = 0x4982F8u;
label_4982f8:
    // 0x4982f8: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x4982F8u;
    {
        const bool branch_taken_0x4982f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4982f8) {
            ctx->pc = 0x498340u;
            goto label_498340;
        }
    }
    ctx->pc = 0x498300u;
    // 0x498300: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x498300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x498304: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x498304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x498308: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x498308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49830c: 0xc040140  jal         func_100500
    ctx->pc = 0x49830Cu;
    SET_GPR_U32(ctx, 31, 0x498314u);
    ctx->pc = 0x498310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49830Cu;
            // 0x498310: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498314u; }
        if (ctx->pc != 0x498314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498314u; }
        if (ctx->pc != 0x498314u) { return; }
    }
    ctx->pc = 0x498314u;
label_498314:
    // 0x498314: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x498314u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x498318: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x498318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49831c: 0xac627bc8  sw          $v0, 0x7BC8($v1)
    ctx->pc = 0x49831cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 31688), GPR_U32(ctx, 2));
    // 0x498320: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x498320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x498324: 0x8c457bc0  lw          $a1, 0x7BC0($v0)
    ctx->pc = 0x498324u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31680)));
    // 0x498328: 0xc04a508  jal         func_129420
    ctx->pc = 0x498328u;
    SET_GPR_U32(ctx, 31, 0x498330u);
    ctx->pc = 0x49832Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x498328u;
            // 0x49832c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498330u; }
        if (ctx->pc != 0x498330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x498330u; }
        if (ctx->pc != 0x498330u) { return; }
    }
    ctx->pc = 0x498330u;
label_498330:
    // 0x498330: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x498330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x498334: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x498334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x498338: 0x8c427bc8  lw          $v0, 0x7BC8($v0)
    ctx->pc = 0x498338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31688)));
    // 0x49833c: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x49833cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_498340:
    // 0x498340: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x498340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x498344: 0x8c427bc8  lw          $v0, 0x7BC8($v0)
    ctx->pc = 0x498344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31688)));
    // 0x498348: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x498348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_49834c:
    // 0x49834c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x49834cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x498350: 0x2121023  subu        $v0, $s0, $s2
    ctx->pc = 0x498350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_498354:
    // 0x498354: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x498354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x498358: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x498358u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x49835c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49835cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x498360: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x498360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x498364: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x498364u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x498368: 0x3e00008  jr          $ra
    ctx->pc = 0x498368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49836Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x498368u;
            // 0x49836c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x498370u;
}
