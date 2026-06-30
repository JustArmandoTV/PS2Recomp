#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00181918
// Address: 0x181918 - 0x181a58
void sub_00181918_0x181918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181918_0x181918");
#endif

    switch (ctx->pc) {
        case 0x181950u: goto label_181950;
        case 0x181984u: goto label_181984;
        case 0x1819bcu: goto label_1819bc;
        default: break;
    }

    ctx->pc = 0x181918u;

    // 0x181918: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18191c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18191cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x181920: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x181920u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181924: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x181924u;
    {
        const bool branch_taken_0x181924 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x181928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181924u;
            // 0x181928: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181924) {
            ctx->pc = 0x181948u;
            goto label_181948;
        }
    }
    ctx->pc = 0x18192Cu;
    // 0x18192c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x18192cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x181930: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181934: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181938: 0x24a56cf8  addiu       $a1, $a1, 0x6CF8
    ctx->pc = 0x181938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27896));
    // 0x18193c: 0x80604b2  j           func_1812C8
    ctx->pc = 0x18193Cu;
    ctx->pc = 0x181940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18193Cu;
            // 0x181940: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001812C8_0x1812c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x181944u;
    // 0x181944: 0x0  nop
    ctx->pc = 0x181944u;
    // NOP
label_181948:
    // 0x181948: 0xc0604a0  jal         func_181280
    ctx->pc = 0x181948u;
    SET_GPR_U32(ctx, 31, 0x181950u);
    ctx->pc = 0x181280u;
    if (runtime->hasFunction(0x181280u)) {
        auto targetFn = runtime->lookupFunction(0x181280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181950u; }
        if (ctx->pc != 0x181950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00181280_0x181280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181950u; }
        if (ctx->pc != 0x181950u) { return; }
    }
    ctx->pc = 0x181950u;
label_181950:
    // 0x181950: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x181950u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x181954: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x181954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x181958: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x181958u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18195c: 0x80604a6  j           func_181298
    ctx->pc = 0x18195Cu;
    ctx->pc = 0x181960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18195Cu;
            // 0x181960: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x181298u;
    if (runtime->hasFunction(0x181298u)) {
        auto targetFn = runtime->lookupFunction(0x181298u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00181298_0x181298(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x181964u;
    // 0x181964: 0x0  nop
    ctx->pc = 0x181964u;
    // NOP
    // 0x181968: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x181968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18196c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x18196cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181970: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x181970u;
    {
        const bool branch_taken_0x181970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181970u;
            // 0x181974: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181970) {
            ctx->pc = 0x181990u;
            goto label_181990;
        }
    }
    ctx->pc = 0x181978u;
    // 0x181978: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x181978u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x18197c: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x18197Cu;
    SET_GPR_U32(ctx, 31, 0x181984u);
    ctx->pc = 0x181980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18197Cu;
            // 0x181980: 0x24a56cf8  addiu       $a1, $a1, 0x6CF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181984u; }
        if (ctx->pc != 0x181984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812C8_0x1812c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x181984u; }
        if (ctx->pc != 0x181984u) { return; }
    }
    ctx->pc = 0x181984u;
label_181984:
    // 0x181984: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x181984u;
    {
        const bool branch_taken_0x181984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181984u;
            // 0x181988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181984) {
            ctx->pc = 0x181994u;
            goto label_181994;
        }
    }
    ctx->pc = 0x18198Cu;
    // 0x18198c: 0x0  nop
    ctx->pc = 0x18198cu;
    // NOP
