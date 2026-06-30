#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001089B8
// Address: 0x1089b8 - 0x108b88
void sub_001089B8_0x1089b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001089B8_0x1089b8");
#endif

    switch (ctx->pc) {
        case 0x1089b8u: goto label_1089b8;
        case 0x1089bcu: goto label_1089bc;
        case 0x1089c0u: goto label_1089c0;
        case 0x1089c4u: goto label_1089c4;
        case 0x1089c8u: goto label_1089c8;
        case 0x1089ccu: goto label_1089cc;
        case 0x1089d0u: goto label_1089d0;
        case 0x1089d4u: goto label_1089d4;
        case 0x1089d8u: goto label_1089d8;
        case 0x1089dcu: goto label_1089dc;
        case 0x1089e0u: goto label_1089e0;
        case 0x1089e4u: goto label_1089e4;
        case 0x1089e8u: goto label_1089e8;
        case 0x1089ecu: goto label_1089ec;
        case 0x1089f0u: goto label_1089f0;
        case 0x1089f4u: goto label_1089f4;
        case 0x1089f8u: goto label_1089f8;
        case 0x1089fcu: goto label_1089fc;
        case 0x108a00u: goto label_108a00;
        case 0x108a04u: goto label_108a04;
        case 0x108a08u: goto label_108a08;
        case 0x108a0cu: goto label_108a0c;
        case 0x108a10u: goto label_108a10;
        case 0x108a14u: goto label_108a14;
        case 0x108a18u: goto label_108a18;
        case 0x108a1cu: goto label_108a1c;
        case 0x108a20u: goto label_108a20;
        case 0x108a24u: goto label_108a24;
        case 0x108a28u: goto label_108a28;
        case 0x108a2cu: goto label_108a2c;
        case 0x108a30u: goto label_108a30;
        case 0x108a34u: goto label_108a34;
        case 0x108a38u: goto label_108a38;
        case 0x108a3cu: goto label_108a3c;
        case 0x108a40u: goto label_108a40;
        case 0x108a44u: goto label_108a44;
        case 0x108a48u: goto label_108a48;
        case 0x108a4cu: goto label_108a4c;
        case 0x108a50u: goto label_108a50;
        case 0x108a54u: goto label_108a54;
        case 0x108a58u: goto label_108a58;
        case 0x108a5cu: goto label_108a5c;
        case 0x108a60u: goto label_108a60;
        case 0x108a64u: goto label_108a64;
        case 0x108a68u: goto label_108a68;
        case 0x108a6cu: goto label_108a6c;
        case 0x108a70u: goto label_108a70;
        case 0x108a74u: goto label_108a74;
        case 0x108a78u: goto label_108a78;
        case 0x108a7cu: goto label_108a7c;
        case 0x108a80u: goto label_108a80;
        case 0x108a84u: goto label_108a84;
        case 0x108a88u: goto label_108a88;
        case 0x108a8cu: goto label_108a8c;
        case 0x108a90u: goto label_108a90;
        case 0x108a94u: goto label_108a94;
        case 0x108a98u: goto label_108a98;
        case 0x108a9cu: goto label_108a9c;
        case 0x108aa0u: goto label_108aa0;
        case 0x108aa4u: goto label_108aa4;
        case 0x108aa8u: goto label_108aa8;
        case 0x108aacu: goto label_108aac;
        case 0x108ab0u: goto label_108ab0;
        case 0x108ab4u: goto label_108ab4;
        case 0x108ab8u: goto label_108ab8;
        case 0x108abcu: goto label_108abc;
        case 0x108ac0u: goto label_108ac0;
        case 0x108ac4u: goto label_108ac4;
        case 0x108ac8u: goto label_108ac8;
        case 0x108accu: goto label_108acc;
        case 0x108ad0u: goto label_108ad0;
        case 0x108ad4u: goto label_108ad4;
        case 0x108ad8u: goto label_108ad8;
        case 0x108adcu: goto label_108adc;
        case 0x108ae0u: goto label_108ae0;
        case 0x108ae4u: goto label_108ae4;
        case 0x108ae8u: goto label_108ae8;
        case 0x108aecu: goto label_108aec;
        case 0x108af0u: goto label_108af0;
        case 0x108af4u: goto label_108af4;
        case 0x108af8u: goto label_108af8;
        case 0x108afcu: goto label_108afc;
        case 0x108b00u: goto label_108b00;
        case 0x108b04u: goto label_108b04;
        case 0x108b08u: goto label_108b08;
        case 0x108b0cu: goto label_108b0c;
        case 0x108b10u: goto label_108b10;
        case 0x108b14u: goto label_108b14;
        case 0x108b18u: goto label_108b18;
        case 0x108b1cu: goto label_108b1c;
        case 0x108b20u: goto label_108b20;
        case 0x108b24u: goto label_108b24;
        case 0x108b28u: goto label_108b28;
        case 0x108b2cu: goto label_108b2c;
        case 0x108b30u: goto label_108b30;
        case 0x108b34u: goto label_108b34;
        case 0x108b38u: goto label_108b38;
        case 0x108b3cu: goto label_108b3c;
        case 0x108b40u: goto label_108b40;
        case 0x108b44u: goto label_108b44;
        case 0x108b48u: goto label_108b48;
        case 0x108b4cu: goto label_108b4c;
        case 0x108b50u: goto label_108b50;
        case 0x108b54u: goto label_108b54;
        case 0x108b58u: goto label_108b58;
        case 0x108b5cu: goto label_108b5c;
        case 0x108b60u: goto label_108b60;
        case 0x108b64u: goto label_108b64;
        case 0x108b68u: goto label_108b68;
        case 0x108b6cu: goto label_108b6c;
        case 0x108b70u: goto label_108b70;
        case 0x108b74u: goto label_108b74;
        case 0x108b78u: goto label_108b78;
        case 0x108b7cu: goto label_108b7c;
        case 0x108b80u: goto label_108b80;
        case 0x108b84u: goto label_108b84;
        default: break;
    }

    ctx->pc = 0x1089b8u;

