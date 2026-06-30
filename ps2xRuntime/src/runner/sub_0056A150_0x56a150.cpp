#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0056A150
// Address: 0x56a150 - 0x56a390
void sub_0056A150_0x56a150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0056A150_0x56a150");
#endif

    switch (ctx->pc) {
        case 0x56a194u: goto label_56a194;
        case 0x56a1d4u: goto label_56a1d4;
        case 0x56a260u: goto label_56a260;
        case 0x56a280u: goto label_56a280;
        case 0x56a2f4u: goto label_56a2f4;
        case 0x56a314u: goto label_56a314;
        case 0x56a348u: goto label_56a348;
        default: break;
    }

    ctx->pc = 0x56a150u;

    // 0x56a150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x56a150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x56a154: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56a154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x56a158: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x56a158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x56a15c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x56a15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x56a160: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x56a160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x56a164: 0x24638338  addiu       $v1, $v1, -0x7CC8
    ctx->pc = 0x56a164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935352));
    // 0x56a168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56a168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x56a16c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x56a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x56a170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x56a170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56a174: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x56a174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x56a178: 0xac501ce8  sw          $s0, 0x1CE8($v0)
    ctx->pc = 0x56a178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7400), GPR_U32(ctx, 16));
    // 0x56a17c: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x56a17cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x56a180: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x56a180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x56a184: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x56a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56a188: 0x3445d08f  ori         $a1, $v0, 0xD08F
    ctx->pc = 0x56a188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53391);
    // 0x56a18c: 0xc10ca68  jal         func_4329A0
    ctx->pc = 0x56A18Cu;
    SET_GPR_U32(ctx, 31, 0x56A194u);
    ctx->pc = 0x56A190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A18Cu;
            // 0x56a190: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A194u; }
        if (ctx->pc != 0x56A194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A194u; }
        if (ctx->pc != 0x56A194u) { return; }
    }
    ctx->pc = 0x56A194u;
label_56a194:
    // 0x56a194: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x56a194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x56a198: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x56a19c: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x56a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
    // 0x56a1a0: 0x244282f0  addiu       $v0, $v0, -0x7D10
    ctx->pc = 0x56a1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935280));
    // 0x56a1a4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x56a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x56a1a8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x56a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x56a1ac: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56a1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x56a1b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x56a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x56a1b4: 0x246382fc  addiu       $v1, $v1, -0x7D04
    ctx->pc = 0x56a1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935292));
    // 0x56a1b8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x56a1bc: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x56a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x56a1c0: 0x27a5003c  addiu       $a1, $sp, 0x3C
    ctx->pc = 0x56a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x56a1c4: 0x8c4289c8  lw          $v0, -0x7638($v0)
    ctx->pc = 0x56a1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937032)));
    // 0x56a1c8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x56a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x56a1cc: 0xc058300  jal         func_160C00
    ctx->pc = 0x56A1CCu;
    SET_GPR_U32(ctx, 31, 0x56A1D4u);
    ctx->pc = 0x56A1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A1CCu;
            // 0x56a1d0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A1D4u; }
        if (ctx->pc != 0x56A1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A1D4u; }
        if (ctx->pc != 0x56A1D4u) { return; }
    }
    ctx->pc = 0x56A1D4u;
label_56a1d4:
    // 0x56a1d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x56a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x56a1d8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x56a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x56a1dc: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x56a1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x56a1e0: 0x2484fe30  addiu       $a0, $a0, -0x1D0
    ctx->pc = 0x56a1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966832));
    // 0x56a1e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x56a1e8: 0x8ca50968  lw          $a1, 0x968($a1)
    ctx->pc = 0x56a1e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2408)));
    // 0x56a1ec: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x56a1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
    // 0x56a1f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x56a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x56a1f4: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x56a1f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
    // 0x56a1f8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x56a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x56a1fc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x56a1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56a200: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x56a200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x56a204: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x56a204u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x56a208: 0xae03006c  sw          $v1, 0x6C($s0)
    ctx->pc = 0x56a208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 3));
    // 0x56a20c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x56a20cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x56a210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56a210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x56a214: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56a214u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x56a218: 0x3e00008  jr          $ra
    ctx->pc = 0x56A218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A218u;
            // 0x56a21c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56A220u;
    // 0x56a220: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x56a220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x56a224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x56a224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x56a228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56a228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x56a22c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x56a22cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56a230: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x56A230u;
    {
        const bool branch_taken_0x56a230 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a230) {
            ctx->pc = 0x56A234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A230u;
            // 0x56a234: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A264u;
            goto label_56a264;
        }
    }
    ctx->pc = 0x56A238u;
    // 0x56a238: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x56a23c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x56a23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
    // 0x56a240: 0x24428338  addiu       $v0, $v0, -0x7CC8
    ctx->pc = 0x56a240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935352));
    // 0x56a244: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x56a244u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x56a248: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x56a248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x56a24c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x56a24cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x56a250: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x56A250u;
    {
        const bool branch_taken_0x56a250 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x56A254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A250u;
            // 0x56a254: 0xac401ce8  sw          $zero, 0x1CE8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 7400), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a250) {
            ctx->pc = 0x56A260u;
            goto label_56a260;
        }
    }
    ctx->pc = 0x56A258u;
    // 0x56a258: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x56A258u;
    SET_GPR_U32(ctx, 31, 0x56A260u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A260u; }
        if (ctx->pc != 0x56A260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A260u; }
        if (ctx->pc != 0x56A260u) { return; }
    }
    ctx->pc = 0x56A260u;
