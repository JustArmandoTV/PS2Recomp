#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9568
// Address: 0x1b9568 - 0x1b9a30
void sub_001B9568_0x1b9568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9568_0x1b9568");
#endif

    switch (ctx->pc) {
        case 0x1b9580u: goto label_1b9580;
        case 0x1b95d0u: goto label_1b95d0;
        case 0x1b95f8u: goto label_1b95f8;
        case 0x1b965cu: goto label_1b965c;
        case 0x1b96e8u: goto label_1b96e8;
        case 0x1b96fcu: goto label_1b96fc;
        case 0x1b9704u: goto label_1b9704;
        case 0x1b9730u: goto label_1b9730;
        case 0x1b9788u: goto label_1b9788;
        case 0x1b979cu: goto label_1b979c;
        case 0x1b988cu: goto label_1b988c;
        case 0x1b98a4u: goto label_1b98a4;
        case 0x1b9948u: goto label_1b9948;
        case 0x1b99ecu: goto label_1b99ec;
        case 0x1b9a00u: goto label_1b9a00;
        default: break;
    }

    ctx->pc = 0x1b9568u;

    // 0x1b9568: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x1b9568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1b956c: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x1B956Cu;
    {
        const bool branch_taken_0x1b956c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1B9570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B956Cu;
            // 0x1b9570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b956c) {
            ctx->pc = 0x1B959Cu;
            goto label_1b959c;
        }
    }
    ctx->pc = 0x1B9574u;
    // 0x1b9574: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x1b9574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x1b9578: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b9578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b957c: 0x0  nop
    ctx->pc = 0x1b957cu;
    // NOP
label_1b9580:
    // 0x1b9580: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1b9580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1b9584: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1b9584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1b9588: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1b9588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1b958c: 0x0  nop
    ctx->pc = 0x1b958cu;
    // NOP
    // 0x1b9590: 0x0  nop
    ctx->pc = 0x1b9590u;
    // NOP
    // 0x1b9594: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1B9594u;
    {
        const bool branch_taken_0x1b9594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9594u;
            // 0x1b9598: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9594) {
            ctx->pc = 0x1B9580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b9580;
        }
    }
    ctx->pc = 0x1B959Cu;
label_1b959c:
    // 0x1b959c: 0xc5001a  div         $zero, $a2, $a1
    ctx->pc = 0x1b959cu;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1b95a0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1B95A0u;
    {
        const bool branch_taken_0x1b95a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b95a0) {
            ctx->pc = 0x1B95A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95A0u;
            // 0x1b95a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B95A8u;
            goto label_1b95a8;
        }
    }
    ctx->pc = 0x1B95A8u;
label_1b95a8:
    // 0x1b95a8: 0x1012  mflo        $v0
    ctx->pc = 0x1b95a8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1b95ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1B95ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B95B4u;
    // 0x1b95b4: 0x0  nop
    ctx->pc = 0x1b95b4u;
    // NOP
    // 0x1b95b8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b95b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b95bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b95bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b95c0: 0xac449bf4  sw          $a0, -0x640C($v0)
    ctx->pc = 0x1b95c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941684), GPR_U32(ctx, 4));
    // 0x1b95c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B95C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B95C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95C4u;
            // 0x1b95c8: 0xac659bf0  sw          $a1, -0x6410($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941680), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B95CCu;
    // 0x1b95cc: 0x0  nop
    ctx->pc = 0x1b95ccu;
    // NOP
