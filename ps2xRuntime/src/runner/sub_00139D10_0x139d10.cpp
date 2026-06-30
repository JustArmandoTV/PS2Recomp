#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00139D10
// Address: 0x139d10 - 0x139f50
void sub_00139D10_0x139d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00139D10_0x139d10");
#endif

    switch (ctx->pc) {
        case 0x139d78u: goto label_139d78;
        case 0x139e14u: goto label_139e14;
        case 0x139e30u: goto label_139e30;
        case 0x139e4cu: goto label_139e4c;
        case 0x139e58u: goto label_139e58;
        default: break;
    }

    ctx->pc = 0x139d10u;

    // 0x139d10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x139d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x139d14: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x139d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x139d18: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x139d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x139d1c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x139d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x139d20: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x139d20u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x139d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x139d28: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x139d28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x139d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x139d30: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x139d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x139d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x139d38: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x139d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x139d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x139d40: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x139d40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d44: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x139d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x139d48: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x139d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139d4c: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x139d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x139d50: 0x30620600  andi        $v0, $v1, 0x600
    ctx->pc = 0x139d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1536);
    // 0x139d54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139D54u;
    {
        const bool branch_taken_0x139d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D54u;
            // 0x139d58: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d54) {
            ctx->pc = 0x139D64u;
            goto label_139d64;
        }
    }
    ctx->pc = 0x139D5Cu;
    // 0x139d5c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x139D5Cu;
    {
        const bool branch_taken_0x139d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D5Cu;
            // 0x139d60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d5c) {
            ctx->pc = 0x139F1Cu;
            goto label_139f1c;
        }
    }
    ctx->pc = 0x139D64u;
label_139d64:
    // 0x139d64: 0x31424000  andi        $v0, $t2, 0x4000
    ctx->pc = 0x139d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)16384);
    // 0x139d68: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x139d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x139d6c: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x139d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x139d70: 0xc056420  jal         func_159080
    ctx->pc = 0x139D70u;
    SET_GPR_U32(ctx, 31, 0x139D78u);
    ctx->pc = 0x139D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139D70u;
            // 0x139d74: 0xaea2004c  sw          $v0, 0x4C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159080u;
    if (runtime->hasFunction(0x159080u)) {
        auto targetFn = runtime->lookupFunction(0x159080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D78u; }
        if (ctx->pc != 0x139D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159080_0x159080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139D78u; }
        if (ctx->pc != 0x139D78u) { return; }
    }
    ctx->pc = 0x139D78u;
label_139d78:
    // 0x139d78: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x139D78u;
    {
        const bool branch_taken_0x139d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139d78) {
            ctx->pc = 0x139D7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139D78u;
            // 0x139d7c: 0xaea20030  sw          $v0, 0x30($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139D8Cu;
            goto label_139d8c;
        }
    }
    ctx->pc = 0x139D80u;
    // 0x139d80: 0xaeb40030  sw          $s4, 0x30($s5)
    ctx->pc = 0x139d80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 20));
    // 0x139d84: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x139D84u;
    {
        const bool branch_taken_0x139d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D84u;
            // 0x139d88: 0x26b00008  addiu       $s0, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d84) {
            ctx->pc = 0x139DDCu;
            goto label_139ddc;
        }
    }
    ctx->pc = 0x139D8Cu;
