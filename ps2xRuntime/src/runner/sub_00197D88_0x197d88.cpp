#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00197D88
// Address: 0x197d88 - 0x1984e0
void sub_00197D88_0x197d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00197D88_0x197d88");
#endif

    switch (ctx->pc) {
        case 0x197e20u: goto label_197e20;
        case 0x197e38u: goto label_197e38;
        case 0x197e4cu: goto label_197e4c;
        case 0x197e54u: goto label_197e54;
        case 0x197e78u: goto label_197e78;
        case 0x197e8cu: goto label_197e8c;
        case 0x197ea4u: goto label_197ea4;
        case 0x197ebcu: goto label_197ebc;
        case 0x197ec8u: goto label_197ec8;
        case 0x197ee8u: goto label_197ee8;
        case 0x197f00u: goto label_197f00;
        case 0x197f18u: goto label_197f18;
        case 0x197f28u: goto label_197f28;
        case 0x197f38u: goto label_197f38;
        case 0x197f48u: goto label_197f48;
        case 0x197f58u: goto label_197f58;
        case 0x197fc0u: goto label_197fc0;
        case 0x197fecu: goto label_197fec;
        case 0x197ff4u: goto label_197ff4;
        case 0x19802cu: goto label_19802c;
        case 0x1980c8u: goto label_1980c8;
        case 0x19812cu: goto label_19812c;
        case 0x198198u: goto label_198198;
        case 0x1981fcu: goto label_1981fc;
        case 0x198278u: goto label_198278;
        case 0x1982dcu: goto label_1982dc;
        case 0x198374u: goto label_198374;
        case 0x1983e0u: goto label_1983e0;
        case 0x1983f4u: goto label_1983f4;
        case 0x1983fcu: goto label_1983fc;
        case 0x198408u: goto label_198408;
        case 0x19841cu: goto label_19841c;
        case 0x198438u: goto label_198438;
        case 0x198448u: goto label_198448;
        case 0x198460u: goto label_198460;
        case 0x198478u: goto label_198478;
        case 0x1984a4u: goto label_1984a4;
        default: break;
    }

    ctx->pc = 0x197d88u;

    // 0x197d88: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x197d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x197d8c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x197d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x197d90: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x197d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x197d94: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x197d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x197d98: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x197d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x197d9c: 0x24703b80  addiu       $s0, $v1, 0x3B80
    ctx->pc = 0x197d9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
    // 0x197da0: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x197da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x197da4: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x197da4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x197da8: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x197da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x197dac: 0x24533b7c  addiu       $s3, $v0, 0x3B7C
    ctx->pc = 0x197dacu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 15228));
    // 0x197db0: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x197db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x197db4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x197db4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197db8: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x197db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x197dbc: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x197dbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197dc0: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x197dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x197dc4: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x197dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x197dc8: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x197dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x197dcc: 0x24b13b84  addiu       $s1, $a1, 0x3B84
    ctx->pc = 0x197dccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 15236));
    // 0x197dd0: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x197dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x197dd4: 0x24d23b88  addiu       $s2, $a2, 0x3B88
    ctx->pc = 0x197dd4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 15240));
    // 0x197dd8: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x197dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x197ddc: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x197ddcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197de0: 0x3c09006d  lui         $t1, 0x6D
    ctx->pc = 0x197de0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)109 << 16));
    // 0x197de4: 0x25293b98  addiu       $t1, $t1, 0x3B98
    ctx->pc = 0x197de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15256));
    // 0x197de8: 0x3c0a006d  lui         $t2, 0x6D
    ctx->pc = 0x197de8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)109 << 16));
    // 0x197dec: 0x254a3b94  addiu       $t2, $t2, 0x3B94
    ctx->pc = 0x197decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 15252));
    // 0x197df0: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x197df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x197df4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x197df4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197df8: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x197df8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x197dfc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x197dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e00: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x197e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x197e04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e08: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x197e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e0c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x197e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x197e10: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x197e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x197e14: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x197e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x197e18: 0xc065d4e  jal         func_197538
    ctx->pc = 0x197E18u;
    SET_GPR_U32(ctx, 31, 0x197E20u);
    ctx->pc = 0x197E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E18u;
            // 0x197e1c: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197538u;
    if (runtime->hasFunction(0x197538u)) {
        auto targetFn = runtime->lookupFunction(0x197538u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E20u; }
        if (ctx->pc != 0x197E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197538_0x197538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E20u; }
        if (ctx->pc != 0x197E20u) { return; }
    }
    ctx->pc = 0x197E20u;
label_197e20:
    // 0x197e20: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x197e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x197e24: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x197e24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x197e28: 0x24a53b8c  addiu       $a1, $a1, 0x3B8C
    ctx->pc = 0x197e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15244));
    // 0x197e2c: 0x24c63b90  addiu       $a2, $a2, 0x3B90
    ctx->pc = 0x197e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15248));
    // 0x197e30: 0xc065d9c  jal         func_197670
    ctx->pc = 0x197E30u;
    SET_GPR_U32(ctx, 31, 0x197E38u);
    ctx->pc = 0x197E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E30u;
            // 0x197e34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197670u;
    if (runtime->hasFunction(0x197670u)) {
        auto targetFn = runtime->lookupFunction(0x197670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E38u; }
        if (ctx->pc != 0x197E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197670_0x197670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E38u; }
        if (ctx->pc != 0x197E38u) { return; }
    }
    ctx->pc = 0x197E38u;
label_197e38:
    // 0x197e38: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x197e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e3c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x197e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x197e40: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x197e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x197e44: 0xc065df0  jal         func_1977C0
    ctx->pc = 0x197E44u;
    SET_GPR_U32(ctx, 31, 0x197E4Cu);
    ctx->pc = 0x197E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E44u;
            // 0x197e48: 0x27a700a8  addiu       $a3, $sp, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1977C0u;
    if (runtime->hasFunction(0x1977C0u)) {
        auto targetFn = runtime->lookupFunction(0x1977C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E4Cu; }
        if (ctx->pc != 0x197E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001977C0_0x1977c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E4Cu; }
        if (ctx->pc != 0x197E4Cu) { return; }
    }
    ctx->pc = 0x197E4Cu;
