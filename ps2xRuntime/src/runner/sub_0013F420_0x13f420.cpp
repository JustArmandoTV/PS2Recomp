#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013F420
// Address: 0x13f420 - 0x13f540
void sub_0013F420_0x13f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F420_0x13f420");
#endif

    switch (ctx->pc) {
        case 0x13f480u: goto label_13f480;
        case 0x13f4ccu: goto label_13f4cc;
        default: break;
    }

    ctx->pc = 0x13f420u;

    // 0x13f420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13f420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13f424: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f428: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13f428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13f42c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13f42cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13f430: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13f430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13f434: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13f434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f438: 0x8c4456b4  lw          $a0, 0x56B4($v0)
    ctx->pc = 0x13f438u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22196)));
    // 0x13f43c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F43Cu;
    {
        const bool branch_taken_0x13f43c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F43Cu;
            // 0x13f440: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f43c) {
            ctx->pc = 0x13F44Cu;
            goto label_13f44c;
        }
    }
    ctx->pc = 0x13F444u;
    // 0x13f444: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x13F444u;
    {
        const bool branch_taken_0x13f444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F444u;
            // 0x13f448: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f444) {
            ctx->pc = 0x13F528u;
            goto label_13f528;
        }
    }
    ctx->pc = 0x13F44Cu;
label_13f44c:
    // 0x13f44c: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13F44Cu;
    {
        const bool branch_taken_0x13f44c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13f44c) {
            ctx->pc = 0x13F45Cu;
            goto label_13f45c;
        }
    }
    ctx->pc = 0x13F454u;
    // 0x13f454: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x13F454u;
    {
        const bool branch_taken_0x13f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F454u;
            // 0x13f458: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f454) {
            ctx->pc = 0x13F528u;
            goto label_13f528;
        }
    }
    ctx->pc = 0x13F45Cu;
label_13f45c:
    // 0x13f45c: 0x50c0002c  beql        $a2, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x13F45Cu;
    {
        const bool branch_taken_0x13f45c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f45c) {
            ctx->pc = 0x13F460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13F45Cu;
            // 0x13f460: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13F510u;
            goto label_13f510;
        }
    }
    ctx->pc = 0x13F464u;
    // 0x13f464: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f468: 0x8c4256b0  lw          $v0, 0x56B0($v0)
    ctx->pc = 0x13f468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22192)));
    // 0x13f46c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x13f46cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x13f470: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13F470u;
    {
        const bool branch_taken_0x13f470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13f470) {
            ctx->pc = 0x13F498u;
            goto label_13f498;
        }
    }
    ctx->pc = 0x13F478u;
    // 0x13f478: 0xc056354  jal         func_158D50
    ctx->pc = 0x13F478u;
    SET_GPR_U32(ctx, 31, 0x13F480u);
    ctx->pc = 0x158D50u;
    if (runtime->hasFunction(0x158D50u)) {
        auto targetFn = runtime->lookupFunction(0x158D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F480u; }
        if (ctx->pc != 0x13F480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158D50_0x158d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13F480u; }
        if (ctx->pc != 0x13F480u) { return; }
    }
    ctx->pc = 0x13F480u;
label_13f480:
    // 0x13f480: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f484: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x13f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x13f488: 0x8c4456b0  lw          $a0, 0x56B0($v0)
    ctx->pc = 0x13f488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22192)));
    // 0x13f48c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f490: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x13f490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x13f494: 0xac4356b0  sw          $v1, 0x56B0($v0)
    ctx->pc = 0x13f494u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22192), GPR_U32(ctx, 3));
label_13f498:
    // 0x13f498: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f498u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f49c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13f4a0: 0x906456d4  lbu         $a0, 0x56D4($v1)
    ctx->pc = 0x13f4a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22228)));
    // 0x13f4a4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x13f4a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f4a8: 0x204001b  divu        $zero, $s0, $a0
    ctx->pc = 0x13f4a8u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 16) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,16); } }
    // 0x13f4ac: 0x1812  mflo        $v1
    ctx->pc = 0x13f4acu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x13f4b0: 0x18800013  blez        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13F4B0u;
    {
        const bool branch_taken_0x13f4b0 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x13F4B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F4B0u;
            // 0x13f4b4: 0xac4356d0  sw          $v1, 0x56D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4b0) {
            ctx->pc = 0x13F500u;
            goto label_13f500;
        }
    }
    ctx->pc = 0x13F4B8u;
    // 0x13f4b8: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x13f4b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x13f4bc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13f4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13f4c0: 0x24e756b0  addiu       $a3, $a3, 0x56B0
    ctx->pc = 0x13f4c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22192));
    // 0x13f4c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f4c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13f4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_13f4cc:
    // 0x13f4cc: 0x8c8556d0  lw          $a1, 0x56D0($a0)
    ctx->pc = 0x13f4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22224)));
    // 0x13f4d0: 0xa82818  mult        $a1, $a1, $t0
    ctx->pc = 0x13f4d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x13f4d4: 0x2253021  addu        $a2, $s1, $a1
    ctx->pc = 0x13f4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x13f4d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x13f4d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x13f4dc: 0xace60004  sw          $a2, 0x4($a3)
    ctx->pc = 0x13f4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 6));
    // 0x13f4e0: 0x8c6556d0  lw          $a1, 0x56D0($v1)
    ctx->pc = 0x13f4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22224)));
    // 0x13f4e4: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x13f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x13f4e8: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x13f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x13f4ec: 0xace50010  sw          $a1, 0x10($a3)
    ctx->pc = 0x13f4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 5));
    // 0x13f4f0: 0x904556d4  lbu         $a1, 0x56D4($v0)
    ctx->pc = 0x13f4f0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22228)));
    // 0x13f4f4: 0x105282a  slt         $a1, $t0, $a1
    ctx->pc = 0x13f4f4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x13f4f8: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x13F4F8u;
    {
        const bool branch_taken_0x13f4f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x13F4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F4F8u;
            // 0x13f4fc: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f4f8) {
            ctx->pc = 0x13F4CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13f4cc;
        }
    }
    ctx->pc = 0x13F500u;
label_13f500:
    // 0x13f500: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13f500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f504: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f508: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13F508u;
    {
        const bool branch_taken_0x13f508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13F50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F508u;
            // 0x13f50c: 0xa46256da  sh          $v0, 0x56DA($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 22234), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13f508) {
            ctx->pc = 0x13F528u;
            goto label_13f528;
        }
    }
    ctx->pc = 0x13F510u;
label_13f510:
    // 0x13f510: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f514: 0xac625748  sw          $v0, 0x5748($v1)
    ctx->pc = 0x13f514u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22344), GPR_U32(ctx, 2));
    // 0x13f518: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f51c: 0xac71574c  sw          $s1, 0x574C($v1)
    ctx->pc = 0x13f51cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22348), GPR_U32(ctx, 17));
    // 0x13f520: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13f520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13f524: 0xac705750  sw          $s0, 0x5750($v1)
    ctx->pc = 0x13f524u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22352), GPR_U32(ctx, 16));
label_13f528:
    // 0x13f528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13f528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13f52c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13f52cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13f530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13f530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f534: 0x3e00008  jr          $ra
    ctx->pc = 0x13F534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13F534u;
            // 0x13f538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13F53Cu;
    // 0x13f53c: 0x0  nop
    ctx->pc = 0x13f53cu;
    // NOP
}