label_1089b8:
    // 0x1089b8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1089b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1089bc:
    // 0x1089bc: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x1089bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_1089c0:
    // 0x1089c0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1089c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_1089c4:
    // 0x1089c4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x1089c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_1089c8:
    // 0x1089c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1089c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1089cc:
    // 0x1089cc: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1089ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1089d0:
    // 0x1089d0: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1089d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_1089d4:
    // 0x1089d4: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x1089d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_1089d8:
    // 0x1089d8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1089d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1089dc:
    // 0x1089dc: 0x2447e958  addiu       $a3, $v0, -0x16A8
    ctx->pc = 0x1089dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961496));
label_1089e0:
    // 0x1089e0: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1089e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1089e4:
    // 0x1089e4: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1089e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1089e8:
    // 0x1089e8: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x1089e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1089ec:
    // 0x1089ec: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x1089ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1089f0:
    // 0x1089f0: 0x68e60017  ldl         $a2, 0x17($a3)
    ctx->pc = 0x1089f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1089f4:
    // 0x1089f4: 0x6ce60010  ldr         $a2, 0x10($a3)
    ctx->pc = 0x1089f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1089f8:
    // 0x1089f8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1089f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1089fc:
    // 0x1089fc: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1089fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_108a00:
    // 0x108a00: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x108a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_108a04:
    // 0x108a04: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x108a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_108a08:
    // 0x108a08: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x108a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_108a0c:
    // 0x108a0c: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x108a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_108a10:
    // 0x108a10: 0x68e3001f  ldl         $v1, 0x1F($a3)
    ctx->pc = 0x108a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_108a14:
    // 0x108a14: 0x6ce30018  ldr         $v1, 0x18($a3)
    ctx->pc = 0x108a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_108a18:
    // 0x108a18: 0x68e50027  ldl         $a1, 0x27($a3)
    ctx->pc = 0x108a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_108a1c:
    // 0x108a1c: 0x6ce50020  ldr         $a1, 0x20($a3)
    ctx->pc = 0x108a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_108a20:
    // 0x108a20: 0x8ce60028  lw          $a2, 0x28($a3)
    ctx->pc = 0x108a20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_108a24:
    // 0x108a24: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x108a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_108a28:
    // 0x108a28: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x108a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_108a2c:
    // 0x108a2c: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x108a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_108a30:
    // 0x108a30: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x108a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_108a34:
    // 0x108a34: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x108a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_108a38:
    // 0x108a38: 0xc04234a  jal         func_108D28