label_197e4c:
    // 0x197e4c: 0xc065dfc  jal         func_1977F0
    ctx->pc = 0x197E4Cu;
    SET_GPR_U32(ctx, 31, 0x197E54u);
    ctx->pc = 0x1977F0u;
    if (runtime->hasFunction(0x1977F0u)) {
        auto targetFn = runtime->lookupFunction(0x1977F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E54u; }
        if (ctx->pc != 0x197E54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001977F0_0x1977f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E54u; }
        if (ctx->pc != 0x197E54u) { return; }
    }
    ctx->pc = 0x197E54u;
label_197e54:
    // 0x197e54: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x197e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x197e58: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197e58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x197e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x197e60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x197e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x197e64: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x197e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x197e68: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x197e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x197e6c: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x197e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x197e70: 0xc066502  jal         func_199408
    ctx->pc = 0x197E70u;
    SET_GPR_U32(ctx, 31, 0x197E78u);
    ctx->pc = 0x197E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E70u;
            // 0x197e74: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E78u; }
        if (ctx->pc != 0x197E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E78u; }
        if (ctx->pc != 0x197E78u) { return; }
    }
    ctx->pc = 0x197E78u;
label_197e78:
    // 0x197e78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e7c: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x197e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x197e80: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x197e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x197e84: 0xc066502  jal         func_199408
    ctx->pc = 0x197E84u;
    SET_GPR_U32(ctx, 31, 0x197E8Cu);
    ctx->pc = 0x197E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E84u;
            // 0x197e88: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E8Cu; }
        if (ctx->pc != 0x197E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197E8Cu; }
        if (ctx->pc != 0x197E8Cu) { return; }
    }
    ctx->pc = 0x197E8Cu;
label_197e8c:
    // 0x197e8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e90: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x197e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x197e94: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x197e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e98: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x197e98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197e9c: 0xc065ec6  jal         func_197B18
    ctx->pc = 0x197E9Cu;
    SET_GPR_U32(ctx, 31, 0x197EA4u);
    ctx->pc = 0x197EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197E9Cu;
            // 0x197ea0: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197B18u;
    if (runtime->hasFunction(0x197B18u)) {
        auto targetFn = runtime->lookupFunction(0x197B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EA4u; }
        if (ctx->pc != 0x197EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197B18_0x197b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EA4u; }
        if (ctx->pc != 0x197EA4u) { return; }
    }
    ctx->pc = 0x197EA4u;
label_197ea4:
    // 0x197ea4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ea8: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x197ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x197eac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x197eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197eb0: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x197eb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197eb4: 0xc065f08  jal         func_197C20
    ctx->pc = 0x197EB4u;
    SET_GPR_U32(ctx, 31, 0x197EBCu);
    ctx->pc = 0x197EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197EB4u;
            // 0x197eb8: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197C20u;
    if (runtime->hasFunction(0x197C20u)) {
        auto targetFn = runtime->lookupFunction(0x197C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EBCu; }
        if (ctx->pc != 0x197EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197C20_0x197c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EBCu; }
        if (ctx->pc != 0x197EBCu) { return; }
    }
    ctx->pc = 0x197EBCu;
label_197ebc:
    // 0x197ebc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x197ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ec0: 0xc066138  jal         func_1984E0
    ctx->pc = 0x197EC0u;
    SET_GPR_U32(ctx, 31, 0x197EC8u);
    ctx->pc = 0x197EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197EC0u;
            // 0x197ec4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1984E0u;
    if (runtime->hasFunction(0x1984E0u)) {
        auto targetFn = runtime->lookupFunction(0x1984E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EC8u; }
        if (ctx->pc != 0x197EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001984E0_0x1984e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EC8u; }
        if (ctx->pc != 0x197EC8u) { return; }
    }
    ctx->pc = 0x197EC8u;
label_197ec8:
    // 0x197ec8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197ecc: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x197ECCu;
    {
        const bool branch_taken_0x197ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x197ecc) {
            ctx->pc = 0x197ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197ECCu;
            // 0x197ed0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197F08u;
            goto label_197f08;
        }
    }
    ctx->pc = 0x197ED4u;
    // 0x197ed4: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x197ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
    // 0x197ed8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197edc: 0x25083b98  addiu       $t0, $t0, 0x3B98
    ctx->pc = 0x197edcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 15256));
    // 0x197ee0: 0xc066502  jal         func_199408
    ctx->pc = 0x197EE0u;
    SET_GPR_U32(ctx, 31, 0x197EE8u);
    ctx->pc = 0x197EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197EE0u;
            // 0x197ee4: 0x8d050000  lw          $a1, 0x0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EE8u; }
        if (ctx->pc != 0x197EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197EE8u; }
        if (ctx->pc != 0x197EE8u) { return; }
    }
    ctx->pc = 0x197EE8u;
label_197ee8:
    // 0x197ee8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197eec: 0x3c09006d  lui         $t1, 0x6D
    ctx->pc = 0x197eecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)109 << 16));
    // 0x197ef0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x197ef0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197ef4: 0x25293b94  addiu       $t1, $t1, 0x3B94
    ctx->pc = 0x197ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 15252));
    // 0x197ef8: 0xc066502  jal         func_199408
    ctx->pc = 0x197EF8u;
    SET_GPR_U32(ctx, 31, 0x197F00u);
    ctx->pc = 0x197EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197EF8u;
            // 0x197efc: 0x8d250000  lw          $a1, 0x0($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F00u; }
        if (ctx->pc != 0x197F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F00u; }
        if (ctx->pc != 0x197F00u) { return; }
    }
    ctx->pc = 0x197F00u;
label_197f00:
    // 0x197f00: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x197F00u;
    {
        const bool branch_taken_0x197f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F00u;
            // 0x197f04: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f00) {
            ctx->pc = 0x197F0Cu;
            goto label_197f0c;
        }
    }
    ctx->pc = 0x197F08u;
label_197f08:
    // 0x197f08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x197f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_197f0c:
    // 0x197f0c: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x197f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x197f10: 0xc066502  jal         func_199408
    ctx->pc = 0x197F10u;
    SET_GPR_U32(ctx, 31, 0x197F18u);
    ctx->pc = 0x197F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F10u;
            // 0x197f14: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F18u; }
        if (ctx->pc != 0x197F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F18u; }
        if (ctx->pc != 0x197F18u) { return; }
    }
    ctx->pc = 0x197F18u;