label_139d8c:
    // 0x139d8c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x139d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x139d90: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x139d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139d94: 0xe6a10000  swc1        $f1, 0x0($s5)
    ctx->pc = 0x139d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x139d98: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x139d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x139d9c: 0x87a50088  lh          $a1, 0x88($sp)
    ctx->pc = 0x139d9cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x139da0: 0x87a4008a  lh          $a0, 0x8A($sp)
    ctx->pc = 0x139da0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 138)));
    // 0x139da4: 0x87a3008c  lh          $v1, 0x8C($sp)
    ctx->pc = 0x139da4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x139da8: 0x87a2008e  lh          $v0, 0x8E($sp)
    ctx->pc = 0x139da8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 142)));
    // 0x139dac: 0xa6a50008  sh          $a1, 0x8($s5)
    ctx->pc = 0x139dacu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x139db0: 0xa6a4000a  sh          $a0, 0xA($s5)
    ctx->pc = 0x139db0u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x139db4: 0xa6a3000c  sh          $v1, 0xC($s5)
    ctx->pc = 0x139db4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x139db8: 0xa6a2000e  sh          $v0, 0xE($s5)
    ctx->pc = 0x139db8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x139dbc: 0xdfa50090  ld          $a1, 0x90($sp)
    ctx->pc = 0x139dbcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x139dc0: 0xdfa40098  ld          $a0, 0x98($sp)
    ctx->pc = 0x139dc0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x139dc4: 0xdfa300a0  ld          $v1, 0xA0($sp)
    ctx->pc = 0x139dc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139dc8: 0xdfa200a8  ld          $v0, 0xA8($sp)
    ctx->pc = 0x139dc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x139dcc: 0xfea50010  sd          $a1, 0x10($s5)
    ctx->pc = 0x139dccu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 5));
    // 0x139dd0: 0xfea40018  sd          $a0, 0x18($s5)
    ctx->pc = 0x139dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 24), GPR_U64(ctx, 4));
    // 0x139dd4: 0xfea30020  sd          $v1, 0x20($s5)
    ctx->pc = 0x139dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 32), GPR_U64(ctx, 3));
    // 0x139dd8: 0xfea20028  sd          $v0, 0x28($s5)
    ctx->pc = 0x139dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 40), GPR_U64(ctx, 2));
label_139ddc:
    // 0x139ddc: 0xaeb10040  sw          $s1, 0x40($s5)
    ctx->pc = 0x139ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 17));
    // 0x139de0: 0xaeb60044  sw          $s6, 0x44($s5)
    ctx->pc = 0x139de0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 22));
    // 0x139de4: 0xa6b30048  sh          $s3, 0x48($s5)
    ctx->pc = 0x139de4u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 72), (uint16_t)GPR_U32(ctx, 19));
    // 0x139de8: 0xa6b2004a  sh          $s2, 0x4A($s5)
    ctx->pc = 0x139de8u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 74), (uint16_t)GPR_U32(ctx, 18));
    // 0x139dec: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x139decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x139df0: 0x96a7004a  lhu         $a3, 0x4A($s5)
    ctx->pc = 0x139df0u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 74)));
    // 0x139df4: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x139df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x139df8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x139DF8u;
    {
        const bool branch_taken_0x139df8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139DF8u;
            // 0x139dfc: 0x96a80048  lhu         $t0, 0x48($s5) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139df8) {
            ctx->pc = 0x139E1Cu;
            goto label_139e1c;
        }
    }
    ctx->pc = 0x139E00u;
    // 0x139e00: 0x8ea50030  lw          $a1, 0x30($s5)
    ctx->pc = 0x139e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x139e04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x139e04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e08: 0x8ea90044  lw          $t1, 0x44($s5)
    ctx->pc = 0x139e08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x139e0c: 0xc056870  jal         func_15A1C0
    ctx->pc = 0x139E0Cu;
    SET_GPR_U32(ctx, 31, 0x139E14u);
    ctx->pc = 0x139E10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139E0Cu;
            // 0x139e10: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A1C0u;
    if (runtime->hasFunction(0x15A1C0u)) {
        auto targetFn = runtime->lookupFunction(0x15A1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E14u; }
        if (ctx->pc != 0x139E14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A1C0_0x15a1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E14u; }
        if (ctx->pc != 0x139E14u) { return; }
    }
    ctx->pc = 0x139E14u;
label_139e14:
    // 0x139e14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x139E14u;
    {
        const bool branch_taken_0x139e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E14u;
            // 0x139e18: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e14) {
            ctx->pc = 0x139E34u;
            goto label_139e34;
        }
    }
    ctx->pc = 0x139E1Cu;