label_108a3c:
    if (ctx->pc == 0x108A3Cu) {
        ctx->pc = 0x108A3Cu;
            // 0x108a3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x108A40u;
        goto label_108a40;
    }
    ctx->pc = 0x108A38u;
    SET_GPR_U32(ctx, 31, 0x108A40u);
    ctx->pc = 0x108A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108A38u;
            // 0x108a3c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D28u;
    if (runtime->hasFunction(0x108D28u)) {
        auto targetFn = runtime->lookupFunction(0x108D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A40u; }
        if (ctx->pc != 0x108A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D28_0x108d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A40u; }
        if (ctx->pc != 0x108A40u) { return; }
    }
    ctx->pc = 0x108A40u;
label_108a40:
    // 0x108a40: 0x10000004  b           . + 4 + (0x4 << 2)
label_108a44:
    if (ctx->pc == 0x108A44u) {
        ctx->pc = 0x108A44u;
            // 0x108a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x108A48u;
        goto label_108a48;
    }
    ctx->pc = 0x108A40u;
    {
        const bool branch_taken_0x108a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A40u;
            // 0x108a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a40) {
            ctx->pc = 0x108A54u;
            goto label_108a54;
        }
    }
    ctx->pc = 0x108A48u;
label_108a48:
    // 0x108a48: 0xc0422f0  jal         func_108BC0
label_108a4c:
    if (ctx->pc == 0x108A4Cu) {
        ctx->pc = 0x108A50u;
        goto label_108a50;
    }
    ctx->pc = 0x108A48u;
    SET_GPR_U32(ctx, 31, 0x108A50u);
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A50u; }
        if (ctx->pc != 0x108A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC0_0x108bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A50u; }
        if (ctx->pc != 0x108A50u) { return; }
    }
    ctx->pc = 0x108A50u;
label_108a50:
    // 0x108a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108a54:
    // 0x108a54: 0xc041a4c  jal         func_106930
label_108a58:
    if (ctx->pc == 0x108A58u) {
        ctx->pc = 0x108A58u;
            // 0x108a58: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x108A5Cu;
        goto label_108a5c;
    }
    ctx->pc = 0x108A54u;
    SET_GPR_U32(ctx, 31, 0x108A5Cu);
    ctx->pc = 0x108A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108A54u;
            // 0x108a58: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A5Cu; }
        if (ctx->pc != 0x108A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106930_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A5Cu; }
        if (ctx->pc != 0x108A5Cu) { return; }
    }
    ctx->pc = 0x108A5Cu;
label_108a5c:
    // 0x108a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108a60:
    // 0x108a60: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
label_108a64:
    if (ctx->pc == 0x108A64u) {
        ctx->pc = 0x108A64u;
            // 0x108a64: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x108A68u;
        goto label_108a68;
    }
    ctx->pc = 0x108A60u;
    {
        const bool branch_taken_0x108a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x108A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A60u;
            // 0x108a64: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a60) {
            ctx->pc = 0x108A74u;
            goto label_108a74;
        }
    }
    ctx->pc = 0x108A68u;
label_108a68:
    // 0x108a68: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x108a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_108a6c:
    // 0x108a6c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_108a70:
    if (ctx->pc == 0x108A70u) {
        ctx->pc = 0x108A74u;
        goto label_108a74;
    }
    ctx->pc = 0x108A6Cu;
    {
        const bool branch_taken_0x108a6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108a6c) {
            ctx->pc = 0x108A48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108a48;
        }
    }
    ctx->pc = 0x108A74u;