label_56a260:
    // 0x56a260: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x56a260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56a264:
    // 0x56a264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x56a264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x56a268: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56a268u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x56a26c: 0x3e00008  jr          $ra
    ctx->pc = 0x56A26Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A26Cu;
            // 0x56a270: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56A274u;
    // 0x56a274: 0x0  nop
    ctx->pc = 0x56a274u;
    // NOP
    // 0x56a278: 0x0  nop
    ctx->pc = 0x56a278u;
    // NOP
    // 0x56a27c: 0x0  nop
    ctx->pc = 0x56a27cu;
    // NOP
label_56a280:
    // 0x56a280: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x56a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x56a284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x56a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x56a288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x56a288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x56a28c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56a28cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x56a290: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x56a290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56a294: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x56A294u;
    {
        const bool branch_taken_0x56a294 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A294u;
            // 0x56a298: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a294) {
            ctx->pc = 0x56A348u;
            goto label_56a348;
        }
    }
    ctx->pc = 0x56A29Cu;
    // 0x56a29c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x56a2a0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56a2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x56a2a4: 0x246382f0  addiu       $v1, $v1, -0x7D10
    ctx->pc = 0x56a2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935280));
    // 0x56a2a8: 0x244282fc  addiu       $v0, $v0, -0x7D04
    ctx->pc = 0x56a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935292));
    // 0x56a2ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x56a2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x56a2b0: 0x26250058  addiu       $a1, $s1, 0x58
    ctx->pc = 0x56a2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
    // 0x56a2b4: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x56A2B4u;
    {
        const bool branch_taken_0x56a2b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x56A2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A2B4u;
            // 0x56a2b8: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x56a2b4) {
            ctx->pc = 0x56A2F4u;
            goto label_56a2f4;
        }
    }
    ctx->pc = 0x56A2BCu;
    // 0x56a2bc: 0x50a0000e  beql        $a1, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x56A2BCu;
    {
        const bool branch_taken_0x56a2bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a2bc) {
            ctx->pc = 0x56A2C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A2BCu;
            // 0x56a2c0: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A2F8u;
            goto label_56a2f8;
        }
    }
    ctx->pc = 0x56A2C4u;
    // 0x56a2c4: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x56A2C4u;
    {
        const bool branch_taken_0x56a2c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a2c4) {
            ctx->pc = 0x56A2F4u;
            goto label_56a2f4;
        }
    }
    ctx->pc = 0x56A2CCu;
    // 0x56a2cc: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x56A2CCu;
    {
        const bool branch_taken_0x56a2cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a2cc) {
            ctx->pc = 0x56A2F4u;
            goto label_56a2f4;
        }
    }
    ctx->pc = 0x56A2D4u;
    // 0x56a2d4: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x56a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
    // 0x56a2d8: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x56a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x56a2dc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x56a2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x56a2e0: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x56a2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x56a2e4: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x56a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x56a2e8: 0x27a70034  addiu       $a3, $sp, 0x34
    ctx->pc = 0x56a2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x56a2ec: 0xc05827c  jal         func_1609F0
    ctx->pc = 0x56A2ECu;
    SET_GPR_U32(ctx, 31, 0x56A2F4u);
    ctx->pc = 0x56A2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A2ECu;
            // 0x56a2f0: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1609F0u;
    if (runtime->hasFunction(0x1609F0u)) {
        auto targetFn = runtime->lookupFunction(0x1609F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A2F4u; }
        if (ctx->pc != 0x56A2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001609F0_0x1609f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A2F4u; }
        if (ctx->pc != 0x56A2F4u) { return; }
    }
    ctx->pc = 0x56A2F4u;