label_1b95d0:
    // 0x1b95d0: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1b95d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1b95d4: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1b95d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1b95d8: 0x2463aeb0  addiu       $v1, $v1, -0x5150
    ctx->pc = 0x1b95d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946480));
    // 0x1b95dc: 0xffb00120  sd          $s0, 0x120($sp)
    ctx->pc = 0x1b95dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 16));
    // 0x1b95e0: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1b95e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1b95e4: 0xffb10128  sd          $s1, 0x128($sp)
    ctx->pc = 0x1b95e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 17));
    // 0x1b95e8: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1b95e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x1b95ec: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B95ECu;
    {
        const bool branch_taken_0x1b95ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B95F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B95ECu;
            // 0x1b95f0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b95ec) {
            ctx->pc = 0x1B9658u;
            goto label_1b9658;
        }
    }
    ctx->pc = 0x1B95F4u;
    // 0x1b95f4: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1b95f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1b95f8:
    // 0x1b95f8: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1b95f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b95fc: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1b95fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b9600: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1b9600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b9604: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1b9604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b9608: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x1b9608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1b960c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x1b960cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1b9610: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x1b9610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1b9614: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x1b9614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1b9618: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1b9618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b961c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1b961cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b9620: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1b9620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b9624: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1b9624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b9628: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1b9628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b962c: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1b962cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b9630: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1b9630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b9634: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1b9634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b9638: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b9638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1b963c: 0x0  nop
    ctx->pc = 0x1b963cu;
    // NOP
    // 0x1b9640: 0x0  nop
    ctx->pc = 0x1b9640u;
    // NOP
    // 0x1b9644: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B9644u;
    {
        const bool branch_taken_0x1b9644 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B9648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9644u;
            // 0x1b9648: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9644) {
            ctx->pc = 0x1B95F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b95f8;
        }
    }
    ctx->pc = 0x1B964Cu;
    // 0x1b964c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1B964Cu;
    {
        const bool branch_taken_0x1b964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b964c) {
            ctx->pc = 0x1B9690u;
            goto label_1b9690;
        }
    }
    ctx->pc = 0x1B9654u;
    // 0x1b9654: 0x0  nop
    ctx->pc = 0x1b9654u;
    // NOP
label_1b9658:
    // 0x1b9658: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x1b9658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1b965c:
    // 0x1b965c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x1b965cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9660: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x1b9660u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1b9664: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x1b9664u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b9668: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x1b9668u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1b966c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x1b966cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x1b9670: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x1b9670u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x1b9674: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x1b9674u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x1b9678: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x1b9678u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x1b967c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1b967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1b9680: 0x0  nop
    ctx->pc = 0x1b9680u;
    // NOP
    // 0x1b9684: 0x0  nop
    ctx->pc = 0x1b9684u;
    // NOP
    // 0x1b9688: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1B9688u;
    {
        const bool branch_taken_0x1b9688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B968Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9688u;
            // 0x1b968c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9688) {
            ctx->pc = 0x1B965Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b965c;
        }
    }
    ctx->pc = 0x1B9690u;
label_1b9690:
    // 0x1b9690: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x1b9690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1b9694: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x1b9694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1b9698: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x1b9698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1b969c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x1b969cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1b96a0: 0x80670010  lb          $a3, 0x10($v1)
    ctx->pc = 0x1b96a0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1b96a4: 0x80680011  lb          $t0, 0x11($v1)
    ctx->pc = 0x1b96a4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 17)));
    // 0x1b96a8: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x1b96a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b96ac: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x1b96acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b96b0: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1b96b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b96b4: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1b96b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1b96b8: 0xa0870010  sb          $a3, 0x10($a0)
    ctx->pc = 0x1b96b8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 7));
    // 0x1b96bc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b96bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b96c0: 0x24519bf4  addiu       $s1, $v0, -0x640C
    ctx->pc = 0x1b96c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941684));
    // 0x1b96c4: 0xa0880011  sb          $t0, 0x11($a0)
    ctx->pc = 0x1b96c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 17), (uint8_t)GPR_U32(ctx, 8));
    // 0x1b96c8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1b96c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b96cc: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B96CCu;
    {
        const bool branch_taken_0x1b96cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B96D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96CCu;
            // 0x1b96d0: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b96cc) {
            ctx->pc = 0x1B9718u;
            goto label_1b9718;
        }
    }
    ctx->pc = 0x1B96D4u;
    // 0x1b96d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b96d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96d8: 0x8c469bf0  lw          $a2, -0x6410($v0)
    ctx->pc = 0x1b96d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941680)));
    // 0x1b96dc: 0x3c100060  lui         $s0, 0x60
    ctx->pc = 0x1b96dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
    // 0x1b96e0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x1B96E0u;
    SET_GPR_U32(ctx, 31, 0x1B96E8u);
    ctx->pc = 0x1B96E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96E0u;
            // 0x1b96e4: 0x26109bfc  addiu       $s0, $s0, -0x6404 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294941692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96E8u; }
        if (ctx->pc != 0x1B96E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96E8u; }
        if (ctx->pc != 0x1B96E8u) { return; }
    }
    ctx->pc = 0x1B96E8u;