label_108a74:
    // 0x108a74: 0x241201b5  addiu       $s2, $zero, 0x1B5
    ctx->pc = 0x108a74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_108a78:
    // 0x108a78: 0x241401b2  addiu       $s4, $zero, 0x1B2
    ctx->pc = 0x108a78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
label_108a7c:
    // 0x108a7c: 0x10000033  b           . + 4 + (0x33 << 2)
label_108a80:
    if (ctx->pc == 0x108A80u) {
        ctx->pc = 0x108A80u;
            // 0x108a80: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x108A84u;
        goto label_108a84;
    }
    ctx->pc = 0x108A7Cu;
    {
        const bool branch_taken_0x108a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A7Cu;
            // 0x108a80: 0x2413000a  addiu       $s3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a7c) {
            ctx->pc = 0x108B4Cu;
            goto label_108b4c;
        }
    }
    ctx->pc = 0x108A84u;
label_108a84:
    // 0x108a84: 0x0  nop
    ctx->pc = 0x108a84u;
    // NOP
label_108a88:
    // 0x108a88: 0x1452001e  bne         $v0, $s2, . + 4 + (0x1E << 2)
label_108a8c:
    if (ctx->pc == 0x108A8Cu) {
        ctx->pc = 0x108A8Cu;
            // 0x108a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x108A90u;
        goto label_108a90;
    }
    ctx->pc = 0x108A88u;
    {
        const bool branch_taken_0x108a88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x108A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108A88u;
            // 0x108a8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108a88) {
            ctx->pc = 0x108B04u;
            goto label_108b04;
        }
    }
    ctx->pc = 0x108A90u;
label_108a90:
    // 0x108a90: 0xc042348  jal         func_108D20
label_108a94:
    if (ctx->pc == 0x108A94u) {
        ctx->pc = 0x108A94u;
            // 0x108a94: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x108A98u;
        goto label_108a98;
    }
    ctx->pc = 0x108A90u;
    SET_GPR_U32(ctx, 31, 0x108A98u);
    ctx->pc = 0x108A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108A90u;
            // 0x108a94: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D20u;
    if (runtime->hasFunction(0x108D20u)) {
        auto targetFn = runtime->lookupFunction(0x108D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A98u; }
        if (ctx->pc != 0x108A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D20_0x108d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108A98u; }
        if (ctx->pc != 0x108A98u) { return; }
    }
    ctx->pc = 0x108A98u;
label_108a98:
    // 0x108a98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108a9c:
    // 0x108a9c: 0xc041a12  jal         func_106848
label_108aa0:
    if (ctx->pc == 0x108AA0u) {
        ctx->pc = 0x108AA0u;
            // 0x108aa0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x108AA4u;
        goto label_108aa4;
    }
    ctx->pc = 0x108A9Cu;
    SET_GPR_U32(ctx, 31, 0x108AA4u);
    ctx->pc = 0x108AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108A9Cu;
            // 0x108aa0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106848u;
    if (runtime->hasFunction(0x106848u)) {
        auto targetFn = runtime->lookupFunction(0x106848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AA4u; }
        if (ctx->pc != 0x108AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106848_0x106848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AA4u; }
        if (ctx->pc != 0x108AA4u) { return; }
    }
    ctx->pc = 0x108AA4u;
label_108aa4:
    // 0x108aa4: 0x262182b  sltu        $v1, $s3, $v0
    ctx->pc = 0x108aa4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_108aa8:
    // 0x108aa8: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x108aa8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_108aac:
    // 0x108aac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x108aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_108ab0:
    // 0x108ab0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x108ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_108ab4:
    // 0x108ab4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_108ab8:
    // 0x108ab8: 0x40f809  jalr        $v0