label_197f18:
    // 0x197f18: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f1c: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x197f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x197f20: 0xc066502  jal         func_199408
    ctx->pc = 0x197F20u;
    SET_GPR_U32(ctx, 31, 0x197F28u);
    ctx->pc = 0x197F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F20u;
            // 0x197f24: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F28u; }
        if (ctx->pc != 0x197F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F28u; }
        if (ctx->pc != 0x197F28u) { return; }
    }
    ctx->pc = 0x197F28u;
label_197f28:
    // 0x197f28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f2c: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x197f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x197f30: 0xc066502  jal         func_199408
    ctx->pc = 0x197F30u;
    SET_GPR_U32(ctx, 31, 0x197F38u);
    ctx->pc = 0x197F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F30u;
            // 0x197f34: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F38u; }
        if (ctx->pc != 0x197F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F38u; }
        if (ctx->pc != 0x197F38u) { return; }
    }
    ctx->pc = 0x197F38u;
label_197f38:
    // 0x197f38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f3c: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x197f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x197f40: 0xc066502  jal         func_199408
    ctx->pc = 0x197F40u;
    SET_GPR_U32(ctx, 31, 0x197F48u);
    ctx->pc = 0x197F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F40u;
            // 0x197f44: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F48u; }
        if (ctx->pc != 0x197F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F48u; }
        if (ctx->pc != 0x197F48u) { return; }
    }
    ctx->pc = 0x197F48u;
label_197f48:
    // 0x197f48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x197f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197f4c: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x197f4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x197f50: 0xc066502  jal         func_199408
    ctx->pc = 0x197F50u;
    SET_GPR_U32(ctx, 31, 0x197F58u);
    ctx->pc = 0x197F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197F50u;
            // 0x197f54: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199408u;
    if (runtime->hasFunction(0x199408u)) {
        auto targetFn = runtime->lookupFunction(0x199408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F58u; }
        if (ctx->pc != 0x197F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00199408_0x199408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197F58u; }
        if (ctx->pc != 0x197F58u) { return; }
    }
    ctx->pc = 0x197F58u;
label_197f58:
    // 0x197f58: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x197f58u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x197f5c: 0x11400013  beqz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x197F5Cu;
    {
        const bool branch_taken_0x197f5c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F5Cu;
            // 0x197f60: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f5c) {
            ctx->pc = 0x197FACu;
            goto label_197fac;
        }
    }
    ctx->pc = 0x197F64u;
    // 0x197f64: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x197F64u;
    {
        const bool branch_taken_0x197f64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F64u;
            // 0x197f68: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f64) {
            ctx->pc = 0x197FB0u;
            goto label_197fb0;
        }
    }
    ctx->pc = 0x197F6Cu;
    // 0x197f6c: 0x17c0001d  bnez        $fp, . + 4 + (0x1D << 2)
    ctx->pc = 0x197F6Cu;
    {
        const bool branch_taken_0x197f6c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x197F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F6Cu;
            // 0x197f70: 0x24848630  addiu       $a0, $a0, -0x79D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f6c) {
            ctx->pc = 0x197FE4u;
            goto label_197fe4;
        }
    }
    ctx->pc = 0x197F74u;
    // 0x197f74: 0x5660000e  bnel        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x197F74u;
    {
        const bool branch_taken_0x197f74 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x197f74) {
            ctx->pc = 0x197F78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197F74u;
            // 0x197f78: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197FB0u;
            goto label_197fb0;
        }
    }
    ctx->pc = 0x197F7Cu;
    // 0x197f7c: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x197f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x197f80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x197F80u;
    {
        const bool branch_taken_0x197f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F80u;
            // 0x197f84: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f80) {
            ctx->pc = 0x197FACu;
            goto label_197fac;
        }
    }
    ctx->pc = 0x197F88u;
    // 0x197f88: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x197F88u;
    {
        const bool branch_taken_0x197f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F88u;
            // 0x197f8c: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f88) {
            ctx->pc = 0x197FB0u;
            goto label_197fb0;
        }
    }
    ctx->pc = 0x197F90u;
    // 0x197f90: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x197f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x197f94: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x197F94u;
    {
        const bool branch_taken_0x197f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x197F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197F94u;
            // 0x197f98: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197f94) {
            ctx->pc = 0x197FACu;
            goto label_197fac;
        }
    }
    ctx->pc = 0x197F9Cu;
    // 0x197f9c: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x197F9Cu;
    {
        const bool branch_taken_0x197f9c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x197f9c) {
            ctx->pc = 0x197FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197F9Cu;
            // 0x197fa0: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x197FB0u;
            goto label_197fb0;
        }
    }
    ctx->pc = 0x197FA4u;
    // 0x197fa4: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x197FA4u;
    {
        const bool branch_taken_0x197fa4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x197fa4) {
            ctx->pc = 0x197FB8u;
            goto label_197fb8;
        }
    }
    ctx->pc = 0x197FACu;
label_197fac:
    // 0x197fac: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x197facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_197fb0:
    // 0x197fb0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x197FB0u;
    {
        const bool branch_taken_0x197fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FB0u;
            // 0x197fb4: 0x24848630  addiu       $a0, $a0, -0x79D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fb0) {
            ctx->pc = 0x197FE4u;
            goto label_197fe4;
        }
    }
    ctx->pc = 0x197FB8u;
label_197fb8:
    // 0x197fb8: 0xc066138  jal         func_1984E0
    ctx->pc = 0x197FB8u;
    SET_GPR_U32(ctx, 31, 0x197FC0u);
    ctx->pc = 0x197FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197FB8u;
            // 0x197fbc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1984E0u;
    if (runtime->hasFunction(0x1984E0u)) {
        auto targetFn = runtime->lookupFunction(0x1984E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FC0u; }
        if (ctx->pc != 0x197FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001984E0_0x1984e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FC0u; }
        if (ctx->pc != 0x197FC0u) { return; }
    }
    ctx->pc = 0x197FC0u;