label_1b96e8:
    // 0x1b96e8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b96e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b96ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1b96ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b96f0: 0x0  nop
    ctx->pc = 0x1b96f0u;
    // NOP
    // 0x1b96f4: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1B96F4u;
    SET_GPR_U32(ctx, 31, 0x1B96FCu);
    ctx->pc = 0x1B96F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96F4u;
            // 0x1b96f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96FCu; }
        if (ctx->pc != 0x1B96FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B96FCu; }
        if (ctx->pc != 0x1B96FCu) { return; }
    }
    ctx->pc = 0x1B96FCu;
label_1b96fc:
    // 0x1b96fc: 0xc04b02e  jal         func_12C0B8
    ctx->pc = 0x1B96FCu;
    SET_GPR_U32(ctx, 31, 0x1B9704u);
    ctx->pc = 0x1B9700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B96FCu;
            // 0x1b9700: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9704u; }
        if (ctx->pc != 0x1B9704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9704u; }
        if (ctx->pc != 0x1B9704u) { return; }
    }
    ctx->pc = 0x1B9704u;
label_1b9704:
    // 0x1b9704: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1b9704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b9708: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b9708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b970c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b970cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b9710: 0xac839c00  sw          $v1, -0x6400($a0)
    ctx->pc = 0x1b9710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941696), GPR_U32(ctx, 3));
    // 0x1b9714: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1b9714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1b9718:
    // 0x1b9718: 0xdfb00120  ld          $s0, 0x120($sp)
    ctx->pc = 0x1b9718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1b971c: 0xdfb10128  ld          $s1, 0x128($sp)
    ctx->pc = 0x1b971cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1b9720: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1b9720u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1b9724: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9724u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9724u;
            // 0x1b9728: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B972Cu;
    // 0x1b972c: 0x0  nop
    ctx->pc = 0x1b972cu;
    // NOP