label_56a2f4:
    // 0x56a2f4: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x56a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_56a2f8:
    // 0x56a2f8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x56A2F8u;
    {
        const bool branch_taken_0x56a2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a2f8) {
            ctx->pc = 0x56A314u;
            goto label_56a314;
        }
    }
    ctx->pc = 0x56A300u;
    // 0x56a300: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x56a300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x56a304: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x56a304u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56a308: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x56a308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
    // 0x56a30c: 0xc057a68  jal         func_15E9A0
    ctx->pc = 0x56A30Cu;
    SET_GPR_U32(ctx, 31, 0x56A314u);
    ctx->pc = 0x56A310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A30Cu;
            // 0x56a310: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A314u; }
        if (ctx->pc != 0x56A314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A314u; }
        if (ctx->pc != 0x56A314u) { return; }
    }
    ctx->pc = 0x56A314u;
label_56a314:
    // 0x56a314: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x56A314u;
    {
        const bool branch_taken_0x56a314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x56a314) {
            ctx->pc = 0x56A318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A314u;
            // 0x56a318: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A334u;
            goto label_56a334;
        }
    }
    ctx->pc = 0x56A31Cu;
    // 0x56a31c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x56a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x56a320: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x56a320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x56a324: 0x24638338  addiu       $v1, $v1, -0x7CC8
    ctx->pc = 0x56a324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935352));
    // 0x56a328: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x56a328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x56a32c: 0xac401ce8  sw          $zero, 0x1CE8($v0)
    ctx->pc = 0x56a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7400), GPR_U32(ctx, 0));
    // 0x56a330: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x56a330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_56a334:
    // 0x56a334: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x56a334u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x56a338: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x56A338u;
    {
        const bool branch_taken_0x56a338 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x56a338) {
            ctx->pc = 0x56A33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56A338u;
            // 0x56a33c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56A34Cu;
            goto label_56a34c;
        }
    }
    ctx->pc = 0x56A340u;
    // 0x56a340: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x56A340u;
    SET_GPR_U32(ctx, 31, 0x56A348u);
    ctx->pc = 0x56A344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A340u;
            // 0x56a344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A348u; }
        if (ctx->pc != 0x56A348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56A348u; }
        if (ctx->pc != 0x56A348u) { return; }
    }
    ctx->pc = 0x56A348u;
label_56a348:
    // 0x56a348: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x56a348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56a34c:
    // 0x56a34c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x56a34cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x56a350: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56a350u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x56a354: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x56a354u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x56a358: 0x3e00008  jr          $ra
    ctx->pc = 0x56A358u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56A35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x56A358u;
            // 0x56a35c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56A360u;
    // 0x56a360: 0x80cc93c  j           func_3324F0
    ctx->pc = 0x56A360u;
    ctx->pc = 0x56A364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A360u;
            // 0x56a364: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3324F0u;
    {
        auto targetFn = runtime->lookupFunction(0x3324F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x56A368u;
    // 0x56a368: 0x0  nop
    ctx->pc = 0x56a368u;
    // NOP
    // 0x56a36c: 0x0  nop
    ctx->pc = 0x56a36cu;
    // NOP
    // 0x56a370: 0x815a808  j           func_56A020
    ctx->pc = 0x56A370u;
    ctx->pc = 0x56A374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A370u;
            // 0x56a374: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56A020u;
    {
        auto targetFn = runtime->lookupFunction(0x56A020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x56A378u;
    // 0x56a378: 0x0  nop
    ctx->pc = 0x56a378u;
    // NOP
    // 0x56a37c: 0x0  nop
    ctx->pc = 0x56a37cu;
    // NOP
    // 0x56a380: 0x815a8a0  j           func_56A280
    ctx->pc = 0x56A380u;
    ctx->pc = 0x56A384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56A380u;
            // 0x56a384: 0x2484fffc  addiu       $a0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
    ctx->pc = 0x56A280u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_56a280;
    ctx->pc = 0x56A388u;
    // 0x56a388: 0x0  nop
    ctx->pc = 0x56a388u;
    // NOP
    // 0x56a38c: 0x0  nop
    ctx->pc = 0x56a38cu;
    // NOP
}