label_139e1c:
    // 0x139e1c: 0x8ea50030  lw          $a1, 0x30($s5)
    ctx->pc = 0x139e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x139e20: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x139e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e24: 0x8ea90044  lw          $t1, 0x44($s5)
    ctx->pc = 0x139e24u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x139e28: 0xc05680c  jal         func_15A030
    ctx->pc = 0x139E28u;
    SET_GPR_U32(ctx, 31, 0x139E30u);
    ctx->pc = 0x139E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139E28u;
            // 0x139e2c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A030u;
    if (runtime->hasFunction(0x15A030u)) {
        auto targetFn = runtime->lookupFunction(0x15A030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E30u; }
        if (ctx->pc != 0x139E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A030_0x15a030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E30u; }
        if (ctx->pc != 0x139E30u) { return; }
    }
    ctx->pc = 0x139E30u;
label_139e30:
    // 0x139e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x139e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_139e34:
    // 0x139e34: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139E34u;
    {
        const bool branch_taken_0x139e34 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x139e34) {
            ctx->pc = 0x139E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139E34u;
            // 0x139e38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139E44u;
            goto label_139e44;
        }
    }
    ctx->pc = 0x139E3Cu;
    // 0x139e3c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x139E3Cu;
    {
        const bool branch_taken_0x139e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E3Cu;
            // 0x139e40: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e3c) {
            ctx->pc = 0x139F20u;
            goto label_139f20;
        }
    }
    ctx->pc = 0x139E44u;
label_139e44:
    // 0x139e44: 0xc05646c  jal         func_1591B0
    ctx->pc = 0x139E44u;
    SET_GPR_U32(ctx, 31, 0x139E4Cu);
    ctx->pc = 0x1591B0u;
    if (runtime->hasFunction(0x1591B0u)) {
        auto targetFn = runtime->lookupFunction(0x1591B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E4Cu; }
        if (ctx->pc != 0x139E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001591B0_0x1591b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E4Cu; }
        if (ctx->pc != 0x139E4Cu) { return; }
    }
    ctx->pc = 0x139E4Cu;
label_139e4c:
    // 0x139e4c: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x139e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
    // 0x139e50: 0xc04e814  jal         func_13A050
    ctx->pc = 0x139E50u;
    SET_GPR_U32(ctx, 31, 0x139E58u);
    ctx->pc = 0x139E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139E50u;
            // 0x139e54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A050u;
    if (runtime->hasFunction(0x13A050u)) {
        auto targetFn = runtime->lookupFunction(0x13A050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E58u; }
        if (ctx->pc != 0x139E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013A050_0x13a050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139E58u; }
        if (ctx->pc != 0x139E58u) { return; }
    }
    ctx->pc = 0x139E58u;
