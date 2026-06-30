#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D4850
// Address: 0x1d4850 - 0x1d49a0
void sub_001D4850_0x1d4850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D4850_0x1d4850");
#endif

    switch (ctx->pc) {
        case 0x1d487cu: goto label_1d487c;
        case 0x1d48a8u: goto label_1d48a8;
        case 0x1d48dcu: goto label_1d48dc;
        case 0x1d4908u: goto label_1d4908;
        case 0x1d4934u: goto label_1d4934;
        case 0x1d4960u: goto label_1d4960;
        case 0x1d498cu: goto label_1d498c;
        default: break;
    }

    ctx->pc = 0x1d4850u;

    // 0x1d4850: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d4850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d4854: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d4854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d4858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d4858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d485c: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x1d485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
    // 0x1d4860: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4860u;
    {
        const bool branch_taken_0x1d4860 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d4860) {
            ctx->pc = 0x1D4884u;
            goto label_1d4884;
        }
    }
    ctx->pc = 0x1D4868u;
    // 0x1d4868: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d486c: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x1d486cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1d4870: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d4870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d4874: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D4874u;
    SET_GPR_U32(ctx, 31, 0x1D487Cu);
    ctx->pc = 0x1D4878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4874u;
            // 0x1d4878: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D487Cu; }
        if (ctx->pc != 0x1D487Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D487Cu; }
        if (ctx->pc != 0x1D487Cu) { return; }
    }
    ctx->pc = 0x1D487Cu;
label_1d487c:
    // 0x1d487c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d487cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d4880: 0xac62e360  sw          $v0, -0x1CA0($v1)
    ctx->pc = 0x1d4880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959968), GPR_U32(ctx, 2));
label_1d4884:
    // 0x1d4884: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d4884u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d4888: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x1d4888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
    // 0x1d488c: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D488Cu;
    {
        const bool branch_taken_0x1d488c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d488c) {
            ctx->pc = 0x1D48B0u;
            goto label_1d48b0;
        }
    }
    ctx->pc = 0x1D4894u;
    // 0x1d4894: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d4898: 0x32980  sll         $a1, $v1, 6
    ctx->pc = 0x1d4898u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x1d489c: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d489cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d48a0: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D48A0u;
    SET_GPR_U32(ctx, 31, 0x1D48A8u);
    ctx->pc = 0x1D48A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48A0u;
            // 0x1d48a4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D48A8u; }
        if (ctx->pc != 0x1D48A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D48A8u; }
        if (ctx->pc != 0x1D48A8u) { return; }
    }
    ctx->pc = 0x1D48A8u;
label_1d48a8:
    // 0x1d48a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d48a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d48ac: 0xac62e370  sw          $v0, -0x1C90($v1)
    ctx->pc = 0x1d48acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959984), GPR_U32(ctx, 2));
label_1d48b0:
    // 0x1d48b0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d48b4: 0x8c64e3a0  lw          $a0, -0x1C60($v1)
    ctx->pc = 0x1d48b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
    // 0x1d48b8: 0x18800015  blez        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D48B8u;
    {
        const bool branch_taken_0x1d48b8 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1d48b8) {
            ctx->pc = 0x1D4910u;
            goto label_1d4910;
        }
    }
    ctx->pc = 0x1D48C0u;
    // 0x1d48c0: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1d48c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1d48c4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d48c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d48c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d48c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d48cc: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d48ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d48d0: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d48d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d48d4: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D48D4u;
    SET_GPR_U32(ctx, 31, 0x1D48DCu);
    ctx->pc = 0x1D48D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D48D4u;
            // 0x1d48d8: 0x32900  sll         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D48DCu; }
        if (ctx->pc != 0x1D48DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D48DCu; }
        if (ctx->pc != 0x1D48DCu) { return; }
    }
    ctx->pc = 0x1D48DCu;
label_1d48dc:
    // 0x1d48dc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1d48dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x1d48e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d48e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d48e4: 0xac82e380  sw          $v0, -0x1C80($a0)
    ctx->pc = 0x1d48e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960000), GPR_U32(ctx, 2));
    // 0x1d48e8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x1d48e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d48ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d48ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d48f0: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x1d48f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
    // 0x1d48f4: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d48f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d48f8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x1d48f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x1d48fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d48fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d4900: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D4900u;
    SET_GPR_U32(ctx, 31, 0x1D4908u);
    ctx->pc = 0x1D4904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4900u;
            // 0x1d4904: 0x22900  sll         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4908u; }
        if (ctx->pc != 0x1D4908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4908u; }
        if (ctx->pc != 0x1D4908u) { return; }
    }
    ctx->pc = 0x1D4908u;
