#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198530
// Address: 0x198530 - 0x198690
void sub_00198530_0x198530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198530_0x198530");
#endif

    switch (ctx->pc) {
        case 0x1985c8u: goto label_1985c8;
        default: break;
    }

    ctx->pc = 0x198530u;

label_198530:
    // 0x198530: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x198530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x198534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x198534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x198538: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x198538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19853c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x198540: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x198540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x198544: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x198544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x198548: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x198548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19854c: 0x8e0503ec  lw          $a1, 0x3EC($s0)
    ctx->pc = 0x19854cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1004)));
    // 0x198550: 0x54a0000b  bnel        $a1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x198550u;
    {
        const bool branch_taken_0x198550 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x198550) {
            ctx->pc = 0x198554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198550u;
            // 0x198554: 0x8e030018  lw          $v1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198580u;
            goto label_198580;
        }
    }
    ctx->pc = 0x198558u;
    // 0x198558: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x19855c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19855cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198560: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x198560u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198564: 0x24848708  addiu       $a0, $a0, -0x78F8
    ctx->pc = 0x198564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936328));
    // 0x198568: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x198568u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19856c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x19856cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x198570: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x198570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198574: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x198574u;
    ctx->pc = 0x198578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198574u;
            // 0x198578: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x19857Cu;
    // 0x19857c: 0x0  nop
    ctx->pc = 0x19857cu;
    // NOP
label_198580:
    // 0x198580: 0x8cb30008  lw          $s3, 0x8($a1)
    ctx->pc = 0x198580u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x198584: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x198584u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x198588: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x198588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19858c: 0x2531818  mult        $v1, $s2, $s3
    ctx->pc = 0x19858cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x198590: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x198590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x198594: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x198594u;
    {
        const bool branch_taken_0x198594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x198598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198594u;
            // 0x198598: 0x8cb10000  lw          $s1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198594) {
            ctx->pc = 0x1985C0u;
            goto label_1985c0;
        }
    }
    ctx->pc = 0x19859Cu;
    // 0x19859c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x19859cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x1985a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1985a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1985a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1985a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985a8: 0x24848740  addiu       $a0, $a0, -0x78C0
    ctx->pc = 0x1985a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936384));
    // 0x1985ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1985acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1985b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1985b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1985b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1985b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1985b8: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x1985B8u;
    ctx->pc = 0x1985BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1985B8u;
            // 0x1985bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1985C0u;
label_1985c0:
    // 0x1985c0: 0xc066d2a  jal         func_19B4A8
    ctx->pc = 0x1985C0u;
    SET_GPR_U32(ctx, 31, 0x1985C8u);
    ctx->pc = 0x19B4A8u;
    if (runtime->hasFunction(0x19B4A8u)) {
        auto targetFn = runtime->lookupFunction(0x19B4A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985C8u; }
        if (ctx->pc != 0x1985C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019B4A8_0x19b4a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985C8u; }
        if (ctx->pc != 0x1985C8u) { return; }
    }
    ctx->pc = 0x1985C8u;
label_1985c8:
    // 0x1985c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1985c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1985cc: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1985CCu;
    {
        const bool branch_taken_0x1985cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1985cc) {
            ctx->pc = 0x1985D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1985CCu;
            // 0x1985d0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198600u;
            goto label_198600;
        }
    }
    ctx->pc = 0x1985D4u;
    // 0x1985d4: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x1985d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x1985d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1985d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985dc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1985dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1985e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1985e4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1985e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1985e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1985ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1985ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1985f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1985f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1985f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1985f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1985f8: 0x806ac28  j           func_1AB0A0
    ctx->pc = 0x1985F8u;
    ctx->pc = 0x1985FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1985F8u;
            // 0x1985fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AB0A0u;
    {
        auto targetFn = runtime->lookupFunction(0x1AB0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x198600u;
label_198600:
    // 0x198600: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x198600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x198604: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x198604u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198608: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x198608u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x19860c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x19860cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x198610: 0x3e00008  jr          $ra
    ctx->pc = 0x198610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x198614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198610u;
            // 0x198614: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x198618u;
    // 0x198618: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x198618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19861c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19861cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x198620: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x198620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x198624: 0x250303e0  addiu       $v1, $t0, 0x3E0
    ctx->pc = 0x198624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 992));
    // 0x198628: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x198628u;
    {
        const bool branch_taken_0x198628 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x19862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198628u;
            // 0x19862c: 0x250203d4  addiu       $v0, $t0, 0x3D4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 980));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198628) {
            ctx->pc = 0x198648u;
            goto label_198648;
        }
    }
    ctx->pc = 0x198630u;
    // 0x198630: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x198630u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x198634: 0xad0203ec  sw          $v0, 0x3EC($t0)
    ctx->pc = 0x198634u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1004), GPR_U32(ctx, 2));
    // 0x198638: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x198638u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x19863c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x19863Cu;
    {
        const bool branch_taken_0x19863c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x198640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19863Cu;
            // 0x198640: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19863c) {
            ctx->pc = 0x198684u;
            goto label_198684;
        }
    }
    ctx->pc = 0x198644u;
    // 0x198644: 0x0  nop
    ctx->pc = 0x198644u;
    // NOP
label_198648:
    // 0x198648: 0x8d020018  lw          $v0, 0x18($t0)
    ctx->pc = 0x198648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
    // 0x19864c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x19864cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x198650: 0x471018  mult        $v0, $v0, $a3
    ctx->pc = 0x198650u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x198654: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x198654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x198658: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x198658u;
    {
        const bool branch_taken_0x198658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198658) {
            ctx->pc = 0x19865Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198658u;
            // 0x19865c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198678u;
            goto label_198678;
        }
    }
    ctx->pc = 0x198660u;
    // 0x198660: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x198660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x198664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198668: 0x24848780  addiu       $a0, $a0, -0x7880
    ctx->pc = 0x198668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936448));
    // 0x19866c: 0x80686c6  j           func_1A1B18
    ctx->pc = 0x19866Cu;
    ctx->pc = 0x198670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19866Cu;
            // 0x198670: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1B18u;
    if (runtime->hasFunction(0x1A1B18u)) {
        auto targetFn = runtime->lookupFunction(0x1A1B18u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001A1B18_0x1a1b18(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x198674u;
    // 0x198674: 0x0  nop
    ctx->pc = 0x198674u;
    // NOP
label_198678:
    // 0x198678: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x198678u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
    // 0x19867c: 0xac670008  sw          $a3, 0x8($v1)
    ctx->pc = 0x19867cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 7));
    // 0x198680: 0xad0303ec  sw          $v1, 0x3EC($t0)
    ctx->pc = 0x198680u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1004), GPR_U32(ctx, 3));
label_198684:
    // 0x198684: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x198684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198688: 0x806614c  j           func_198530
    ctx->pc = 0x198688u;
    ctx->pc = 0x19868Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198688u;
            // 0x19868c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198530u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_198530;
    ctx->pc = 0x198690u;
}