label_108abc:
    if (ctx->pc == 0x108ABCu) {
        ctx->pc = 0x108ABCu;
            // 0x108abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x108AC0u;
        goto label_108ac0;
    }
    ctx->pc = 0x108AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108AC0u);
        ctx->pc = 0x108ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108AB8u;
            // 0x108abc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x108AC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x108AC0u; }
            if (ctx->pc != 0x108AC0u) { return; }
        }
        }
    }
    ctx->pc = 0x108AC0u;
label_108ac0:
    // 0x108ac0: 0xc04234a  jal         func_108D28
label_108ac4:
    if (ctx->pc == 0x108AC4u) {
        ctx->pc = 0x108AC4u;
            // 0x108ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x108AC8u;
        goto label_108ac8;
    }
    ctx->pc = 0x108AC0u;
    SET_GPR_U32(ctx, 31, 0x108AC8u);
    ctx->pc = 0x108AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108AC0u;
            // 0x108ac4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D28u;
    if (runtime->hasFunction(0x108D28u)) {
        auto targetFn = runtime->lookupFunction(0x108D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AC8u; }
        if (ctx->pc != 0x108AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D28_0x108d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AC8u; }
        if (ctx->pc != 0x108AC8u) { return; }
    }
    ctx->pc = 0x108AC8u;
label_108ac8:
    // 0x108ac8: 0x10000004  b           . + 4 + (0x4 << 2)
label_108acc:
    if (ctx->pc == 0x108ACCu) {
        ctx->pc = 0x108ACCu;
            // 0x108acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x108AD0u;
        goto label_108ad0;
    }
    ctx->pc = 0x108AC8u;
    {
        const bool branch_taken_0x108ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108AC8u;
            // 0x108acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ac8) {
            ctx->pc = 0x108ADCu;
            goto label_108adc;
        }
    }
    ctx->pc = 0x108AD0u;
label_108ad0:
    // 0x108ad0: 0xc0422f0  jal         func_108BC0
label_108ad4:
    if (ctx->pc == 0x108AD4u) {
        ctx->pc = 0x108AD8u;
        goto label_108ad8;
    }
    ctx->pc = 0x108AD0u;
    SET_GPR_U32(ctx, 31, 0x108AD8u);
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AD8u; }
        if (ctx->pc != 0x108AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC0_0x108bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AD8u; }
        if (ctx->pc != 0x108AD8u) { return; }
    }
    ctx->pc = 0x108AD8u;
label_108ad8:
    // 0x108ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108adc:
    // 0x108adc: 0xc041a4c  jal         func_106930
label_108ae0:
    if (ctx->pc == 0x108AE0u) {
        ctx->pc = 0x108AE0u;
            // 0x108ae0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x108AE4u;
        goto label_108ae4;
    }
    ctx->pc = 0x108ADCu;
    SET_GPR_U32(ctx, 31, 0x108AE4u);
    ctx->pc = 0x108AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108ADCu;
            // 0x108ae0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AE4u; }
        if (ctx->pc != 0x108AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106930_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108AE4u; }
        if (ctx->pc != 0x108AE4u) { return; }
    }
    ctx->pc = 0x108AE4u;
label_108ae4:
    // 0x108ae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108ae8:
    // 0x108ae8: 0x10510019  beq         $v0, $s1, . + 4 + (0x19 << 2)
label_108aec:
    if (ctx->pc == 0x108AECu) {
        ctx->pc = 0x108AECu;
            // 0x108aec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x108AF0u;
        goto label_108af0;
    }
    ctx->pc = 0x108AE8u;
    {
        const bool branch_taken_0x108ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x108AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108AE8u;
            // 0x108aec: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108ae8) {
            ctx->pc = 0x108B50u;
            goto label_108b50;
        }
    }
    ctx->pc = 0x108AF0u;
label_108af0:
    // 0x108af0: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x108af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_108af4:
    // 0x108af4: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_108af8:
    if (ctx->pc == 0x108AF8u) {
        ctx->pc = 0x108AFCu;
        goto label_108afc;
    }
    ctx->pc = 0x108AF4u;
    {
        const bool branch_taken_0x108af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108af4) {
            ctx->pc = 0x108AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108ad0;
        }
    }
    ctx->pc = 0x108AFCu;