label_1b9730:
    // 0x1b9730: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1b9730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x1b9734: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b9734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b9738: 0xffbe0200  sd          $fp, 0x200($sp)
    ctx->pc = 0x1b9738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 512), GPR_U64(ctx, 30));
    // 0x1b973c: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1b973cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9740: 0xffb001c0  sd          $s0, 0x1C0($sp)
    ctx->pc = 0x1b9740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 16));
    // 0x1b9744: 0x24639bf4  addiu       $v1, $v1, -0x640C
    ctx->pc = 0x1b9744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941684));
    // 0x1b9748: 0xffb101c8  sd          $s1, 0x1C8($sp)
    ctx->pc = 0x1b9748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 456), GPR_U64(ctx, 17));
    // 0x1b974c: 0xffb201d0  sd          $s2, 0x1D0($sp)
    ctx->pc = 0x1b974cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 18));
    // 0x1b9750: 0xffb301d8  sd          $s3, 0x1D8($sp)
    ctx->pc = 0x1b9750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 472), GPR_U64(ctx, 19));
    // 0x1b9754: 0xffb401e0  sd          $s4, 0x1E0($sp)
    ctx->pc = 0x1b9754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 480), GPR_U64(ctx, 20));
    // 0x1b9758: 0xffb501e8  sd          $s5, 0x1E8($sp)
    ctx->pc = 0x1b9758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 488), GPR_U64(ctx, 21));
    // 0x1b975c: 0xffb601f0  sd          $s6, 0x1F0($sp)
    ctx->pc = 0x1b975cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 496), GPR_U64(ctx, 22));
    // 0x1b9760: 0xffb701f8  sd          $s7, 0x1F8($sp)
    ctx->pc = 0x1b9760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 504), GPR_U64(ctx, 23));
    // 0x1b9764: 0xffbf0208  sd          $ra, 0x208($sp)
    ctx->pc = 0x1b9764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 520), GPR_U64(ctx, 31));
    // 0x1b9768: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b9768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b976c: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1B976Cu;
    {
        const bool branch_taken_0x1b976c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B976Cu;
            // 0x1b9770: 0x240403e8  addiu       $a0, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b976c) {
            ctx->pc = 0x1B98D8u;
            goto label_1b98d8;
        }
    }
    ctx->pc = 0x1B9774u;
    // 0x1b9774: 0x8fc60120  lw          $a2, 0x120($fp)
    ctx->pc = 0x1b9774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x1b9778: 0x3c100064  lui         $s0, 0x64
    ctx->pc = 0x1b9778u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)100 << 16));
    // 0x1b977c: 0x8fc50118  lw          $a1, 0x118($fp)
    ctx->pc = 0x1b977cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x1b9780: 0xc065a72  jal         func_1969C8
    ctx->pc = 0x1B9780u;
    SET_GPR_U32(ctx, 31, 0x1B9788u);
    ctx->pc = 0x1B9784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9780u;
            // 0x1b9784: 0x2610afc8  addiu       $s0, $s0, -0x5038 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1969C8u;
    if (runtime->hasFunction(0x1969C8u)) {
        auto targetFn = runtime->lookupFunction(0x1969C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9788u; }
        if (ctx->pc != 0x1B9788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001969C8_0x1969c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9788u; }
        if (ctx->pc != 0x1B9788u) { return; }
    }
    ctx->pc = 0x1B9788u;
label_1b9788:
    // 0x1b9788: 0xdfd10118  ld          $s1, 0x118($fp)
    ctx->pc = 0x1b9788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 30), 280)));
    // 0x1b978c: 0xdfc50120  ld          $a1, 0x120($fp)
    ctx->pc = 0x1b978cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 30), 288)));
    // 0x1b9790: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1b9790u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9794: 0xc048dee  jal         func_1237B8
    ctx->pc = 0x1B9794u;
    SET_GPR_U32(ctx, 31, 0x1B979Cu);
    ctx->pc = 0x1B9798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9794u;
            // 0x1b9798: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1237B8u;
    if (runtime->hasFunction(0x1237B8u)) {
        auto targetFn = runtime->lookupFunction(0x1237B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B979Cu; }
        if (ctx->pc != 0x1B979Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001237B8_0x1237b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B979Cu; }
        if (ctx->pc != 0x1B979Cu) { return; }
    }
    ctx->pc = 0x1B979Cu;