label_197fc0:
    // 0x197fc0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x197fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x197fc4: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x197FC4u;
    {
        const bool branch_taken_0x197fc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x197fc4) {
            ctx->pc = 0x197FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x197FC4u;
            // 0x197fc8: 0x2402ffc0  addiu       $v0, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198000u;
            goto label_198000;
        }
    }
    ctx->pc = 0x197FCCu;
    // 0x197fcc: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x197FCCu;
    {
        const bool branch_taken_0x197fcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FCCu;
            // 0x197fd0: 0x3c040064  lui         $a0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fcc) {
            ctx->pc = 0x197FE0u;
            goto label_197fe0;
        }
    }
    ctx->pc = 0x197FD4u;
    // 0x197fd4: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x197FD4u;
    {
        const bool branch_taken_0x197fd4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x197FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FD4u;
            // 0x197fd8: 0x2402ffc0  addiu       $v0, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197fd4) {
            ctx->pc = 0x198000u;
            goto label_198000;
        }
    }
    ctx->pc = 0x197FDCu;
    // 0x197fdc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x197fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_197fe0:
    // 0x197fe0: 0x24848650  addiu       $a0, $a0, -0x79B0
    ctx->pc = 0x197fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936144));
label_197fe4:
    // 0x197fe4: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x197FE4u;
    SET_GPR_U32(ctx, 31, 0x197FECu);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FECu; }
        if (ctx->pc != 0x197FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FECu; }
        if (ctx->pc != 0x197FECu) { return; }
    }
    ctx->pc = 0x197FECu;
label_197fec:
    // 0x197fec: 0xc06656c  jal         func_1995B0
    ctx->pc = 0x197FECu;
    SET_GPR_U32(ctx, 31, 0x197FF4u);
    ctx->pc = 0x197FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x197FECu;
            // 0x197ff0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1995B0u;
    if (runtime->hasFunction(0x1995B0u)) {
        auto targetFn = runtime->lookupFunction(0x1995B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FF4u; }
        if (ctx->pc != 0x197FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001995B0_0x1995b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x197FF4u; }
        if (ctx->pc != 0x197FF4u) { return; }
    }
    ctx->pc = 0x197FF4u;
label_197ff4:
    // 0x197ff4: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x197FF4u;
    {
        const bool branch_taken_0x197ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x197FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x197FF4u;
            // 0x197ff8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x197ff4) {
            ctx->pc = 0x1984B0u;
            goto label_1984b0;
        }
    }
    ctx->pc = 0x197FFCu;
    // 0x197ffc: 0x0  nop
    ctx->pc = 0x197ffcu;
    // NOP
label_198000:
    // 0x198000: 0x26e3003f  addiu       $v1, $s7, 0x3F
    ctx->pc = 0x198000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 63));
    // 0x198004: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x198004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x198008: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x198008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19800c: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x19800cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x198010: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x198010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x198014: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x198014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x198018: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x198018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x19801c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x19801cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x198020: 0x3c13005f  lui         $s3, 0x5F
    ctx->pc = 0x198020u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)95 << 16));
    // 0x198024: 0xc065d88  jal         func_197620
    ctx->pc = 0x198024u;
    SET_GPR_U32(ctx, 31, 0x19802Cu);
    ctx->pc = 0x198028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198024u;
            // 0x198028: 0xae033b78  sw          $v1, 0x3B78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 15224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197620u;
    if (runtime->hasFunction(0x197620u)) {
        auto targetFn = runtime->lookupFunction(0x197620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19802Cu; }
        if (ctx->pc != 0x19802Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197620_0x197620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19802Cu; }
        if (ctx->pc != 0x19802Cu) { return; }
    }
    ctx->pc = 0x19802Cu;
label_19802c:
    // 0x19802c: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x19802cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x198030: 0x3c17005f  lui         $s7, 0x5F
    ctx->pc = 0x198030u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)95 << 16));
    // 0x198034: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x198034u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x198038: 0x26626bc8  addiu       $v0, $s3, 0x6BC8
    ctx->pc = 0x198038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 27592));
    // 0x19803c: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x19803cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x198040: 0x26e46bf0  addiu       $a0, $s7, 0x6BF0
    ctx->pc = 0x198040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 27632));
    // 0x198044: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x198044u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x198048: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x198048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19804c: 0xac910018  sw          $s1, 0x18($a0)
    ctx->pc = 0x19804cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 17));
    // 0x198050: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x198050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x198054: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x198054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x198058: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x198058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x19805c: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x19805cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 18));
    // 0x198060: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x198060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x198064: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x198064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x198068: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x198068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x19806c: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x19806cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x198070: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x198070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x198074: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x198074u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x198078: 0x12c80041  beq         $s6, $t0, . + 4 + (0x41 << 2)
    ctx->pc = 0x198078u;
    {
        const bool branch_taken_0x198078 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 8));
        ctx->pc = 0x19807Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198078u;
            // 0x19807c: 0xac46001c  sw          $a2, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198078) {
            ctx->pc = 0x198180u;
            goto label_198180;
        }
    }
    ctx->pc = 0x198080u;
    // 0x198080: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x198080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x198084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x198084u;
    {
        const bool branch_taken_0x198084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198084u;
            // 0x198088: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198084) {
            ctx->pc = 0x1980A0u;
            goto label_1980a0;
        }
    }
    ctx->pc = 0x19808Cu;
    // 0x19808c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19808cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198090: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198090u;
    {
        const bool branch_taken_0x198090 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x198094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198090u;
            // 0x198094: 0x3c05005f  lui         $a1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198090) {
            ctx->pc = 0x1980B0u;
            goto label_1980b0;
        }
    }
    ctx->pc = 0x198098u;
    // 0x198098: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x198098u;
    {
        const bool branch_taken_0x198098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19809Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198098u;
            // 0x19809c: 0x3c03006d  lui         $v1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198098) {
            ctx->pc = 0x198340u;
            goto label_198340;
        }
    }
    ctx->pc = 0x1980A0u;
