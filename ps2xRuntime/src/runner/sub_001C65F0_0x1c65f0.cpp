#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C65F0
// Address: 0x1c65f0 - 0x1c6758
void sub_001C65F0_0x1c65f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C65F0_0x1c65f0");
#endif

    switch (ctx->pc) {
        case 0x1c6658u: goto label_1c6658;
        default: break;
    }

    ctx->pc = 0x1c65f0u;

    // 0x1c65f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c65f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c65f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c65f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c65f8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c65f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c65fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c65fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c6600: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c6600u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6604: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c6604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c6608: 0x26280004  addiu       $t0, $s1, 0x4
    ctx->pc = 0x1c6608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1c660c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c660cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6610: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1c6610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6614: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x1c6614u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c6618: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c6618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c661c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1c661cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c6620: 0x71a02  srl         $v1, $a3, 8
    ctx->pc = 0x1c6620u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 8));
    // 0x1c6624: 0x73e02  srl         $a3, $a3, 24
    ctx->pc = 0x1c6624u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 24));
    // 0x1c6628: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1c6628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c662c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c662cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c6630: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c6630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c6634: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1c6634u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1c6638: 0x3108ff00  andi        $t0, $t0, 0xFF00
    ctx->pc = 0x1c6638u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65280);
    // 0x1c663c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x1c663cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x1c6640: 0x1034025  or          $t0, $t0, $v1
    ctx->pc = 0x1c6640u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x1c6644: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c6644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6648: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1c6648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1c664c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1c664cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c6650: 0xc071922  jal         func_1C6488
    ctx->pc = 0x1C6650u;
    SET_GPR_U32(ctx, 31, 0x1C6658u);
    ctx->pc = 0x1C6654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6650u;
            // 0x1c6654: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C6488u;
    if (runtime->hasFunction(0x1C6488u)) {
        auto targetFn = runtime->lookupFunction(0x1C6488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6658u; }
        if (ctx->pc != 0x1C6658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C6488_0x1c6488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C6658u; }
        if (ctx->pc != 0x1C6658u) { return; }
    }
    ctx->pc = 0x1C6658u;
label_1c6658:
    // 0x1c6658: 0x3c03524f  lui         $v1, 0x524F
    ctx->pc = 0x1c6658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21071 << 16));
    // 0x1c665c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x1c665cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1c6660: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c6660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c6664: 0x34634653  ori         $v1, $v1, 0x4653
    ctx->pc = 0x1c6664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18003);
    // 0x1c6668: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1c6668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1c666c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x1c666cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1c6670: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x1c6670u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c6674: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c6674u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6678: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1c6678u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c667c: 0x26280024  addiu       $t0, $s1, 0x24
    ctx->pc = 0x1c667cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1c6680: 0xa0e00000  sb          $zero, 0x0($a3)
    ctx->pc = 0x1c6680u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c6684: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c6684u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c6688: 0xa0e00002  sb          $zero, 0x2($a3)
    ctx->pc = 0x1c6688u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c668c: 0x2607005c  addiu       $a3, $s0, 0x5C
    ctx->pc = 0x1c668cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x1c6690: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x1c6690u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x1c6694: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x1c6694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x1c6698: 0x248bbfe8  addiu       $t3, $a0, -0x4018
    ctx->pc = 0x1c6698u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950888));
    // 0x1c669c: 0x69630007  ldl         $v1, 0x7($t3)
    ctx->pc = 0x1c669cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1c66a0: 0x6d630000  ldr         $v1, 0x0($t3)
    ctx->pc = 0x1c66a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1c66a4: 0x8d690008  lw          $t1, 0x8($t3)
    ctx->pc = 0x1c66a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1c66a8: 0x816a000c  lb          $t2, 0xC($t3)
    ctx->pc = 0x1c66a8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 12)));
    // 0x1c66ac: 0xb2030023  sdl         $v1, 0x23($s0)
    ctx->pc = 0x1c66acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c66b0: 0xb603001c  sdr         $v1, 0x1C($s0)
    ctx->pc = 0x1c66b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1c66b4: 0xae090024  sw          $t1, 0x24($s0)
    ctx->pc = 0x1c66b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 9));
    // 0x1c66b8: 0xa20a0028  sb          $t2, 0x28($s0)
    ctx->pc = 0x1c66b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 40), (uint8_t)GPR_U32(ctx, 10));
    // 0x1c66bc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c66bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c66c0: 0x91030001  lbu         $v1, 0x1($t0)
    ctx->pc = 0x1c66c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x1c66c4: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1c66c4u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c66c8: 0x91040002  lbu         $a0, 0x2($t0)
    ctx->pc = 0x1c66c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x1c66cc: 0xa0e40001  sb          $a0, 0x1($a3)
    ctx->pc = 0x1c66ccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c66d0: 0x91030003  lbu         $v1, 0x3($t0)
    ctx->pc = 0x1c66d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 3)));
    // 0x1c66d4: 0x26280020  addiu       $t0, $s1, 0x20
    ctx->pc = 0x1c66d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1c66d8: 0xa0e00003  sb          $zero, 0x3($a3)
    ctx->pc = 0x1c66d8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x1c66dc: 0xa0e30002  sb          $v1, 0x2($a3)
    ctx->pc = 0x1c66dcu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c66e0: 0xae050064  sw          $a1, 0x64($s0)
    ctx->pc = 0x1c66e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 5));
    // 0x1c66e4: 0xa2050060  sb          $a1, 0x60($s0)
    ctx->pc = 0x1c66e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c66e8: 0xa2060061  sb          $a2, 0x61($s0)
    ctx->pc = 0x1c66e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 6));
    // 0x1c66ec: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1c66ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1c66f0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c66f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c66f4: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x1c66f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c66f8: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1c66f8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1c66fc: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x1c66fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1c6700: 0x63602  srl         $a2, $a2, 24
    ctx->pc = 0x1c6700u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x1c6704: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1c6704u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c6708: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1c6708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1c670c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1c670cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1c6710: 0x42600  sll         $a0, $a0, 24
    ctx->pc = 0x1c6710u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x1c6714: 0x30a5ff00  andi        $a1, $a1, 0xFF00
    ctx->pc = 0x1c6714u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65280);
    // 0x1c6718: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1c6718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1c671c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1c671cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1c6720: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x1c6720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x1c6724: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x1c6724u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x1c6728: 0x34636230  ori         $v1, $v1, 0x6230
    ctx->pc = 0x1c6728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25136);
    // 0x1c672c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1c672cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1c6730: 0x3c010005  lui         $at, 0x5
    ctx->pc = 0x1c6730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)5 << 16));
    // 0x1c6734: 0x34216a2f  ori         $at, $at, 0x6A2F
    ctx->pc = 0x1c6734u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27183);
    // 0x1c6738: 0x242021  addu        $a0, $at, $a0
    ctx->pc = 0x1c6738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 4)));
    // 0x1c673c: 0x28650000  slti        $a1, $v1, 0x0
    ctx->pc = 0x1c673cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1c6740: 0x85180b  movn        $v1, $a0, $a1
    ctx->pc = 0x1c6740u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1c6744: 0x31ac3  sra         $v1, $v1, 11
    ctx->pc = 0x1c6744u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x1c6748: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x1c6748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x1c674c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c674cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c6750: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6750u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6750u;
            // 0x1c6754: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C6758u;
}