label_181990:
    // 0x181990: 0x80420001  lb          $v0, 0x1($v0)
    ctx->pc = 0x181990u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_181994:
    // 0x181994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181998: 0x3e00008  jr          $ra
    ctx->pc = 0x181998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18199Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181998u;
            // 0x18199c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1819A0u;
    // 0x1819a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1819a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1819a4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1819a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1819A8u;
    {
        const bool branch_taken_0x1819a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1819ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1819A8u;
            // 0x1819ac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819a8) {
            ctx->pc = 0x1819C8u;
            goto label_1819c8;
        }
    }
    ctx->pc = 0x1819B0u;
    // 0x1819b0: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1819b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1819b4: 0xc0604b2  jal         func_1812C8
    ctx->pc = 0x1819B4u;
    SET_GPR_U32(ctx, 31, 0x1819BCu);
    ctx->pc = 0x1819B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1819B4u;
            // 0x1819b8: 0x24a56d10  addiu       $a1, $a1, 0x6D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819BCu; }
        if (ctx->pc != 0x1819BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001812C8_0x1812c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1819BCu; }
        if (ctx->pc != 0x1819BCu) { return; }
    }
    ctx->pc = 0x1819BCu;
label_1819bc:
    // 0x1819bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1819BCu;
    {
        const bool branch_taken_0x1819bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1819C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1819BCu;
            // 0x1819c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819bc) {
            ctx->pc = 0x1819CCu;
            goto label_1819cc;
        }
    }
    ctx->pc = 0x1819C4u;
    // 0x1819c4: 0x0  nop
    ctx->pc = 0x1819c4u;
    // NOP
label_1819c8:
    // 0x1819c8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1819c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1819cc:
    // 0x1819cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1819ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1819d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1819D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1819D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1819D0u;
            // 0x1819d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1819D8u;
    // 0x1819d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1819d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1819dc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1819dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1819e0: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1819E0u;
    {
        const bool branch_taken_0x1819e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1819E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1819E0u;
            // 0x1819e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1819e0) {
            ctx->pc = 0x181A00u;
            goto label_181a00;
        }
    }
    ctx->pc = 0x1819E8u;
    // 0x1819e8: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x1819e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
    // 0x1819ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1819ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1819f0: 0x24a56d28  addiu       $a1, $a1, 0x6D28
    ctx->pc = 0x1819f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27944));
    // 0x1819f4: 0x80604b2  j           func_1812C8
    ctx->pc = 0x1819F4u;
    ctx->pc = 0x1819F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1819F4u;
            // 0x1819f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1812C8u;
    if (runtime->hasFunction(0x1812C8u)) {
        auto targetFn = runtime->lookupFunction(0x1812C8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001812C8_0x1812c8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1819FCu;
    // 0x1819fc: 0x0  nop
    ctx->pc = 0x1819fcu;
    // NOP
label_181a00:
    // 0x181a00: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x181a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x181a04: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x181a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x181a08: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x181a08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x181a0c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x181a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x181a10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x181a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x181a14: 0xacc50004  sw          $a1, 0x4($a2)
    ctx->pc = 0x181a14u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 5));
    // 0x181a18: 0x45001a  div         $zero, $v0, $a1
    ctx->pc = 0x181a18u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x181a1c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x181A1Cu;
    {
        const bool branch_taken_0x181a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x181a1c) {
            ctx->pc = 0x181A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x181A1Cu;
            // 0x181a20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x181A24u;
            goto label_181a24;
        }
    }
    ctx->pc = 0x181A24u;
label_181a24:
    // 0x181a24: 0x1012  mflo        $v0
    ctx->pc = 0x181a24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x181a28: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x181a28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x181a2c: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x181a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x181a30: 0x8cc20018  lw          $v0, 0x18($a2)
    ctx->pc = 0x181a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x181a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x181a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x181a38: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x181a38u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x181a3c: 0x1812  mflo        $v1
    ctx->pc = 0x181a3cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x181a40: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x181a40u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x181a44: 0xacc30010  sw          $v1, 0x10($a2)
    ctx->pc = 0x181a44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 3));
    // 0x181a48: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x181a48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
    // 0x181a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x181A4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x181A4Cu;
            // 0x181a50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x181A54u;
    // 0x181a54: 0x0  nop
    ctx->pc = 0x181a54u;
    // NOP
}