label_1980a0:
    // 0x1980a0: 0x12c2006f  beq         $s6, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x1980A0u;
    {
        const bool branch_taken_0x1980a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x1980A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980A0u;
            // 0x1980a4: 0x3c05005f  lui         $a1, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980a0) {
            ctx->pc = 0x198260u;
            goto label_198260;
        }
    }
    ctx->pc = 0x1980A8u;
    // 0x1980a8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1980A8u;
    {
        const bool branch_taken_0x1980a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980A8u;
            // 0x1980ac: 0x3c03006d  lui         $v1, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980a8) {
            ctx->pc = 0x198340u;
            goto label_198340;
        }
    }
    ctx->pc = 0x1980B0u;
label_1980b0:
    // 0x1980b0: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x1980b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x1980b4: 0x24636af0  addiu       $v1, $v1, 0x6AF0
    ctx->pc = 0x1980b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27376));
    // 0x1980b8: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1980b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1980bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1980BCu;
    {
        const bool branch_taken_0x1980bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1980C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1980BCu;
            // 0x1980c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1980bc) {
            ctx->pc = 0x198128u;
            goto label_198128;
        }
    }
    ctx->pc = 0x1980C4u;
    // 0x1980c4: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1980c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1980c8:
    // 0x1980c8: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x1980c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1980cc: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x1980ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1980d0: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x1980d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1980d4: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x1980d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1980d8: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x1980d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1980dc: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x1980dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1980e0: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x1980e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1980e4: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x1980e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1980e8: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x1980e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980ec: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x1980ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980f0: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x1980f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980f4: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x1980f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980f8: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x1980f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1980fc: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x1980fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198100: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x198100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198104: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x198104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x198108: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x198108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x19810c: 0x0  nop
    ctx->pc = 0x19810cu;
    // NOP
    // 0x198110: 0x0  nop
    ctx->pc = 0x198110u;
    // NOP
    // 0x198114: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x198114u;
    {
        const bool branch_taken_0x198114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x198118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198114u;
            // 0x198118: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198114) {
            ctx->pc = 0x1980C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1980c8;
        }
    }
    ctx->pc = 0x19811Cu;
    // 0x19811c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19811Cu;
    {
        const bool branch_taken_0x19811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19811Cu;
            // 0x198120: 0x8e023b78  lw          $v0, 0x3B78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19811c) {
            ctx->pc = 0x198164u;
            goto label_198164;
        }
    }
    ctx->pc = 0x198124u;
    // 0x198124: 0x0  nop
    ctx->pc = 0x198124u;
    // NOP
label_198128:
    // 0x198128: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x198128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_19812c:
    // 0x19812c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x19812cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198130: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x198130u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x198134: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x198134u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x198138: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x198138u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19813c: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x19813cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x198140: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x198140u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x198144: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x198144u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x198148: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x198148u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x19814c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19814cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x198150: 0x0  nop
    ctx->pc = 0x198150u;
    // NOP
    // 0x198154: 0x0  nop
    ctx->pc = 0x198154u;
    // NOP
    // 0x198158: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x198158u;
    {
        const bool branch_taken_0x198158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19815Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198158u;
            // 0x19815c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198158) {
            ctx->pc = 0x19812Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_19812c;
        }
    }
    ctx->pc = 0x198160u;
    // 0x198160: 0x8e023b78  lw          $v0, 0x3B78($s0)
    ctx->pc = 0x198160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15224)));
label_198164:
    // 0x198164: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x198164u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x198168: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x198168u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19816c: 0x3c08006d  lui         $t0, 0x6D
    ctx->pc = 0x19816cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)109 << 16));
    // 0x198170: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x198170u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x198174: 0xae820438  sw          $v0, 0x438($s4)
    ctx->pc = 0x198174u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1080), GPR_U32(ctx, 2));
    // 0x198178: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x198178u;
    {
        const bool branch_taken_0x198178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198178u;
            // 0x19817c: 0x8d033b7c  lw          $v1, 0x3B7C($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15228)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198178) {
            ctx->pc = 0x19832Cu;
            goto label_19832c;
        }
    }
    ctx->pc = 0x198180u;
label_198180:
    // 0x198180: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x198180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x198184: 0x24636b38  addiu       $v1, $v1, 0x6B38
    ctx->pc = 0x198184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27448));
    // 0x198188: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x198188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x19818c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19818Cu;
    {
        const bool branch_taken_0x19818c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19818Cu;
            // 0x198190: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19818c) {
            ctx->pc = 0x1981F8u;
            goto label_1981f8;
        }
    }
    ctx->pc = 0x198194u;
    // 0x198194: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x198194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_198198:
    // 0x198198: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x198198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x19819c: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x19819cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1981a0: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x1981a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1981a4: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x1981a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1981a8: 0x68640017  ldl         $a0, 0x17($v1)
    ctx->pc = 0x1981a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1981ac: 0x6c640010  ldr         $a0, 0x10($v1)
    ctx->pc = 0x1981acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1981b0: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x1981b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1981b4: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x1981b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1981b8: 0xb0a90007  sdl         $t1, 0x7($a1)
    ctx->pc = 0x1981b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1981bc: 0xb4a90000  sdr         $t1, 0x0($a1)
    ctx->pc = 0x1981bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1981c0: 0xb0aa000f  sdl         $t2, 0xF($a1)
    ctx->pc = 0x1981c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1981c4: 0xb4aa0008  sdr         $t2, 0x8($a1)
    ctx->pc = 0x1981c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1981c8: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x1981c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1981cc: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x1981ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1981d0: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x1981d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1981d4: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x1981d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1981d8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1981d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1981dc: 0x0  nop
    ctx->pc = 0x1981dcu;
    // NOP
    // 0x1981e0: 0x0  nop
    ctx->pc = 0x1981e0u;
    // NOP
    // 0x1981e4: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1981E4u;
    {
        const bool branch_taken_0x1981e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1981E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981E4u;
            // 0x1981e8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981e4) {
            ctx->pc = 0x198198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_198198;
        }
    }
    ctx->pc = 0x1981ECu;
    // 0x1981ec: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1981ECu;
    {
        const bool branch_taken_0x1981ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1981F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1981ECu;
            // 0x1981f0: 0x8e023b78  lw          $v0, 0x3B78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1981ec) {
            ctx->pc = 0x198234u;
            goto label_198234;
        }
    }
    ctx->pc = 0x1981F4u;
    // 0x1981f4: 0x0  nop
    ctx->pc = 0x1981f4u;
    // NOP