label_1d4908:
    // 0x1d4908: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d4908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d490c: 0xac62e384  sw          $v0, -0x1C7C($v1)
    ctx->pc = 0x1d490cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960004), GPR_U32(ctx, 2));
label_1d4910:
    // 0x1d4910: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d4910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d4914: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x1d4914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
    // 0x1d4918: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4918u;
    {
        const bool branch_taken_0x1d4918 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d4918) {
            ctx->pc = 0x1D493Cu;
            goto label_1d493c;
        }
    }
    ctx->pc = 0x1D4920u;
    // 0x1d4920: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d4924: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1d4924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d4928: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d4928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d492c: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D492Cu;
    SET_GPR_U32(ctx, 31, 0x1D4934u);
    ctx->pc = 0x1D4930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D492Cu;
            // 0x1d4930: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4934u; }
        if (ctx->pc != 0x1D4934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4934u; }
        if (ctx->pc != 0x1D4934u) { return; }
    }
    ctx->pc = 0x1D4934u;
label_1d4934:
    // 0x1d4934: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d4934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d4938: 0xac62e378  sw          $v0, -0x1C88($v1)
    ctx->pc = 0x1d4938u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959992), GPR_U32(ctx, 2));
label_1d493c:
    // 0x1d493c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d493cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d4940: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x1d4940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
    // 0x1d4944: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D4944u;
    {
        const bool branch_taken_0x1d4944 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d4944) {
            ctx->pc = 0x1D4968u;
            goto label_1d4968;
        }
    }
    ctx->pc = 0x1D494Cu;
    // 0x1d494c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d494cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d4950: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1d4950u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d4954: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d4954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d4958: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D4958u;
    SET_GPR_U32(ctx, 31, 0x1D4960u);
    ctx->pc = 0x1D495Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4958u;
            // 0x1d495c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4960u; }
        if (ctx->pc != 0x1D4960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D4960u; }
        if (ctx->pc != 0x1D4960u) { return; }
    }
    ctx->pc = 0x1D4960u;
label_1d4960:
    // 0x1d4960: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d4960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d4964: 0xac62e3b0  sw          $v0, -0x1C50($v1)
    ctx->pc = 0x1d4964u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960048), GPR_U32(ctx, 2));
label_1d4968:
    // 0x1d4968: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d4968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d496c: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x1d496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
    // 0x1d4970: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1D4970u;
    {
        const bool branch_taken_0x1d4970 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d4970) {
            ctx->pc = 0x1D4974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4970u;
            // 0x1d4974: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D4998u;
            goto label_1d4998;
        }
    }
    ctx->pc = 0x1D4978u;
    // 0x1d4978: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1d4978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x1d497c: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x1d497cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d4980: 0x8c447378  lw          $a0, 0x7378($v0)
    ctx->pc = 0x1d4980u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
    // 0x1d4984: 0xc0fe5bc  jal         func_3F96F0
    ctx->pc = 0x1D4984u;
    SET_GPR_U32(ctx, 31, 0x1D498Cu);
    ctx->pc = 0x1D4988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4984u;
            // 0x1d4988: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F96F0u;
    if (runtime->hasFunction(0x3F96F0u)) {
        auto targetFn = runtime->lookupFunction(0x3F96F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D498Cu; }
        if (ctx->pc != 0x1D498Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F96F0_0x3f96f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D498Cu; }
        if (ctx->pc != 0x1D498Cu) { return; }
    }
    ctx->pc = 0x1D498Cu;
label_1d498c:
    // 0x1d498c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1d498cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x1d4990: 0xac62e3b8  sw          $v0, -0x1C48($v1)
    ctx->pc = 0x1d4990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960056), GPR_U32(ctx, 2));
    // 0x1d4994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d4994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d4998:
    // 0x1d4998: 0x3e00008  jr          $ra
    ctx->pc = 0x1D4998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D499Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D4998u;
            // 0x1d499c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D49A0u;
}