label_108afc:
    // 0x108afc: 0x10000013  b           . + 4 + (0x13 << 2)
label_108b00:
    if (ctx->pc == 0x108B00u) {
        ctx->pc = 0x108B04u;
        goto label_108b04;
    }
    ctx->pc = 0x108AFCu;
    {
        const bool branch_taken_0x108afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x108afc) {
            ctx->pc = 0x108B4Cu;
            goto label_108b4c;
        }
    }
    ctx->pc = 0x108B04u;
label_108b04:
    // 0x108b04: 0xc042348  jal         func_108D20
label_108b08:
    if (ctx->pc == 0x108B08u) {
        ctx->pc = 0x108B08u;
            // 0x108b08: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x108B0Cu;
        goto label_108b0c;
    }
    ctx->pc = 0x108B04u;
    SET_GPR_U32(ctx, 31, 0x108B0Cu);
    ctx->pc = 0x108B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B04u;
            // 0x108b08: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D20u;
    if (runtime->hasFunction(0x108D20u)) {
        auto targetFn = runtime->lookupFunction(0x108D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B0Cu; }
        if (ctx->pc != 0x108B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D20_0x108d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B0Cu; }
        if (ctx->pc != 0x108B0Cu) { return; }
    }
    ctx->pc = 0x108B0Cu;
label_108b0c:
    // 0x108b0c: 0xc04234a  jal         func_108D28
label_108b10:
    if (ctx->pc == 0x108B10u) {
        ctx->pc = 0x108B10u;
            // 0x108b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x108B14u;
        goto label_108b14;
    }
    ctx->pc = 0x108B0Cu;
    SET_GPR_U32(ctx, 31, 0x108B14u);
    ctx->pc = 0x108B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B0Cu;
            // 0x108b10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x108D28u;
    if (runtime->hasFunction(0x108D28u)) {
        auto targetFn = runtime->lookupFunction(0x108D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B14u; }
        if (ctx->pc != 0x108B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108D28_0x108d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B14u; }
        if (ctx->pc != 0x108B14u) { return; }
    }
    ctx->pc = 0x108B14u;
label_108b14:
    // 0x108b14: 0x10000005  b           . + 4 + (0x5 << 2)
label_108b18:
    if (ctx->pc == 0x108B18u) {
        ctx->pc = 0x108B18u;
            // 0x108b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x108B1Cu;
        goto label_108b1c;
    }
    ctx->pc = 0x108B14u;
    {
        const bool branch_taken_0x108b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B14u;
            // 0x108b18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b14) {
            ctx->pc = 0x108B2Cu;
            goto label_108b2c;
        }
    }
    ctx->pc = 0x108B1Cu;
label_108b1c:
    // 0x108b1c: 0x0  nop
    ctx->pc = 0x108b1cu;
    // NOP
label_108b20:
    // 0x108b20: 0xc0422f0  jal         func_108BC0
label_108b24:
    if (ctx->pc == 0x108B24u) {
        ctx->pc = 0x108B28u;
        goto label_108b28;
    }
    ctx->pc = 0x108B20u;
    SET_GPR_U32(ctx, 31, 0x108B28u);
    ctx->pc = 0x108BC0u;
    if (runtime->hasFunction(0x108BC0u)) {
        auto targetFn = runtime->lookupFunction(0x108BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B28u; }
        if (ctx->pc != 0x108B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00108BC0_0x108bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B28u; }
        if (ctx->pc != 0x108B28u) { return; }
    }
    ctx->pc = 0x108B28u;
label_108b28:
    // 0x108b28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108b2c:
    // 0x108b2c: 0xc041a4c  jal         func_106930
label_108b30:
    if (ctx->pc == 0x108B30u) {
        ctx->pc = 0x108B30u;
            // 0x108b30: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x108B34u;
        goto label_108b34;
    }
    ctx->pc = 0x108B2Cu;
    SET_GPR_U32(ctx, 31, 0x108B34u);
    ctx->pc = 0x108B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B2Cu;
            // 0x108b30: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B34u; }
        if (ctx->pc != 0x108B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106930_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B34u; }
        if (ctx->pc != 0x108B34u) { return; }
    }
    ctx->pc = 0x108B34u;