label_139e58:
    // 0x139e58: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x139e58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
    // 0x139e5c: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x139e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x139e60: 0x24026d00  addiu       $v0, $zero, 0x6D00
    ctx->pc = 0x139e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27904));
    // 0x139e64: 0x34630201  ori         $v1, $v1, 0x201
    ctx->pc = 0x139e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)513);
    // 0x139e68: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x139e68u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
    // 0x139e6c: 0x96a30008  lhu         $v1, 0x8($s5)
    ctx->pc = 0x139e6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x139e70: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x139e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x139e74: 0x50620019  beql        $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x139E74u;
    {
        const bool branch_taken_0x139e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139e74) {
            ctx->pc = 0x139E78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139E74u;
            // 0x139e78: 0xdea20018  ld          $v0, 0x18($s5) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139EDCu;
            goto label_139edc;
        }
    }
    ctx->pc = 0x139E7Cu;
    // 0x139e7c: 0x24026b00  addiu       $v0, $zero, 0x6B00
    ctx->pc = 0x139e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27392));
    // 0x139e80: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x139E80u;
    {
        const bool branch_taken_0x139e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139e80) {
            ctx->pc = 0x139ED8u;
            goto label_139ed8;
        }
    }
    ctx->pc = 0x139E88u;
    // 0x139e88: 0x24026c00  addiu       $v0, $zero, 0x6C00
    ctx->pc = 0x139e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27648));
    // 0x139e8c: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x139E8Cu;
    {
        const bool branch_taken_0x139e8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139e8c) {
            ctx->pc = 0x139ED8u;
            goto label_139ed8;
        }
    }
    ctx->pc = 0x139E94u;
    // 0x139e94: 0x24026a00  addiu       $v0, $zero, 0x6A00
    ctx->pc = 0x139e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27136));
    // 0x139e98: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x139E98u;
    {
        const bool branch_taken_0x139e98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139e98) {
            ctx->pc = 0x139ED8u;
            goto label_139ed8;
        }
    }
    ctx->pc = 0x139EA0u;
    // 0x139ea0: 0x24026900  addiu       $v0, $zero, 0x6900
    ctx->pc = 0x139ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26880));
    // 0x139ea4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x139EA4u;
    {
        const bool branch_taken_0x139ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139ea4) {
            ctx->pc = 0x139ED8u;
            goto label_139ed8;
        }
    }
    ctx->pc = 0x139EACu;
    // 0x139eac: 0x24026700  addiu       $v0, $zero, 0x6700
    ctx->pc = 0x139eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26368));
    // 0x139eb0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139EB0u;
    {
        const bool branch_taken_0x139eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139eb0) {
            ctx->pc = 0x139ED8u;
            goto label_139ed8;
        }
    }
    ctx->pc = 0x139EB8u;
    // 0x139eb8: 0x24026800  addiu       $v0, $zero, 0x6800
    ctx->pc = 0x139eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26624));
    // 0x139ebc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x139EBCu;
    {
        const bool branch_taken_0x139ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139ebc) {
            ctx->pc = 0x139ED8u;
            goto label_139ed8;
        }
    }
    ctx->pc = 0x139EC4u;
    // 0x139ec4: 0x24026600  addiu       $v0, $zero, 0x6600
    ctx->pc = 0x139ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26112));
    // 0x139ec8: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139EC8u;
    {
        const bool branch_taken_0x139ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x139ec8) {
            ctx->pc = 0x139ED8u;
            goto label_139ed8;
        }
    }
    ctx->pc = 0x139ED0u;
    // 0x139ed0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x139ED0u;
    {
        const bool branch_taken_0x139ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139ED0u;
            // 0x139ed4: 0x96a20018  lhu         $v0, 0x18($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ed0) {
            ctx->pc = 0x139EF8u;
            goto label_139ef8;
        }
    }
    ctx->pc = 0x139ED8u;
label_139ed8:
    // 0x139ed8: 0xdea20018  ld          $v0, 0x18($s5)
    ctx->pc = 0x139ed8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 24)));
label_139edc:
    // 0x139edc: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x139edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x139ee0: 0x214be  dsrl32      $v0, $v0, 18
    ctx->pc = 0x139ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 18));
    // 0x139ee4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x139ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x139ee8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x139ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x139eec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x139eecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x139ef0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x139EF0u;
    {
        const bool branch_taken_0x139ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139EF0u;
            // 0x139ef4: 0xaea20034  sw          $v0, 0x34($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ef0) {
            ctx->pc = 0x139F04u;
            goto label_139f04;
        }
    }
    ctx->pc = 0x139EF8u;
label_139ef8:
    // 0x139ef8: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x139ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
    // 0x139efc: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x139efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x139f00: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x139f00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
label_139f04:
    // 0x139f04: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x139f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
    // 0x139f08: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x139f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x139f0c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x139F0Cu;
    {
        const bool branch_taken_0x139f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x139f0c) {
            ctx->pc = 0x139F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139F0Cu;
            // 0x139f10: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139F1Cu;
            goto label_139f1c;
        }
    }
    ctx->pc = 0x139F14u;
    // 0x139f14: 0x2410fffe  addiu       $s0, $zero, -0x2
    ctx->pc = 0x139f14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x139f18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x139f18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_139f1c:
    // 0x139f1c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x139f1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_139f20:
    // 0x139f20: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x139f20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x139f24: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x139f24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x139f28: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x139f28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139f2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x139f2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139f30: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139f34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139f34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139f38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x139f38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x139F3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F3Cu;
            // 0x139f40: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x139F44u;
    // 0x139f44: 0x0  nop
    ctx->pc = 0x139f44u;
    // NOP
    // 0x139f48: 0x0  nop
    ctx->pc = 0x139f48u;
    // NOP
    // 0x139f4c: 0x0  nop
    ctx->pc = 0x139f4cu;
    // NOP
}