label_1981f8:
    // 0x1981f8: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1981f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1981fc:
    // 0x1981fc: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x1981fcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x198200: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x198200u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x198204: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x198204u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x198208: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x198208u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x19820c: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x19820cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x198210: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x198210u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x198214: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x198214u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x198218: 0xfcaa0018  sd          $t2, 0x18($a1)
    ctx->pc = 0x198218u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 10));
    // 0x19821c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x19821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x198220: 0x0  nop
    ctx->pc = 0x198220u;
    // NOP
    // 0x198224: 0x0  nop
    ctx->pc = 0x198224u;
    // NOP
    // 0x198228: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x198228u;
    {
        const bool branch_taken_0x198228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198228u;
            // 0x19822c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198228) {
            ctx->pc = 0x1981FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1981fc;
        }
    }
    ctx->pc = 0x198230u;
    // 0x198230: 0x8e023b78  lw          $v0, 0x3B78($s0)
    ctx->pc = 0x198230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15224)));
label_198234:
    // 0x198234: 0x3c0a006d  lui         $t2, 0x6D
    ctx->pc = 0x198234u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)109 << 16));
    // 0x198238: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x198238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19823c: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x19823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x198240: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x198240u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x198244: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x198244u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x198248: 0xae820438  sw          $v0, 0x438($s4)
    ctx->pc = 0x198248u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1080), GPR_U32(ctx, 2));
    // 0x19824c: 0x8d433b7c  lw          $v1, 0x3B7C($t2)
    ctx->pc = 0x19824cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 15228)));
    // 0x198250: 0xae840440  sw          $a0, 0x440($s4)
    ctx->pc = 0x198250u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1088), GPR_U32(ctx, 4));
    // 0x198254: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x198254u;
    {
        const bool branch_taken_0x198254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198254u;
            // 0x198258: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198254) {
            ctx->pc = 0x198338u;
            goto label_198338;
        }
    }
    ctx->pc = 0x19825Cu;
    // 0x19825c: 0x0  nop
    ctx->pc = 0x19825cu;
    // NOP
label_198260:
    // 0x198260: 0x3c03005f  lui         $v1, 0x5F
    ctx->pc = 0x198260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)95 << 16));
    // 0x198264: 0x24636b80  addiu       $v1, $v1, 0x6B80
    ctx->pc = 0x198264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 27520));
    // 0x198268: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x198268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x19826c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19826Cu;
    {
        const bool branch_taken_0x19826c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19826Cu;
            // 0x198270: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19826c) {
            ctx->pc = 0x1982D8u;
            goto label_1982d8;
        }
    }
    ctx->pc = 0x198274u;
    // 0x198274: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x198274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_198278:
    // 0x198278: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x198278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x19827c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x19827cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x198280: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x198280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x198284: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x198284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x198288: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x198288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x19828c: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x19828cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x198290: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x198290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x198294: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x198294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x198298: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x198298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x19829c: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x19829cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982a0: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x1982a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982a4: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x1982a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982a8: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x1982a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982ac: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x1982acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982b0: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x1982b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982b4: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x1982b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1982b8: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1982b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1982bc: 0x0  nop
    ctx->pc = 0x1982bcu;
    // NOP
    // 0x1982c0: 0x0  nop
    ctx->pc = 0x1982c0u;
    // NOP
    // 0x1982c4: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1982C4u;
    {
        const bool branch_taken_0x1982c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1982C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1982C4u;
            // 0x1982c8: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982c4) {
            ctx->pc = 0x198278u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_198278;
        }
    }
    ctx->pc = 0x1982CCu;
    // 0x1982cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1982CCu;
    {
        const bool branch_taken_0x1982cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1982D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1982CCu;
            // 0x1982d0: 0x8e023b78  lw          $v0, 0x3B78($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1982cc) {
            ctx->pc = 0x198314u;
            goto label_198314;
        }
    }
    ctx->pc = 0x1982D4u;
    // 0x1982d4: 0x0  nop
    ctx->pc = 0x1982d4u;
    // NOP
label_1982d8:
    // 0x1982d8: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x1982d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_1982dc:
    // 0x1982dc: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x1982dcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1982e0: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x1982e0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1982e4: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x1982e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1982e8: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x1982e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x1982ec: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x1982ecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x1982f0: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x1982f0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x1982f4: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x1982f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x1982f8: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x1982f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x1982fc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1982fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x198300: 0x0  nop
    ctx->pc = 0x198300u;
    // NOP
    // 0x198304: 0x0  nop
    ctx->pc = 0x198304u;
    // NOP
    // 0x198308: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x198308u;
    {
        const bool branch_taken_0x198308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198308u;
            // 0x19830c: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198308) {
            ctx->pc = 0x1982DCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1982dc;
        }
    }
    ctx->pc = 0x198310u;
    // 0x198310: 0x8e023b78  lw          $v0, 0x3B78($s0)
    ctx->pc = 0x198310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 15224)));
label_198314:
    // 0x198314: 0x3c05005f  lui         $a1, 0x5F
    ctx->pc = 0x198314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)95 << 16));
    // 0x198318: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x198318u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19831c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x19831cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x198320: 0xae820438  sw          $v0, 0x438($s4)
    ctx->pc = 0x198320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1080), GPR_U32(ctx, 2));
    // 0x198324: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x198324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x198328: 0x8c433b7c  lw          $v1, 0x3B7C($v0)
    ctx->pc = 0x198328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15228)));
label_19832c:
    // 0x19832c: 0x8ca26c0c  lw          $v0, 0x6C0C($a1)
    ctx->pc = 0x19832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27660)));
    // 0x198330: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x198330u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x198334: 0xae820440  sw          $v0, 0x440($s4)
    ctx->pc = 0x198334u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1088), GPR_U32(ctx, 2));