label_1b979c:
    // 0x1b979c: 0x3c0b7fff  lui         $t3, 0x7FFF
    ctx->pc = 0x1b979cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32767 << 16));
    // 0x1b97a0: 0x356bffff  ori         $t3, $t3, 0xFFFF
    ctx->pc = 0x1b97a0u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)65535);
    // 0x1b97a4: 0xdfc40188  ld          $a0, 0x188($fp)
    ctx->pc = 0x1b97a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 392)));
    // 0x1b97a8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1b97a8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97ac: 0xdfc30128  ld          $v1, 0x128($fp)
    ctx->pc = 0x1b97acu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 30), 296)));
    // 0x1b97b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1b97b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97b4: 0xffa401a0  sd          $a0, 0x1A0($sp)
    ctx->pc = 0x1b97b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 4));
    // 0x1b97b8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b97b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97bc: 0x11483f  dsra32      $t1, $s1, 0
    ctx->pc = 0x1b97bcu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x1b97c0: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x1b97c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97c4: 0xdfd20108  ld          $s2, 0x108($fp)
    ctx->pc = 0x1b97c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 30), 264)));
    // 0x1b97c8: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x1b97c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b97cc: 0x14b5824  and         $t3, $t2, $t3
    ctx->pc = 0x1b97ccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & GPR_U64(ctx, 11));
    // 0x1b97d0: 0xffb201a8  sd          $s2, 0x1A8($sp)
    ctx->pc = 0x1b97d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 18));
    // 0x1b97d4: 0xdfb201a0  ld          $s2, 0x1A0($sp)
    ctx->pc = 0x1b97d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b97d8: 0x8fc401ac  lw          $a0, 0x1AC($fp)
    ctx->pc = 0x1b97d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 428)));
    // 0x1b97dc: 0x243b82f  dsubu       $s7, $s2, $v1
    ctx->pc = 0x1b97dcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 18) - GPR_U64(ctx, 3));
    // 0x1b97e0: 0xffa401b0  sd          $a0, 0x1B0($sp)
    ctx->pc = 0x1b97e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 4));
    // 0x1b97e4: 0xdfa401a8  ld          $a0, 0x1A8($sp)
    ctx->pc = 0x1b97e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1b97e8: 0x8fcd0198  lw          $t5, 0x198($fp)
    ctx->pc = 0x1b97e8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 408)));
    // 0x1b97ec: 0x83902f  dsubu       $s2, $a0, $v1
    ctx->pc = 0x1b97ecu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) - GPR_U64(ctx, 3));
    // 0x1b97f0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1b97f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b97f4: 0x8fce01a4  lw          $t6, 0x1A4($fp)
    ctx->pc = 0x1b97f4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 420)));
    // 0x1b97f8: 0x8fd901b0  lw          $t9, 0x1B0($fp)
    ctx->pc = 0x1b97f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 432)));
    // 0x1b97fc: 0x8fd801b4  lw          $t8, 0x1B4($fp)
    ctx->pc = 0x1b97fcu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 436)));
    // 0x1b9800: 0x8fcf01a0  lw          $t7, 0x1A0($fp)
    ctx->pc = 0x1b9800u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 416)));
    // 0x1b9804: 0x8fcc0194  lw          $t4, 0x194($fp)
    ctx->pc = 0x1b9804u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 404)));
    // 0x1b9808: 0x8fd101a8  lw          $s1, 0x1A8($fp)
    ctx->pc = 0x1b9808u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 424)));
    // 0x1b980c: 0x8fd0019c  lw          $s0, 0x19C($fp)
    ctx->pc = 0x1b980cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 412)));
    // 0x1b9810: 0x8fc20190  lw          $v0, 0x190($fp)
    ctx->pc = 0x1b9810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 400)));
    // 0x1b9814: 0x8fd501b8  lw          $s5, 0x1B8($fp)
    ctx->pc = 0x1b9814u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 440)));
    // 0x1b9818: 0x9fd40004  lwu         $s4, 0x4($fp)
    ctx->pc = 0x1b9818u;
    SET_GPR_U32(ctx, 20, READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x1b981c: 0x9fd30008  lwu         $s3, 0x8($fp)
    ctx->pc = 0x1b981cu;
    SET_GPR_U32(ctx, 19, READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x1b9820: 0xffb20018  sd          $s2, 0x18($sp)
    ctx->pc = 0x1b9820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 18));
    // 0x1b9824: 0xdfb201b0  ld          $s2, 0x1B0($sp)
    ctx->pc = 0x1b9824u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x1b9828: 0xffb00058  sd          $s0, 0x58($sp)
    ctx->pc = 0x1b9828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 16));
    // 0x1b982c: 0xffb20028  sd          $s2, 0x28($sp)
    ctx->pc = 0x1b982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 18));
    // 0x1b9830: 0xffa20068  sd          $v0, 0x68($sp)
    ctx->pc = 0x1b9830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 2));
    // 0x1b9834: 0xffb70020  sd          $s7, 0x20($sp)
    ctx->pc = 0x1b9834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 23));
    // 0x1b9838: 0xffb90030  sd          $t9, 0x30($sp)
    ctx->pc = 0x1b9838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 25));
    // 0x1b983c: 0xffb80038  sd          $t8, 0x38($sp)
    ctx->pc = 0x1b983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 24));
    // 0x1b9840: 0xffb50040  sd          $s5, 0x40($sp)
    ctx->pc = 0x1b9840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 21));
    // 0x1b9844: 0xffb40048  sd          $s4, 0x48($sp)
    ctx->pc = 0x1b9844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 20));
    // 0x1b9848: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x1b9848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x1b984c: 0xffaf0060  sd          $t7, 0x60($sp)
    ctx->pc = 0x1b984cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 15));
    // 0x1b9850: 0xffac0070  sd          $t4, 0x70($sp)
    ctx->pc = 0x1b9850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 12));
    // 0x1b9854: 0xdfa201a0  ld          $v0, 0x1A0($sp)
    ctx->pc = 0x1b9854u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x1b9858: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x1b9858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
    // 0x1b985c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1b985cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1b9860: 0xdfb201a8  ld          $s2, 0x1A8($sp)
    ctx->pc = 0x1b9860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x1b9864: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1b9864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1b9868: 0x8c629960  lw          $v0, -0x66A0($v1)
    ctx->pc = 0x1b9868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941024)));
    // 0x1b986c: 0xffb20008  sd          $s2, 0x8($sp)
    ctx->pc = 0x1b986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
    // 0x1b9870: 0x3c120060  lui         $s2, 0x60
    ctx->pc = 0x1b9870u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)96 << 16));
    // 0x1b9874: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1b9874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
    // 0x1b9878: 0x26529bf4  addiu       $s2, $s2, -0x640C
    ctx->pc = 0x1b9878u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941684));
    // 0x1b987c: 0xffad0078  sd          $t5, 0x78($sp)
    ctx->pc = 0x1b987cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 13));
    // 0x1b9880: 0xffae0080  sd          $t6, 0x80($sp)
    ctx->pc = 0x1b9880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 14));
    // 0x1b9884: 0xc04ae62  jal         func_12B988
    ctx->pc = 0x1B9884u;
    SET_GPR_U32(ctx, 31, 0x1B988Cu);
    ctx->pc = 0x1B9888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9884u;
            // 0x1b9888: 0xffa20090  sd          $v0, 0x90($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12B988u;
    if (runtime->hasFunction(0x12B988u)) {
        auto targetFn = runtime->lookupFunction(0x12B988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B988Cu; }
        if (ctx->pc != 0x1B988Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012B988_0x12b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B988Cu; }
        if (ctx->pc != 0x1B988Cu) { return; }
    }
    ctx->pc = 0x1B988Cu;