label_108b34:
    // 0x108b34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108b38:
    // 0x108b38: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_108b3c:
    if (ctx->pc == 0x108B3Cu) {
        ctx->pc = 0x108B3Cu;
            // 0x108b3c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x108B40u;
        goto label_108b40;
    }
    ctx->pc = 0x108B38u;
    {
        const bool branch_taken_0x108b38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x108B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B38u;
            // 0x108b3c: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b38) {
            ctx->pc = 0x108B50u;
            goto label_108b50;
        }
    }
    ctx->pc = 0x108B40u;
label_108b40:
    // 0x108b40: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x108b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_108b44:
    // 0x108b44: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
label_108b48:
    if (ctx->pc == 0x108B48u) {
        ctx->pc = 0x108B4Cu;
        goto label_108b4c;
    }
    ctx->pc = 0x108B44u;
    {
        const bool branch_taken_0x108b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108b44) {
            ctx->pc = 0x108B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108b20;
        }
    }
    ctx->pc = 0x108B4Cu;
label_108b4c:
    // 0x108b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_108b50:
    // 0x108b50: 0xc041a4c  jal         func_106930
label_108b54:
    if (ctx->pc == 0x108B54u) {
        ctx->pc = 0x108B54u;
            // 0x108b54: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x108B58u;
        goto label_108b58;
    }
    ctx->pc = 0x108B50u;
    SET_GPR_U32(ctx, 31, 0x108B58u);
    ctx->pc = 0x108B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x108B50u;
            // 0x108b54: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106930u;
    if (runtime->hasFunction(0x106930u)) {
        auto targetFn = runtime->lookupFunction(0x106930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B58u; }
        if (ctx->pc != 0x108B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106930_0x106930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x108B58u; }
        if (ctx->pc != 0x108B58u) { return; }
    }
    ctx->pc = 0x108B58u;
label_108b58:
    // 0x108b58: 0x1052ffcd  beq         $v0, $s2, . + 4 + (-0x33 << 2)
label_108b5c:
    if (ctx->pc == 0x108B5Cu) {
        ctx->pc = 0x108B5Cu;
            // 0x108b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x108B60u;
        goto label_108b60;
    }
    ctx->pc = 0x108B58u;
    {
        const bool branch_taken_0x108b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x108B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B58u;
            // 0x108b5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b58) {
            ctx->pc = 0x108A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108a90;
        }
    }
    ctx->pc = 0x108B60u;
label_108b60:
    // 0x108b60: 0x1054ffc9  beq         $v0, $s4, . + 4 + (-0x37 << 2)
label_108b64:
    if (ctx->pc == 0x108B64u) {
        ctx->pc = 0x108B64u;
            // 0x108b64: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x108B68u;
        goto label_108b68;
    }
    ctx->pc = 0x108B60u;
    {
        const bool branch_taken_0x108b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x108B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B60u;
            // 0x108b64: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108b60) {
            ctx->pc = 0x108A88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_108a88;
        }
    }
    ctx->pc = 0x108B68u;
label_108b68:
    // 0x108b68: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x108b68u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_108b6c:
    // 0x108b6c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x108b6cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_108b70:
    // 0x108b70: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x108b70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_108b74:
    // 0x108b74: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x108b74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_108b78:
    // 0x108b78: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x108b78u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_108b7c:
    // 0x108b7c: 0x3e00008  jr          $ra
label_108b80:
    if (ctx->pc == 0x108B80u) {
        ctx->pc = 0x108B80u;
            // 0x108b80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x108B84u;
        goto label_108b84;
    }
    ctx->pc = 0x108B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x108B7Cu;
            // 0x108b80: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x108B84u;
label_108b84:
    // 0x108b84: 0x0  nop
    ctx->pc = 0x108b84u;
    // NOP
}