label_198338:
    // 0x198338: 0xae83043c  sw          $v1, 0x43C($s4)
    ctx->pc = 0x198338u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1084), GPR_U32(ctx, 3));
    // 0x19833c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x19833cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_198340:
    // 0x198340: 0x24703b80  addiu       $s0, $v1, 0x3B80
    ctx->pc = 0x198340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 15232));
    // 0x198344: 0x8ca36c0c  lw          $v1, 0x6C0C($a1)
    ctx->pc = 0x198344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 27660)));
    // 0x198348: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x198348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19834c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19834Cu;
    {
        const bool branch_taken_0x19834c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x198350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19834Cu;
            // 0x198350: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19834c) {
            ctx->pc = 0x19836Cu;
            goto label_19836c;
        }
    }
    ctx->pc = 0x198354u;
    // 0x198354: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x198354u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x198358: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x198358u;
    {
        const bool branch_taken_0x198358 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x198358) {
            ctx->pc = 0x19835Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198358u;
            // 0x19835c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x198360u;
            goto label_198360;
        }
    }
    ctx->pc = 0x198360u;
label_198360:
    // 0x198360: 0x1010  mfhi        $v0
    ctx->pc = 0x198360u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x198364: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x198364u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x198368: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x198368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_19836c:
    // 0x19836c: 0xc065ddc  jal         func_197770
    ctx->pc = 0x19836Cu;
    SET_GPR_U32(ctx, 31, 0x198374u);
    ctx->pc = 0x198370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19836Cu;
            // 0x198370: 0x8ea40024  lw          $a0, 0x24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197770u;
    if (runtime->hasFunction(0x197770u)) {
        auto targetFn = runtime->lookupFunction(0x197770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198374u; }
        if (ctx->pc != 0x198374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197770_0x197770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198374u; }
        if (ctx->pc != 0x198374u) { return; }
    }
    ctx->pc = 0x198374u;
label_198374:
    // 0x198374: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x198374u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x198378: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x198378u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19837c: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x19837cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x198380: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x198380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x198384: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x198384u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x198388: 0x8c683b84  lw          $t0, 0x3B84($v1)
    ctx->pc = 0x198388u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15236)));
    // 0x19838c: 0x26646bc8  addiu       $a0, $s3, 0x6BC8
    ctx->pc = 0x19838cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 27592));
    // 0x198390: 0x8ca33b88  lw          $v1, 0x3B88($a1)
    ctx->pc = 0x198390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 15240)));
    // 0x198394: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x198394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198398: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x198398u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19839c: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x19839cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1983a0: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x1983a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1983a4: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x1983a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x1983a8: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1983a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1983ac: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x1983acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x1983b0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1983b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1983b4: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x1983b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1983b8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x1983b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1983bc: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1983bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1983c0: 0x8faa00cc  lw          $t2, 0xCC($sp)
    ctx->pc = 0x1983c0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x1983c4: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1983c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1983c8: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x1983c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x1983cc: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1983ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1983d0: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x1983d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x1983d4: 0xafaa003c  sw          $t2, 0x3C($sp)
    ctx->pc = 0x1983d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 10));
    // 0x1983d8: 0xc06aaec  jal         func_1AABB0
    ctx->pc = 0x1983D8u;
    SET_GPR_U32(ctx, 31, 0x1983E0u);
    ctx->pc = 0x1983DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1983D8u;
            // 0x1983dc: 0xafa90040  sw          $t1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AABB0u;
    if (runtime->hasFunction(0x1AABB0u)) {
        auto targetFn = runtime->lookupFunction(0x1AABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1983E0u; }
        if (ctx->pc != 0x1983E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AABB0_0x1aabb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1983E0u; }
        if (ctx->pc != 0x1983E0u) { return; }
    }
    ctx->pc = 0x1983E0u;
label_1983e0:
    // 0x1983e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1983e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1983e4: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1983E4u;
    {
        const bool branch_taken_0x1983e4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x1983e4) {
            ctx->pc = 0x1983F4u;
            goto label_1983f4;
        }
    }
    ctx->pc = 0x1983ECu;
    // 0x1983ec: 0xc068c14  jal         func_1A3050
    ctx->pc = 0x1983ECu;
    SET_GPR_U32(ctx, 31, 0x1983F4u);
    ctx->pc = 0x1983F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1983ECu;
            // 0x1983f0: 0x26e46bf0  addiu       $a0, $s7, 0x6BF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 27632));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3050u;
    if (runtime->hasFunction(0x1A3050u)) {
        auto targetFn = runtime->lookupFunction(0x1A3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1983F4u; }
        if (ctx->pc != 0x1983F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3050_0x1a3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1983F4u; }
        if (ctx->pc != 0x1983F4u) { return; }
    }
    ctx->pc = 0x1983F4u;
label_1983f4:
    // 0x1983f4: 0xc06c52c  jal         func_1B14B0
    ctx->pc = 0x1983F4u;
    SET_GPR_U32(ctx, 31, 0x1983FCu);
    ctx->pc = 0x1983F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1983F4u;
            // 0x1983f8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B14B0u;
    if (runtime->hasFunction(0x1B14B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B14B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1983FCu; }
        if (ctx->pc != 0x1983FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B14B0_0x1b14b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1983FCu; }
        if (ctx->pc != 0x1983FCu) { return; }
    }
    ctx->pc = 0x1983FCu;
label_1983fc:
    // 0x1983fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1983fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198400: 0xc06cd78  jal         func_1B35E0
    ctx->pc = 0x198400u;
    SET_GPR_U32(ctx, 31, 0x198408u);
    ctx->pc = 0x198404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198400u;
            // 0x198404: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B35E0u;
    if (runtime->hasFunction(0x1B35E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B35E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198408u; }
        if (ctx->pc != 0x198408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B35E0_0x1b35e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198408u; }
        if (ctx->pc != 0x198408u) { return; }
    }
    ctx->pc = 0x198408u;
label_198408:
    // 0x198408: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198408u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19840c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19840Cu;
    {
        const bool branch_taken_0x19840c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x198410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19840Cu;
            // 0x198410: 0x3c05001a  lui         $a1, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19840c) {
            ctx->pc = 0x198428u;
            goto label_198428;
        }
    }
    ctx->pc = 0x198414u;
    // 0x198414: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x198414u;
    SET_GPR_U32(ctx, 31, 0x19841Cu);
    ctx->pc = 0x198418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198414u;
            // 0x198418: 0x2404fecf  addiu       $a0, $zero, -0x131 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966991));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19841Cu; }
        if (ctx->pc != 0x19841Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19841Cu; }
        if (ctx->pc != 0x19841Cu) { return; }
    }
    ctx->pc = 0x19841Cu;