label_1b988c:
    // 0x1b988c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1b988cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9890: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b9890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b9894: 0x24519bfc  addiu       $s1, $v0, -0x6404
    ctx->pc = 0x1b9894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941692));
    // 0x1b9898: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x1b9898u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1b989c: 0xc04afe8  jal         func_12BFA0
    ctx->pc = 0x1B989Cu;
    SET_GPR_U32(ctx, 31, 0x1B98A4u);
    ctx->pc = 0x1B98A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B989Cu;
            // 0x1b98a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BFA0u;
    if (runtime->hasFunction(0x12BFA0u)) {
        auto targetFn = runtime->lookupFunction(0x12BFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98A4u; }
        if (ctx->pc != 0x1B98A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BFA0_0x12bfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B98A4u; }
        if (ctx->pc != 0x1B98A4u) { return; }
    }
    ctx->pc = 0x1B98A4u;
label_1b98a4:
    // 0x1b98a4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1b98a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1b98a8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1b98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b98ac: 0x8c859bf0  lw          $a1, -0x6410($a0)
    ctx->pc = 0x1b98acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294941680)));
    // 0x1b98b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1b98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b98b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1b98b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1b98b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1b98bc: 0x2442fc00  addiu       $v0, $v0, -0x400
    ctx->pc = 0x1b98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966272));
    // 0x1b98c0: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1b98c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b98c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B98C4u;
    {
        const bool branch_taken_0x1b98c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B98C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B98C4u;
            // 0x1b98c8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98c4) {
            ctx->pc = 0x1B98D8u;
            goto label_1b98d8;
        }
    }
    ctx->pc = 0x1B98CCu;
    // 0x1b98cc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1b98ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x1b98d0: 0x8c439c00  lw          $v1, -0x6400($v0)
    ctx->pc = 0x1b98d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941696)));
    // 0x1b98d4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1b98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1b98d8:
    // 0x1b98d8: 0xdfb001c0  ld          $s0, 0x1C0($sp)
    ctx->pc = 0x1b98d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1b98dc: 0xdfb101c8  ld          $s1, 0x1C8($sp)
    ctx->pc = 0x1b98dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x1b98e0: 0xdfb201d0  ld          $s2, 0x1D0($sp)
    ctx->pc = 0x1b98e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1b98e4: 0xdfb301d8  ld          $s3, 0x1D8($sp)
    ctx->pc = 0x1b98e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 472)));
    // 0x1b98e8: 0xdfb401e0  ld          $s4, 0x1E0($sp)
    ctx->pc = 0x1b98e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x1b98ec: 0xdfb501e8  ld          $s5, 0x1E8($sp)
    ctx->pc = 0x1b98ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 488)));
    // 0x1b98f0: 0xdfb601f0  ld          $s6, 0x1F0($sp)
    ctx->pc = 0x1b98f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x1b98f4: 0xdfb701f8  ld          $s7, 0x1F8($sp)
    ctx->pc = 0x1b98f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x1b98f8: 0xdfbe0200  ld          $fp, 0x200($sp)
    ctx->pc = 0x1b98f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x1b98fc: 0xdfbf0208  ld          $ra, 0x208($sp)
    ctx->pc = 0x1b98fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 520)));
    // 0x1b9900: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9900u;
            // 0x1b9904: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9908u;
    // 0x1b9908: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b9908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1b990c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1b990cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1b9910: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1b9910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1b9914: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1b9914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9918: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1b9918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1b991c: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1b991cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9920: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1b9920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1b9924: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1b9924u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9928: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1b9928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1b992c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1b992cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9930: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1b9930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1b9934: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1b9934u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9938: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1b9938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1b993c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1b993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1b9940: 0xc06a234  jal         func_1A88D0
    ctx->pc = 0x1B9940u;
    SET_GPR_U32(ctx, 31, 0x1B9948u);
    ctx->pc = 0x1B9944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9940u;
            // 0x1b9944: 0x263021c0  addiu       $s0, $s1, 0x21C0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A88D0u;
    if (runtime->hasFunction(0x1A88D0u)) {
        auto targetFn = runtime->lookupFunction(0x1A88D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9948u; }
        if (ctx->pc != 0x1B9948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A88D0_0x1a88d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9948u; }
        if (ctx->pc != 0x1B9948u) { return; }
    }
    ctx->pc = 0x1B9948u;
