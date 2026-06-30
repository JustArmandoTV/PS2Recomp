#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A7638
// Address: 0x1a7638 - 0x1a76e0
void sub_001A7638_0x1a7638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A7638_0x1a7638");
#endif

    switch (ctx->pc) {
        case 0x1a7660u: goto label_1a7660;
        default: break;
    }

    ctx->pc = 0x1a7638u;

    // 0x1a7638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a7638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a763c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a763cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7640: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1a7640u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7644: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1a7644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7648: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a7648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1a764c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a764cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1a7650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a7654: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a7654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a7658: 0xc069db8  jal         func_1A76E0
    ctx->pc = 0x1A7658u;
    SET_GPR_U32(ctx, 31, 0x1A7660u);
    ctx->pc = 0x1A765Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7658u;
            // 0x1a765c: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A76E0u;
    if (runtime->hasFunction(0x1A76E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A76E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7660u; }
        if (ctx->pc != 0x1A7660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A76E0_0x1a76e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A7660u; }
        if (ctx->pc != 0x1A7660u) { return; }
    }
    ctx->pc = 0x1A7660u;
label_1a7660:
    // 0x1a7660: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1A7660u;
    {
        const bool branch_taken_0x1a7660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A7660u;
            // 0x1a7664: 0x93a40006  lbu         $a0, 0x6($sp) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7660) {
            ctx->pc = 0x1A76CCu;
            goto label_1a76cc;
        }
    }
    ctx->pc = 0x1A7668u;
    // 0x1a7668: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a7668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a766c: 0x93a50003  lbu         $a1, 0x3($sp)
    ctx->pc = 0x1a766cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x1a7670: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a7670u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a7674: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a7674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1a7678: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x1a7678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
    // 0x1a767c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a767cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a7680: 0x9063a9b0  lbu         $v1, -0x5650($v1)
    ctx->pc = 0x1a7680u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294945200)));
    // 0x1a7684: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1a7684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a7688: 0xa2030028  sb          $v1, 0x28($s0)
    ctx->pc = 0x1a7688u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 3));
    // 0x1a768c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1a768cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1a7690: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1a7690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1a7694: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1a7694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1a7698: 0x8c84a9c0  lw          $a0, -0x5640($a0)
    ctx->pc = 0x1a7698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294945216)));
    // 0x1a769c: 0xae04002c  sw          $a0, 0x2C($s0)
    ctx->pc = 0x1a769cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
    // 0x1a76a0: 0x24679968  addiu       $a3, $v1, -0x6698
    ctx->pc = 0x1a76a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941032));
    // 0x1a76a4: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x1a76a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a76a8: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x1a76a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a76ac: 0x83a50008  lb          $a1, 0x8($sp)
    ctx->pc = 0x1a76acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a76b0: 0x83a60009  lb          $a2, 0x9($sp)
    ctx->pc = 0x1a76b0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 9)));
    // 0x1a76b4: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x1a76b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a76b8: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x1a76b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a76bc: 0xa0e50008  sb          $a1, 0x8($a3)
    ctx->pc = 0x1a76bcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 8), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a76c0: 0xa0e60009  sb          $a2, 0x9($a3)
    ctx->pc = 0x1a76c0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x1a76c4: 0x83a4000a  lb          $a0, 0xA($sp)
    ctx->pc = 0x1a76c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 10)));
    // 0x1a76c8: 0xa0e4000a  sb          $a0, 0xA($a3)
    ctx->pc = 0x1a76c8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 10), (uint8_t)GPR_U32(ctx, 4));
label_1a76cc:
    // 0x1a76cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a76ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a76d0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1a76d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a76d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A76D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A76D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A76D4u;
            // 0x1a76d8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A76DCu;
    // 0x1a76dc: 0x0  nop
    ctx->pc = 0x1a76dcu;
    // NOP
}
