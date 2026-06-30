#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187178
// Address: 0x187178 - 0x187288
void sub_00187178_0x187178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187178_0x187178");
#endif

    switch (ctx->pc) {
        case 0x187250u: goto label_187250;
        case 0x187260u: goto label_187260;
        default: break;
    }

    ctx->pc = 0x187178u;

    // 0x187178: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x187178u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18717c: 0x3c06005f  lui         $a2, 0x5F
    ctx->pc = 0x18717cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)95 << 16));
    // 0x187180: 0x80830001  lb          $v1, 0x1($a0)
    ctx->pc = 0x187180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x187184: 0x24c65bd0  addiu       $a2, $a2, 0x5BD0
    ctx->pc = 0x187184u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23504));
    // 0x187188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x187188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x18718c: 0x80850002  lb          $a1, 0x2($a0)
    ctx->pc = 0x18718cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x187190: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x187190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x187194: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x187194u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x187198: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x187198u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18719c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18719cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1871a0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1871a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1871a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1871a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1871a8: 0x80820003  lb          $v0, 0x3($a0)
    ctx->pc = 0x1871a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1871ac: 0x91900  sll         $v1, $t1, 4
    ctx->pc = 0x1871acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1871b0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1871b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1871b4: 0x674821  addu        $t1, $v1, $a3
    ctx->pc = 0x1871b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1871b8: 0x8ca80000  lw          $t0, 0x0($a1)
    ctx->pc = 0x1871b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1871bc: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1871bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1871c0: 0x80830004  lb          $v1, 0x4($a0)
    ctx->pc = 0x1871c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1871c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1871c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1871c8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1871c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1871cc: 0xa84821  addu        $t1, $a1, $t0
    ctx->pc = 0x1871ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x1871d0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1871d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1871d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1871d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1871d8: 0x80820005  lb          $v0, 0x5($a0)
    ctx->pc = 0x1871d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
    // 0x1871dc: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x1871dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1871e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x1871e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x1871e4: 0xa74821  addu        $t1, $a1, $a3
    ctx->pc = 0x1871e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1871e8: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x1871e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1871ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1871ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1871f0: 0x80830006  lb          $v1, 0x6($a0)
    ctx->pc = 0x1871f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1871f4: 0x92100  sll         $a0, $t1, 4
    ctx->pc = 0x1871f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x1871f8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1871f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1871fc: 0x884821  addu        $t1, $a0, $t0
    ctx->pc = 0x1871fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x187200: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x187200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x187204: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x187204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x187208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x187208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x18720c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x18720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x187210: 0x454821  addu        $t1, $v0, $a1
    ctx->pc = 0x187210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x187214: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x187214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x187218: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x187218u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x18721c: 0x3e00008  jr          $ra
    ctx->pc = 0x18721Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18721Cu;
            // 0x187220: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187224u;
    // 0x187224: 0x0  nop
    ctx->pc = 0x187224u;
    // NOP
    // 0x187228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x187228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18722c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18722cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x187230: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x187230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x187234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x187238: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x187238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18723c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x187240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x187240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187244: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x187244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187248: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x187248u;
    SET_GPR_U32(ctx, 31, 0x187250u);
    ctx->pc = 0x18724Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187248u;
            // 0x18724c: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187250u; }
        if (ctx->pc != 0x187250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187250u; }
        if (ctx->pc != 0x187250u) { return; }
    }
    ctx->pc = 0x187250u;
label_187250:
    // 0x187250: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x187250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187254: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x187254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187258: 0xc04b156  jal         func_12C558
    ctx->pc = 0x187258u;
    SET_GPR_U32(ctx, 31, 0x187260u);
    ctx->pc = 0x18725Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187258u;
            // 0x18725c: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187260u; }
        if (ctx->pc != 0x187260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187260u; }
        if (ctx->pc != 0x187260u) { return; }
    }
    ctx->pc = 0x187260u;
label_187260:
    // 0x187260: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x187260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x187264: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x187264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x187268: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187268u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18726c: 0x2484fff0  addiu       $a0, $a0, -0x10
    ctx->pc = 0x18726cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x187270: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187270u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187274: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x187274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x187278: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x187278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18727c: 0x8061c38  j           func_1870E0
    ctx->pc = 0x18727Cu;
    ctx->pc = 0x187280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18727Cu;
            // 0x187280: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1870E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1870E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x187284u;
    // 0x187284: 0x0  nop
    ctx->pc = 0x187284u;
    // NOP
}