label_19841c:
    // 0x19841c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19841cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198420: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x198420u;
    {
        const bool branch_taken_0x198420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198420u;
            // 0x198424: 0x24848670  addiu       $a0, $a0, -0x7990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198420) {
            ctx->pc = 0x198470u;
            goto label_198470;
        }
    }
    ctx->pc = 0x198428u;
label_198428:
    // 0x198428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x198428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19842c: 0x24a5b7d0  addiu       $a1, $a1, -0x4830
    ctx->pc = 0x19842cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948816));
    // 0x198430: 0xc06a1d8  jal         func_1A8760
    ctx->pc = 0x198430u;
    SET_GPR_U32(ctx, 31, 0x198438u);
    ctx->pc = 0x198434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198430u;
            // 0x198434: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A8760u;
    if (runtime->hasFunction(0x1A8760u)) {
        auto targetFn = runtime->lookupFunction(0x1A8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198438u; }
        if (ctx->pc != 0x198438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A8760_0x1a8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198438u; }
        if (ctx->pc != 0x198438u) { return; }
    }
    ctx->pc = 0x198438u;
label_198438:
    // 0x198438: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198438u;
    {
        const bool branch_taken_0x198438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198438u;
            // 0x19843c: 0x8fa500a4  lw          $a1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198438) {
            ctx->pc = 0x198458u;
            goto label_198458;
        }
    }
    ctx->pc = 0x198440u;
    // 0x198440: 0xc066dae  jal         func_19B6B8
    ctx->pc = 0x198440u;
    SET_GPR_U32(ctx, 31, 0x198448u);
    ctx->pc = 0x198444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198440u;
            // 0x198444: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19B6B8u;
    if (runtime->hasFunction(0x19B6B8u)) {
        auto targetFn = runtime->lookupFunction(0x19B6B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198448u; }
        if (ctx->pc != 0x198448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B6B8_0x19b6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198448u; }
        if (ctx->pc != 0x198448u) { return; }
    }
    ctx->pc = 0x198448u;
label_198448:
    // 0x198448: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19844c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x19844Cu;
    {
        const bool branch_taken_0x19844c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19844Cu;
            // 0x198450: 0x248486a0  addiu       $a0, $a0, -0x7960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19844c) {
            ctx->pc = 0x198470u;
            goto label_198470;
        }
    }
    ctx->pc = 0x198454u;
    // 0x198454: 0x0  nop
    ctx->pc = 0x198454u;
    // NOP
label_198458:
    // 0x198458: 0xc065c88  jal         func_197220
    ctx->pc = 0x198458u;
    SET_GPR_U32(ctx, 31, 0x198460u);
    ctx->pc = 0x19845Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198458u;
            // 0x19845c: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197220u;
    if (runtime->hasFunction(0x197220u)) {
        auto targetFn = runtime->lookupFunction(0x197220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198460u; }
        if (ctx->pc != 0x198460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197220_0x197220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198460u; }
        if (ctx->pc != 0x198460u) { return; }
    }
    ctx->pc = 0x198460u;
label_198460:
    // 0x198460: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198460u;
    {
        const bool branch_taken_0x198460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x198464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198460u;
            // 0x198464: 0xae82054c  sw          $v0, 0x54C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198460) {
            ctx->pc = 0x198480u;
            goto label_198480;
        }
    }
    ctx->pc = 0x198468u;
    // 0x198468: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19846c: 0x248486c8  addiu       $a0, $a0, -0x7938
    ctx->pc = 0x19846cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936264));
label_198470:
    // 0x198470: 0xc0686c6  jal         func_1A1B18
    ctx->pc = 0x198470u;
    SET_GPR_U32(ctx, 31, 0x198478u);
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198478u; }
        if (ctx->pc != 0x198478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198478u; }
        if (ctx->pc != 0x198478u) { return; }
    }
    ctx->pc = 0x198478u;
label_198478:
    // 0x198478: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x198478u;
    {
        const bool branch_taken_0x198478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19847Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198478u;
            // 0x19847c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198478) {
            ctx->pc = 0x1984B0u;
            goto label_1984b0;
        }
    }
    ctx->pc = 0x198480u;
label_198480:
    // 0x198480: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x198480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x198484: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x198484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198488: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x198488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x19848c: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x19848cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x198490: 0xae820418  sw          $v0, 0x418($s4)
    ctx->pc = 0x198490u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1048), GPR_U32(ctx, 2));
    // 0x198494: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x198494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x198498: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x198498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x19849c: 0xc066146  jal         func_198518
    ctx->pc = 0x19849Cu;
    SET_GPR_U32(ctx, 31, 0x1984A4u);
    ctx->pc = 0x1984A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19849Cu;
            // 0x1984a0: 0xae83041c  sw          $v1, 0x41C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1052), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198518u;
    if (runtime->hasFunction(0x198518u)) {
        auto targetFn = runtime->lookupFunction(0x198518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984A4u; }
        if (ctx->pc != 0x1984A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00198518_0x198518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984A4u; }
        if (ctx->pc != 0x1984A4u) { return; }
    }
    ctx->pc = 0x1984A4u;
label_1984a4:
    // 0x1984a4: 0xae800550  sw          $zero, 0x550($s4)
    ctx->pc = 0x1984a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1360), GPR_U32(ctx, 0));
    // 0x1984a8: 0xae800590  sw          $zero, 0x590($s4)
    ctx->pc = 0x1984a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1424), GPR_U32(ctx, 0));
    // 0x1984ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1984acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1984b0:
    // 0x1984b0: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x1984b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1984b4: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x1984b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1984b8: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x1984b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1984bc: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x1984bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x1984c0: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x1984c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1984c4: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x1984c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1984c8: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x1984c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1984cc: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x1984ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x1984d0: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x1984d0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1984d4: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x1984d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x1984d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1984D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1984DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1984D8u;
            // 0x1984dc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1984E0u;
}