label_1b9948:
    // 0x1b9948: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b9948u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b994c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9950: 0x34a50192  ori         $a1, $a1, 0x192
    ctx->pc = 0x1b9950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)402);
    // 0x1b9954: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1B9954u;
    {
        const bool branch_taken_0x1b9954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9954u;
            // 0x1b9958: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9954) {
            ctx->pc = 0x1B9988u;
            goto label_1b9988;
        }
    }
    ctx->pc = 0x1B995Cu;
    // 0x1b995c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b995cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9960: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9960u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9964: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9964u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9968: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b9968u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b996c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b996cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9970: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b9970u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9974: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b9974u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9978: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b9978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b997c: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B997Cu;
    ctx->pc = 0x1B9980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B997Cu;
            // 0x1b9980: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B9984u;
    // 0x1b9984: 0x0  nop
    ctx->pc = 0x1b9984u;
    // NOP
label_1b9988:
    // 0x1b9988: 0x8e120010  lw          $s2, 0x10($s0)
    ctx->pc = 0x1b9988u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1b998c: 0x1643000e  bne         $s2, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1B998Cu;
    {
        const bool branch_taken_0x1b998c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B9990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B998Cu;
            // 0x1b9990: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b998c) {
            ctx->pc = 0x1B99C8u;
            goto label_1b99c8;
        }
    }
    ctx->pc = 0x1B9994u;
    // 0x1b9994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b9994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9998: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9998u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b999c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1b999cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1b99a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b99a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b99a4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b99a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b99a8: 0x34a50602  ori         $a1, $a1, 0x602
    ctx->pc = 0x1b99a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1538);
    // 0x1b99ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b99acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b99b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b99b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b99b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b99b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b99b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b99b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b99bc: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b99bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b99c0: 0x806a1ac  j           func_1A86B0
    ctx->pc = 0x1B99C0u;
    ctx->pc = 0x1B99C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99C0u;
            // 0x1b99c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A86B0u;
    if (runtime->hasFunction(0x1A86B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A86B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A86B0_0x1a86b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1B99C8u;
label_1b99c8:
    // 0x1b99c8: 0x168100  sll         $s0, $s6, 4
    ctx->pc = 0x1b99c8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 4));
    // 0x1b99cc: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1b99ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99d0: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x1b99d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1b99d4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b99d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b99d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b99dc: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1b99dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b99e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99e4: 0xc06e760  jal         func_1B9D80
    ctx->pc = 0x1B99E4u;
    SET_GPR_U32(ctx, 31, 0x1B99ECu);
    ctx->pc = 0x1B99E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99E4u;
            // 0x1b99e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9D80u;
    if (runtime->hasFunction(0x1B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x1B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99ECu; }
        if (ctx->pc != 0x1B99ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9D80_0x1b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B99ECu; }
        if (ctx->pc != 0x1B99ECu) { return; }
    }
    ctx->pc = 0x1B99ECu;
label_1b99ec:
    // 0x1b99ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b99ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1b99f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99f4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1b99f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b99f8: 0xc0695e2  jal         func_1A5788
    ctx->pc = 0x1B99F8u;
    SET_GPR_U32(ctx, 31, 0x1B9A00u);
    ctx->pc = 0x1B99FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B99F8u;
            // 0x1b99fc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5788u;
    if (runtime->hasFunction(0x1A5788u)) {
        auto targetFn = runtime->lookupFunction(0x1A5788u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A00u; }
        if (ctx->pc != 0x1B9A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A5788_0x1a5788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9A00u; }
        if (ctx->pc != 0x1B9A00u) { return; }
    }
    ctx->pc = 0x1B9A00u;
label_1b9a00:
    // 0x1b9a00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b9a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9a04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1b9a04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9a08: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1b9a08u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1b9a0c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1b9a0cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9a10: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1b9a10u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b9a14: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1b9a14u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b9a18: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1b9a18u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b9a1c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1b9a1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b9a20: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1b9a20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1b9a24: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9A24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B9A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9A24u;
            // 0x1b9a28: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B9A2Cu;
    // 0x1b9a2c: 0x0  nop
    ctx->pc = 0x1b9a2cu;
    // NOP
}
