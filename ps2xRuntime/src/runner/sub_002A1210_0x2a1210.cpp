#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1210
// Address: 0x2a1210 - 0x2a12b0
void sub_002A1210_0x2a1210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1210_0x2a1210");
#endif

    switch (ctx->pc) {
        case 0x2a1254u: goto label_2a1254;
        case 0x2a126cu: goto label_2a126c;
        case 0x2a127cu: goto label_2a127c;
        default: break;
    }

    ctx->pc = 0x2a1210u;

    // 0x2a1210: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2a1210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2a1214: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2a1214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2a1218: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a1218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2a121c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a121cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a1220: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2a1220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2a1224: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2a1224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2a1228: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2a1228u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a122c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1230: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2a1230u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1234: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1238: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2a1238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a123c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a1240: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a1240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a1244: 0x8c70fff4  lw          $s0, -0xC($v1)
    ctx->pc = 0x2a1244u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
    // 0x2a1248: 0x8c55fff4  lw          $s5, -0xC($v0)
    ctx->pc = 0x2a1248u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967284)));
    // 0x2a124c: 0xc0a846c  jal         func_2A11B0
    ctx->pc = 0x2A124Cu;
    SET_GPR_U32(ctx, 31, 0x2A1254u);
    ctx->pc = 0x2A1250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A124Cu;
            // 0x2a1250: 0x2152021  addu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A11B0u;
    if (runtime->hasFunction(0x2A11B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A11B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1254u; }
        if (ctx->pc != 0x2A1254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A11B0_0x2a11b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1254u; }
        if (ctx->pc != 0x2A1254u) { return; }
    }
    ctx->pc = 0x2A1254u;
label_2a1254:
    // 0x2a1254: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2a1254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2a1258: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2a1258u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a125c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a125cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1260: 0x2692000c  addiu       $s2, $s4, 0xC
    ctx->pc = 0x2a1260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2a1264: 0xc0a8448  jal         func_2A1120
    ctx->pc = 0x2A1264u;
    SET_GPR_U32(ctx, 31, 0x2A126Cu);
    ctx->pc = 0x2A1268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1264u;
            // 0x2a1268: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A126Cu; }
        if (ctx->pc != 0x2A126Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A126Cu; }
        if (ctx->pc != 0x2A126Cu) { return; }
    }
    ctx->pc = 0x2A126Cu;
label_2a126c:
    // 0x2a126c: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x2a126cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2a1270: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2a1270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2a1274: 0xc0a8448  jal         func_2A1120
    ctx->pc = 0x2A1274u;
    SET_GPR_U32(ctx, 31, 0x2A127Cu);
    ctx->pc = 0x2A1278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1274u;
            // 0x2a1278: 0x26a60001  addiu       $a2, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1120u;
    if (runtime->hasFunction(0x2A1120u)) {
        auto targetFn = runtime->lookupFunction(0x2A1120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A127Cu; }
        if (ctx->pc != 0x2A127Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A1120_0x2a1120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A127Cu; }
        if (ctx->pc != 0x2A127Cu) { return; }
    }
    ctx->pc = 0x2A127Cu;
label_2a127c:
    // 0x2a127c: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x2a127cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a1280: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x2a1280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
    // 0x2a1284: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2a1284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a1288: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a1288u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a128c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a128cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a1290: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2a1290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a1294: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2a1294u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1298: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a129c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a129cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a12a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2A12A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A12A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A12A0u;
            // 0x2a12a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A12A8u;
    // 0x2a12a8: 0x0  nop
    ctx->pc = 0x2a12a8u;
    // NOP
    // 0x2a12ac: 0x0  nop
    ctx->pc = 0x2a12acu;
    // NOP
}
